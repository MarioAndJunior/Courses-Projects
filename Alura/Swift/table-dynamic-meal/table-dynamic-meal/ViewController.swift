//
//  ViewController.swift
//  table-dynamic-meal
//
//  Created by hst on 4/19/18.
//  Copyright © 2018 hst. All rights reserved.
//

import UIKit

class ViewController: UITableViewController {

    let meals = ["lalal", "oioioi", "vavava"]
    override func viewDidLoad() {
        super.viewDidLoad()
        print("tela carregada com sucesso")
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return meals.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let row = indexPath.row
        let meal = meals[row]
        let cell = UITableViewCell(style: UITableViewCellStyle.default, reuseIdentifier: nil)
        cell.textLabel!.text = meal
        return cell
        
    }
    
}

