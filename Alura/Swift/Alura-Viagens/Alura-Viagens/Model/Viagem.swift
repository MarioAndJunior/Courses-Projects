//
//  Viagens.swift
//  Alura-Viagens
//
//  Created by hst on 4/25/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class Viagem: NSObject {

    @objc let titulo:String
    let quantidadeDeDias:Int
    let preco:String
    let caminhoDaImagem:String
    
    init(titulo:String, quantidadeDeDias:Int, preco:String, caminhoDaImagem:String) {
        self.titulo = titulo
        self.quantidadeDeDias = quantidadeDeDias
        self.preco = preco
        self.caminhoDaImagem = caminhoDaImagem
    }

}
