//
//  CustomRegistrationViewController.swift
//  SAPTestProject
//
//  Created by Arteria on 23/01/18.
//  Copyright © 2018 Arteria. All rights reserved.
//

import UIKit
import SkyFloatingLabelTextField
import NVActivityIndicatorView

class CustomRegistrationViewController: UIViewController,NVActivityIndicatorViewable {
    
    //TextField
    @IBOutlet weak var txtUserName: SkyFloatingLabelTextFieldWithIcon!
    
    @IBOutlet weak var txtPassword: SkyFloatingLabelTextFieldWithIcon!
    //Button
    @IBOutlet weak var btnSubmit: UIButton! 
    
    @IBOutlet weak var acctivityInd: NVActivityIndicatorView!
    
    //Image View
    @IBOutlet weak var imgHeaderView: UIImageView!
    
    //Properties
    
    var networkStatus: Int = 0
    var wronAttempt:Int = 0
    var activityIndicatorView:NVActivityIndicatorView?
    
    
    var logonHandler:LogonHandler?
    var logonUIViewManager:MAFLogonUIViewManager?
    var logonManager: MAFLogonNGPublicAPI?
    
    
    var indicatorTest:NVActivityIndicatorView?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //self.SetIndicator()
        //self.acctivityInd.startAnimating()
        self.imgHeaderView.clipsToBounds = false
         self.imgHeaderView.layer.shadowColor = UIColor.white.cgColor
         self.imgHeaderView.layer.shadowOpacity = 1
         self.imgHeaderView.layer.shadowOffset = CGSize.zero
         self.imgHeaderView.layer.shadowRadius = 10

        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    //MARK:Button action
    @IBAction func btnSubmit(_ sender: UIButton) {
        let getUserName=self.txtUserName.text
        let getPassword=self.txtPassword.text
        
        let whitespace = NSCharacterSet.whitespaces

        let range = getUserName?.rangeOfCharacter(from: whitespace)
        
        let range1 = getPassword?.rangeOfCharacter(from: whitespace)
        
       
        
        if getUserName==nil || getUserName==""
        {
            self.showToast(message: "Please Enter user name")
        }
        else if getPassword==nil || getPassword==""
        {
            self.showToast(message: "Please Enter Password")
        }
        else  if range != nil || range1 != nil
        {
            self.showToast(message: "Please Valid Data")
        }else
        {
            self.Registration(uName: getUserName!, pSWord: getPassword!)
        }
        
        
    }
    
    //MARK: Indicator
    func SetIndicator() {
        let frame = CGRect(x: self.view.frame.size.width/2, y: self.view.frame.size.height/2, width: 40, height: 40)
       self.activityIndicatorView = NVActivityIndicatorView(frame: frame)
        self.activityIndicatorView?.type = .ballClipRotate
        //self.activityIndicatorView?.backgroundColor=UIColor.red
        self.activityIndicatorView?.color = UIColor.white
        self.view.addSubview(self.activityIndicatorView!)
    }
    
    
    // MARK: Registration
    
    func Registration(uName:String, pSWord:String)  {
        networkStatus = 0
        networkStatus = Int(NetworkConnectivity.sharedInstance().wifi_Checking())
        
        if networkStatus == 2
        {
             self.showToast(message: "Please check your internet connection")
        }else
           
        {
            //CommonMethods.sharedInstance().showProgressIndicator(withTitle: "Loading")
            //CommonMethod.sharedInstance.showProgressIndicatorWithTitle(title: "Loading")
             indicatorTest=self.showActivityIndicator()
            indicatorTest?.startAnimating()
            LogonHandler.singelton().onDeviceRegister(uName, pSWord, {(
                success) in
                //CommonMethods.sharedInstance().hideProgressIndicator()
                //self.activityIndicatorView?.stopAnimating()
                self.stopAnim(indicator: self.indicatorTest!)
                if(success)
                {
                    //CommonMethods.sharedInstance().hideProgressIndicator()
                    //self.activityIndicatorView?.stopAnimating()
                    self.stopAnim(indicator: self.indicatorTest!)
                     self.showToast(message: "Registration Successfull")
                }
                else{
                    //CommonMethods.sharedInstance().hideProgressIndicator()
                    //self.activityIndicatorView?.stopAnimating()
                    self.stopAnim(indicator: self.indicatorTest!)
                    self.showToast(message: "Some Error occured OR Registration completed")
                }
                
                
                
            })
            
        }
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
