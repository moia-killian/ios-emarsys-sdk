//
// Copyright (c) 2018 Emarsys. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "EMSUserNotificationCenterDelegate.h"
#import "MEIAMProtocol.h"

@class MobileEngageInternal;

@interface MEUserNotificationDelegate : NSObject <EMSUserNotificationCenterDelegate>

- (instancetype)initWithApplication:(UIApplication *)application
               mobileEngageInternal:(MobileEngageInternal *)mobileEngage
                              inApp:(id <MEIAMProtocol>)inApp;

@end
