//
//  Dao.swift
//  eggplant-brownie
//
//  Created by hst on 4/24/18.
//  Copyright © 2018 hst. All rights reserved.
//

import Foundation

class Dao
{
    func save(_ meals:Array<Meal>)
    {
        NSKeyedArchiver.archiveRootObject(meals, toFile: getArchive(resource: "meals"))
    }
    
    func load() -> Array<Meal>
    {
        if let loaded = NSKeyedUnarchiver.unarchiveObject(withFile: getArchive(resource: "meals"))
        {
            let meals = loaded as! Array<Meal>
            return meals
        }
        else
        {
            return []
        }
        
    }
    
    func save(_ items:Array<Item>)
    {
        NSKeyedArchiver.archiveRootObject(items, toFile: getArchive(resource: "items"))
    }
    
    func load() -> Array<Item>
    {
        if let loaded = NSKeyedUnarchiver.unarchiveObject(withFile: getArchive(resource: "items"))
        {
            let items = loaded as! Array<Item>
            return items
        }
        else
        {
            return []
        }
    }
    
    
    func getArchive(resource:String) -> String
    {
        let userDirs = NSSearchPathForDirectoriesInDomains(FileManager.SearchPathDirectory.documentDirectory, FileManager.SearchPathDomainMask.userDomainMask, true)
        let dir = userDirs[0]
        print("saving file in \(dir)")
        let archive = "\(dir)/eggplant-brownie-\(resource).dados"
        return archive
    }
    
}
