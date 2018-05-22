//
//  PacotesViagemCollectionViewCell.swift
//  Alura-Viagens
//
//  Created by hst on 4/26/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class PacotesViagemCollectionViewCell: UICollectionViewCell {
    
    @IBOutlet weak var imagemViagem: UIImageView!
    @IBOutlet weak var labelTitulo: UILabel!
    @IBOutlet weak var quantidadeDias: UILabel!
    @IBOutlet weak var labelPreco: UILabel!
    
    func configuraCelula(pacoteViagem:PacoteViagem)
    {
        labelTitulo.text = pacoteViagem.viagem.titulo
        labelPreco.text = "R$ \(pacoteViagem.viagem.preco)"
        quantidadeDias.text = "\(pacoteViagem.viagem.quantidadeDeDias) dias"
        
        imagemViagem.image = UIImage(named: pacoteViagem.viagem.caminhoDaImagem)
        
        layer.borderWidth = 0.5
        layer.borderColor = UIColor(red: 85.0/255.0, green: 85.0/255.0, blue: 85.0/255.0, alpha: 1).cgColor
        
        layer.cornerRadius = 8
        
    }
}
