//
//  ConfirmacaoPagamentoViewController.swift
//  Alura-Viagens
//
//  Created by hst on 4/27/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class ConfirmacaoPagamentoViewController: UIViewController {

    @IBOutlet weak var imagemPacoteViagem: UIImageView!
    @IBOutlet weak var labelTituloPacoteViagem: UILabel!
    @IBOutlet weak var labelHotelPacoteViagem: UILabel!
    @IBOutlet weak var labelDataPacoteViagem: UILabel!
    @IBOutlet weak var labelQuantidadePessoas: UILabel!
    @IBOutlet weak var hotelDescricaoPacoteViagem: UILabel!
    @IBOutlet weak var botaoHome: UIButton!
    
    var pacoteComprado:PacoteViagem? = nil
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        if let pacote = pacoteComprado
        {
            self.imagemPacoteViagem.image = UIImage(named: pacote.viagem.caminhoDaImagem)
            self.labelTituloPacoteViagem.text = pacote.viagem.titulo.uppercased()
            self.labelHotelPacoteViagem.text = pacote.nomeDoHotel
            self.hotelDescricaoPacoteViagem.text = pacote.descricao
            self.labelDataPacoteViagem.text = pacote.dataViagem
            
            self.imagemPacoteViagem.layer.cornerRadius = 10
            self.imagemPacoteViagem.layer.masksToBounds = true
            
            self.botaoHome.layer.cornerRadius = 8
            
        }

        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    @IBAction func botaoVoltarHome(_ sender: UIButton)
    {
        if let navigation = self.navigationController
        {
            navigation.popToRootViewController(animated: true)
        }
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
