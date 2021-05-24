//
//  ViewController.swift
//  idade_cachorro
//
//  Created by Mario on 12/05/18.
//  Copyright © 2018 Mario. All rights reserved.
//

import UIKit

class ViewController: UIViewController, UITextFieldDelegate
{

    @IBOutlet var containerOutlet: UIView!
    @IBOutlet weak var mainView: UIView!
    @IBOutlet weak var tipeAgeTextField: UILabel!
    @IBOutlet weak var typeAgeTextField: UITextField!
    @IBOutlet weak var resultAgeLabel: UILabel!
    
    @IBAction func findButton(_ sender: Any)
    {
        calculateAge()
        textFieldShouldReturn(typeAgeTextField)
        typeAgeTextField.text = ""
    }
    
    func textFieldShouldReturn(_ textField: UITextField) -> Bool {
        typeAgeTextField.resignFirstResponder()
        return true
    }

    func calculateAge()
    {
        if !(typeAgeTextField.text?.isEmpty)!
        {
            let calculedAge:Int = (Int(typeAgeTextField.text!)! * 7)
            resultAgeLabel.text = "A idade humana dele(a) é \(calculedAge) anos"
        }
        else
        {
             resultAgeLabel.text = "Por favor digite um número inteiro"
        }
    }
    
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        self.typeAgeTextField.delegate = self
    }

    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

