//
//  NoiseMakerAppDelegate.h
//  NoiseMaker
//
//  Created by John Abeel on 7/15/11.
//  Copyright 2011 Wakefield School. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NoiseMakerViewController;

@interface NoiseMakerAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet NoiseMakerViewController *viewController;

@end
