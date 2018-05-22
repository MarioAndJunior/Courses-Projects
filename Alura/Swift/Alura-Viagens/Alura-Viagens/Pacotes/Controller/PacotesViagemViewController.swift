//
//  PacotesViagemViewController.swift
//  Alura-Viagens
//
//  Created by hst on 4/26/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class PacotesViagemViewController: UIViewController, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, UICollectionViewDelegate
{

    @IBOutlet weak var pesquisarViagens: UISearchBar!
    @IBOutlet weak var colecaoPacotesViagem: UICollectionView!
    @IBOutlet weak var labelAtualizaContador: UILabel!
    
    
    let listaComTodasAsViagens:Array<PacoteViagem> = PacoteViagemDAO().retornaTodasAsViagens()
    var listaViagens:Array<PacoteViagem> = []
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.labelAtualizaContador.text = self.atualizaContadorLabel()
        listaViagens = listaComTodasAsViagens
        colecaoPacotesViagem.dataSource = self
        colecaoPacotesViagem.delegate = self
        pesquisarViagens.delegate = self
        

        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int
    {
        return self.listaViagens.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        
        let celulaPacote = collectionView.dequeueReusableCell(withReuseIdentifier: "celulaPacote", for: indexPath) as! PacotesViagemCollectionViewCell

        let pacoteAtual = listaViagens[indexPath.item]
        
        celulaPacote.configuraCelula(pacoteViagem: pacoteAtual)
        
        return celulaPacote
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize
    {
//        let larguraCelula = collectionView.bounds.width / 2
//        return CGSize(width: larguraCelula - 15, height: 160)
        return UIDevice.current.userInterfaceIdiom == .phone ? CGSize(width: collectionView.bounds.width/2-20, height: 160) : CGSize(width: collectionView.bounds.width/3-20, height: 250)
    }
    
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        let pacote = listaViagens[indexPath.item]
        let storyboard = UIStoryboard(name: "Main", bundle: nil)
        let controller = storyboard.instantiateViewController(withIdentifier: "detalhe") as! DetalhesViagensViewController
        controller.pacoteSelecionado = pacote
        self.navigationController?.pushViewController(controller, animated: true)
    }
    func searchBar(_ searchBar: UISearchBar, textDidChange searchText: String)
    {
        listaViagens = listaComTodasAsViagens
//        if searchText != ""
//        {
//            let filtroListaViagem = NSPredicate(format: "viagem.titulo contains %@", searchText)
//            let listaFiltrada:Array<PacoteViagem> = (listaViagens as NSArray).filtered(using:   filtroListaViagem) as! Array
//            listaViagens = listaFiltrada
//        }
//        self.labelAtualizaContador.text = self.atualizaContadorLabel()
        if searchText != ""
        {
            listaViagens = listaViagens.filter { $0.viagem.titulo.contains(searchText) }
        }
        colecaoPacotesViagem.reloadData()
    }
    
    func atualizaContadorLabel() -> String
    {
        return listaViagens.count == 1 ? "1 pacote encontrado" : "\(listaViagens.count) pacotes encontrados"
    }
}
