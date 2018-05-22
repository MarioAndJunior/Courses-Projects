//
//  ViewController.swift
//  Frases_do_dia
//
//  Created by Mario on 18/05/18.
//  Copyright © 2018 Mario. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var phraseLabel: UILabel!

    
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        
    }

    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
        
    }
    
    @IBAction func phraseButton(_ sender: Any)
    {
        phraseLabel.text = generatePhrases()
    }

    func generatePhrases()-> String
    {
        let phrases:Array<String> = ["Melhor previnir que remediar", "Melhor um passaro na mao que dois voando", "Melhor dois do que um", "Tudo na vida passa", "O amor supera todas as coisas", "Amanhã será um novo dia"]
        
        let randomIndex = arc4random_uniform(UInt32(phrases.count))
        let random = Int(randomIndex)
        
        return phrases[random]
    }
        
}

