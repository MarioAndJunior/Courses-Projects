//
//  DetailsViewController.swift
//  Segue_dados
//
//  Created by Mario on 23/05/18.
//  Copyright © 2018 Mario. All rights reserved.
//

import UIKit

class DetailsViewController: UIViewController
{

    @IBOutlet weak var passedDataText: UILabel!
    
    var passedText:String = "0"
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        passedDataText.text = passedText
        
    }

    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}
