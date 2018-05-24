//
//  ViewController.swift
//  Cara_OU_Coroa
//
//  Created by Mario on 23/05/18.
//  Copyright © 2018 Mario. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    override func prepare(for segue: UIStoryboardSegue, sender: Any?)
    {
        if segue.identifier == "result"
        {
            let destinationVC = segue.destination as! ResultViewController
            destinationVC.resultNumber = Int(arc4random_uniform(2))
        }
    }

}

