//
//  ResultViewController.swift
//  Cara_OU_Coroa
//
//  Created by Mario on 23/05/18.
//  Copyright © 2018 Mario. All rights reserved.
//

import UIKit

class ResultViewController: UIViewController
{

    @IBOutlet weak var resultImage: UIImageView!
    
    var resultNumber:Int!
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        
        print(resultNumber)
        
        if resultNumber == 1
        {
            resultImage.image = UIImage(named: "moeda_cara")
        }
        else
        {
            resultImage.image = UIImage(named: "moeda_coroa")
        }
    }

    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()

    }
}
