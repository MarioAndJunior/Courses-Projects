//
//  NewItemViewContorllerViewController.swift
//  eggplant-brownie
//
//  Created by hst on 4/20/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class NewItemViewController: UIViewController {

    var delegate:AddAnItemDelegate?
    
    init(delegate: AddAnItemDelegate)
    {
        super.init(nibName: "NewItemViewController", bundle: nil)
        self.delegate = delegate
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
    }
    
    @IBOutlet var nameField : UITextField?
    
    @IBOutlet var caloriesField : UITextField?
    
    @IBAction func addNewItem()
    {
        let name = nameField?.text
        let calories = Double(caloriesField!.text!)
        
        if(name == nil || calories == nil || delegate == nil)
        {
            return
        }
        let item = Item(name: name!, calories: calories!)
        delegate?.add(item)
        
        print("adding new item")
        
        if let navigation = navigationController
        {
            navigation.popViewController(animated: true)
        }
    }

}
