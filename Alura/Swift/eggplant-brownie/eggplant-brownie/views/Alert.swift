//
//  Alert.swift
//  eggplant-brownie
//
//  Created by hst on 4/23/18.
//  Copyright © 2018 hst. All rights reserved.
//

import Foundation
import UIKit

class Alert
{
    let controller:UIViewController
    
    init(controller:UIViewController)
    {
        self.controller = controller
    }
    
    func show(_ title:String = "Sorry", message:String = "Unexpected error")
    {
        let alert = UIAlertController(title: "Sorry", message: message, preferredStyle: UIAlertControllerStyle.alert)
        let ok = UIAlertAction(title: "Ok", style: UIAlertActionStyle.cancel, handler: nil)
        alert.addAction(ok)
        controller.present(alert, animated: true, completion: nil)
    }
}
