//
//  PacoteViagem.swift
//  Alura-Viagens
//
//  Created by hst on 4/27/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class PacoteViagem: NSObject
{
    let nomeDoHotel:String
    let descricao:String
    let dataViagem:String
    let viagem:Viagem
    
    init(nomeDoHotel:String, descricao:String, dataViagem:String, viagem:Viagem)
    {
        self.nomeDoHotel = nomeDoHotel
        self.descricao = descricao
        self.dataViagem = dataViagem
        self.viagem = viagem
    }
}
