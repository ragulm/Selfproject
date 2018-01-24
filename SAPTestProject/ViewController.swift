//
//  ViewController.swift
//  SAPTestProject
//
//  Created by Arteria on 23/01/18.
//  Copyright © 2018 Arteria. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    var appDelegate:AppDelegate! = nil
    var logonHandler : LogonHandler? = nil

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    override func viewDidAppear(_ animated: Bool) {
        appDelegate = UIApplication.shared.delegate as! AppDelegate!
        self.logonHandler = LogonHandler.singelton()
        self.logonHandler?.logonUIViewManager?.parentViewController = self;
        self.logonHandler?.logonManager?.logon()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

