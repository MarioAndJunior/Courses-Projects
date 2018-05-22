//
//  DetalhesViagensViewController.swift
//  Alura-Viagens
//
//  Created by hst on 4/26/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class DetalhesViagensViewController: UIViewController {

    @IBOutlet weak var imagemPacoteViagem: UIImageView!
    @IBOutlet weak var labelTituloPacoteViagem: UILabel!
    @IBOutlet weak var labelDescricaoPacoteViagem: UILabel!
    @IBOutlet weak var labelDataViagem: UILabel!
    @IBOutlet weak var labelPreco: UILabel!
    
    @IBOutlet weak var scrollPrincipal: UIScrollView!
    @IBOutlet weak var textFieldData: UITextField!
    var pacoteSelecionado:PacoteViagem? = nil
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        NotificationCenter.default.addObserver(self, selector: #selector(aumemtarScroll(notification:)), name: .UIKeyboardWillShow, object: nil)
        if let pacote = pacoteSelecionado
        {
            self.imagemPacoteViagem.image = UIImage(named: pacote.viagem.caminhoDaImagem)
            self.labelTituloPacoteViagem.text = pacote.viagem.titulo
            self.labelDescricaoPacoteViagem.text = pacote.descricao
            self.labelDataViagem.text = pacote.dataViagem
            self.labelPreco.text = pacote.viagem.preco
        }
    }
    
    @objc func aumemtarScroll(notification:Notification)
    {
        self.scrollPrincipal.contentSize = CGSize(width: self.scrollPrincipal.frame.width, height: self.scrollPrincipal.frame.height + 320)
        self.scrollPrincipal.contentOffset.y = 200
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @objc func exibeDataTextField(sender: UIDatePicker)
    {
        let formatador = DateFormatter()
        formatador.dateFormat = "dd/MM/yyyy"
        self.textFieldData.text = formatador.string(from: sender.date)
    }
    
    @IBAction func botaoVoltar(_ sender: UIButton)
    {
        self.dismiss(animated: true, completion: nil)
    }
    
    @IBAction func textFieldEntrouFoco(_ sender: UITextField)
    {
        let datePickerView = UIDatePicker()
        datePickerView.datePickerMode = .date
        sender.inputView = datePickerView
        datePickerView.addTarget(self, action: #selector(exibeDataTextField(sender:)), for: .valueChanged)
    }
    
    @IBAction func botaoFinalizarCompra(_ sender: UIButton)
    {
        let storyboard = UIStoryboard(name: "Main", bundle: nil)
        let controller = storyboard.instantiateViewController(withIdentifier: "confirmacaoPagamento") as! ConfirmacaoPagamentoViewController
        controller.pacoteComprado = pacoteSelecionado
        self.navigationController?.pushViewController(controller, animated: true)
    }
    
}
