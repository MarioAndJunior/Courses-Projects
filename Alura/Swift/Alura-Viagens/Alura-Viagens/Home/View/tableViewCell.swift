//
//  tableViewCellTableViewCell.swift
//  Alura-Viagens
//
//  Created by hst on 4/25/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class tableViewCell: UITableViewCell {

    @IBOutlet weak var labelTitulo: UILabel!
    @IBOutlet weak var labelQuantidadeDeDias: UILabel!
    @IBOutlet weak var labelPreco: UILabel!
    @IBOutlet weak var imagemViagem: UIImageView!
    
    func configuraCelula(viagem:Viagem)
    {
        labelTitulo.text = viagem.titulo
        labelPreco.text = "R$ \(viagem.preco)"
        labelQuantidadeDeDias.text = viagem.quantidadeDeDias == 1 ? "1 dia" : "\(viagem.quantidadeDeDias) dias"
        
        
        imagemViagem.image = UIImage(named: viagem.caminhoDaImagem)
        
        imagemViagem.layer.cornerRadius = 10
        imagemViagem.layer.masksToBounds = true
    }
    
    
}
