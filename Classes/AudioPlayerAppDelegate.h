//
//  AudioPlayerAppDelegate.h
//  AudioPlayer
//
//  Created by Dan Grigsby on 8/11/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AudioPlayerViewController;

@interface AudioPlayerAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    AudioPlayerViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet AudioPlayerViewController *viewController;

@end

