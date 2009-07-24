//
//  MapKitDragAndDropAppDelegate.h
//  MapKitDragAndDrop
//
//  Created by digdog on 7/24/09.
//  Copyright digdog software 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MapKitDragAndDropViewController;

@interface MapKitDragAndDropAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MapKitDragAndDropViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MapKitDragAndDropViewController *viewController;

@end

