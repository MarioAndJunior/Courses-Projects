//
//  ViewController.swift
//  App_sorteio
//
//  Created by Mario on 16/05/18.
//  Copyright © 2018 Mario. All rights reserved.
//

import UIKit

class ViewController: UIViewController
{

    @IBAction func generateButton(_ sender: Any)
    {
        numberLabel.text = String(arc4random_uniform(101))
    }
    
    
    @IBOutlet weak var numberLabel: UILabel!
    

    override func viewDidLoad()
    {
        super.viewDidLoad()
        
    }

    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
        
    }


}

