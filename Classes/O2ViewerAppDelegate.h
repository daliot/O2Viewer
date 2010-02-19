//
//  O2ViewerAppDelegate.h
//  O2Viewer
//
//  Created by 오화종 on 10. 02. 11.
//  Copyright 없음 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface O2ViewerAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
