//
//  ViewController.swift
//  Segue_dados
//
//  Created by Mario on 23/05/18.
//  Copyright © 2018 Mario. All rights reserved.
//

import UIKit

class ViewController: UIViewController
{

    @IBOutlet weak var segueText: UITextField!
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        
    }

    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBAction func segueData(_ sender: Any)
    {
        
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?)
    {
        if segue.identifier == "detailsSegue"
        {
            let destinationVC = segue.destination as! DetailsViewController
            destinationVC.passedText = segueText.text!
        }
    }
}

