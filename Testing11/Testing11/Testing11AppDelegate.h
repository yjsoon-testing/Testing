//
//  Testing11AppDelegate.h
//  Testing11
//
//  Created by student on 9/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Testing11ViewController;

@interface Testing11AppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Testing11ViewController *viewController;

@end
