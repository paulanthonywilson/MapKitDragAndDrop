//
//  MapKitDragAndDropAppDelegate.m
//  MapKitDragAndDrop
//
//  Created by digdog on 7/24/09.
//  Copyright digdog software 2009. All rights reserved.
//

#import "MapKitDragAndDropAppDelegate.h"
#import "MapKitDragAndDropViewController.h"

@implementation MapKitDragAndDropAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
