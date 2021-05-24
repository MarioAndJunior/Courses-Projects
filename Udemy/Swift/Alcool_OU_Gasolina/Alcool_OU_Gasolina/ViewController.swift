//
//  ViewController.swift
//  Alcool_OU_Gasolina
//
//  Created by Mario on 18/05/18.
//  Copyright © 2018 Mario. All rights reserved.
//

import UIKit

class ViewController: UIViewController, UITextFieldDelegate
{

    
    @IBOutlet weak var ethanolPriceLabel: UILabel!
    @IBOutlet weak var gasPriceLabel: UILabel!
    @IBOutlet weak var whicUseLabel: UILabel!
    @IBOutlet weak var whichUseButton: UIButton!
    
    @IBOutlet weak var ethanolPriceTextField: UITextField!
    @IBOutlet weak var gasPriceTextFiled: UITextField!
    

    
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        
        self.ethanolPriceTextField.delegate = self
        self.gasPriceTextFiled.delegate = self
        
        
        setLayout()
    }

    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
     
    }
    
    func setLayout()
    {
       setColors()
    }
    
    func setColors()
    {
        ethanolPriceLabel.textColor = UIColor.white
        gasPriceLabel.textColor = UIColor.white
        whicUseLabel.textColor = UIColor.white
        whichUseButton.tintColor = UIColor.white
    }
    
    func textFieldShouldReturn(_ textField: UITextField) -> Bool
    {
        ethanolPriceTextField.resignFirstResponder()
        gasPriceTextFiled.resignFirstResponder()
        
        return true
    }
    
    func validateTextFields(ethanolValue:String, gasValue:String)-> Bool
    {
        var isValidField:Bool = true
        
        if ethanolValue.isEmpty
        {
           isValidField = false
        }
        else if gasValue.isEmpty
        {
            isValidField = false
        }
        else
        {
            isValidField = true
        }
        
        return isValidField
    }
    
    func calculateWhichToUse()
    {
        if let gasPrice: String = gasPriceTextFiled.text
        {
           if let ethanolPrice:String = ethanolPriceTextField.text
            {
                let validatedFields:Bool = self.validateTextFields(ethanolValue: ethanolPrice, gasValue: gasPrice)
                
                if validatedFields == true
                {
                    if let ethanolPrice:Double = Double(ethanolPrice)
                    {
                        if let gasPrice:Double = Double(gasPrice)
                        {
                            let bestValue:Double = (ethanolPrice/gasPrice)
                            if bestValue >= 0.7
                            {
                                whicUseLabel.text = "Melhor usar gasolina!"
                            }
                            else
                            {
                                whicUseLabel.text = "Melhor usar álcool!"
                            }
                        }
                    }
                }
                else
                {
                    whicUseLabel.text = "Digite os campos por favor!"
                }
            }
        }
    }
    
    @IBAction func whichUseButton(_ sender: Any)
    {
        calculateWhichToUse()
        
       textFieldShouldReturn(ethanolPriceTextField)
        ethanolPriceTextField.text = ""
        gasPriceTextFiled.text = ""
        
    }

}

