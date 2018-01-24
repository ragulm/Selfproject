//
//  ActivityIndicator.swift
//  SAPTestProject
//
//  Created by Arteria on 24/01/18.
//  Copyright © 2018 Arteria. All rights reserved.
//

import Foundation
import NVActivityIndicatorView

extension UIViewController {
    
    func showActivityIndicator() ->NVActivityIndicatorView {
        
        let frame = CGRect(x: self.view.frame.size.width/2, y: self.view.frame.size.height/2, width: 40, height: 40)
        let activityIndicatorView = NVActivityIndicatorView(frame: frame)
        activityIndicatorView.type = .ballClipRotate
        activityIndicatorView.backgroundColor=UIColor.red
        activityIndicatorView.color = UIColor.white
        self.view.addSubview(activityIndicatorView)
//        if action=="Start" {
//            activityIndicatorView.startAnimating()
//        }else{
//            activityIndicatorView.stopAnimating()
//        }
       return activityIndicatorView
    }
    
    func stopAnim(indicator:NVActivityIndicatorView) {
        indicator.stopAnimating()
    }
}
