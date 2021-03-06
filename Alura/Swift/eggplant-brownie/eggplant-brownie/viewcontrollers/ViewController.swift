//
//  ViewController.swift
//  eggplant-brownie
//
//  Created by hst on 4/18/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class ViewController: UIViewController, UITableViewDataSource, UITableViewDelegate, AddAnItemDelegate
{
    var selected = Array<Item>()
    var items = [
                Item(name: "Arroz", calories: 50),
                 Item(name: "feijao", calories: 40),
                 Item(name: "batata", calories: 10),
                 Item(name: "macarrao", calories: 10),
                 Item(name: "maionese", calories: 10),
                ]
    
    @IBOutlet var tableView : UITableView?
    
    func add(_ item: Item)
    {
        items.append(item)
        
        Dao().save(items)
        
        if let table = tableView
        {
            table.reloadData()
        }
        else
        {
            Alert(controller: self).show("Deu ruim!")
        }
    }
    
    override func viewDidLoad()
    {
        let newItemButton = UIBarButtonItem(title: "new item", style: UIBarButtonItemStyle.plain, target: self, action: #selector(showNewItem))
        navigationItem.rightBarButtonItem = newItemButton
        
        self.items = Dao().load()
    }
    
    @objc func showNewItem()
    {
        let newItem = NewItemViewController(delegate: self)
        if let navigation = navigationController
        {
            navigation.pushViewController(newItem, animated: true)
        }
    }
    
    @IBOutlet var nameField : UITextField?
    @IBOutlet var happinessField : UITextField?
    var delegate : AddAMealDelegate?
    

        
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int
    {
        return items.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell
    {
        let cell = UITableViewCell(style: UITableViewCellStyle.default, reuseIdentifier: nil)
        let row = indexPath.row
        let item = items[row]
        cell.textLabel!.text = item.name
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath)
    {
        if let cell = tableView.cellForRow(at: indexPath)
        {
            if(cell.accessoryType == UITableViewCellAccessoryType.none)
            {
                cell.accessoryType = UITableViewCellAccessoryType.checkmark
                let item = items[indexPath.row]
                selected.append(item)

            }
            else
            {
                cell.accessoryType = UITableViewCellAccessoryType.none
                let item = items[indexPath.row]
                if let position = selected.index(of: item)
                {
                    selected.remove(at: position)
                }
            }
        }
        else
        {
            Alert(controller: self) .show()
        }
    }
    
    func convertToInt(_ text:String?) -> Int?
    {
        if let number = text
        {
            return Int(number)
        }
        return nil
    }
    
    func getMealFromForm() -> Meal?
    {
        if let name = nameField?.text
        {
            if let happiness = convertToInt(happinessField?.text)
            {
                let meal = Meal(name: name, happiness: happiness, items: selected)
                
                print("eaten \(meal.name) with happiness \(meal.happiness)! with \(meal.items)")
                
                return meal
            }
        }
        return nil
    }
    
     @IBAction func add()
     {
        if let meal = getMealFromForm()
        {
            if let meals = delegate
            {
                meals.add(meal)
                if let navigation = navigationController
                {
                    navigation.popViewController(animated: true)
                }
                else
                {
                    Alert(controller: self).show( message: "Unable to go back, but the meal was added")
                }
                return
            }
        }
        Alert(controller: self).show()
    }
}
