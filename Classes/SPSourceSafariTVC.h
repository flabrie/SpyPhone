//
//  SPSourceSafariTVC.h
//  SpyPhone
//
//  Created by Nicolas Seriot on 11/15/09.
//  Copyright 2009. 
//  Licensed under GPL 2.0 http://www.gnu.org/licenses/gpl-2.0.txt
//

#import <UIKit/UIKit.h>
#import "SPSourceTVC.h"

@class SPWebViewVC;

@interface SPSourceSafariTVC : SPSourceTVC {
	IBOutlet SPWebViewVC *webViewVC;

}

@property (nonatomic, retain) SPWebViewVC *webViewVC;

@end
