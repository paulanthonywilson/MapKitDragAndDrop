//
//  DDAnnotation.h
//  MapKitDragAndDrop
//
//  Created by digdog on 7/24/09.
//  Copyright 2009 digdog software. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface DDAnnotation : NSObject <MKAnnotation> {
@private
	CLLocationCoordinate2D _coordinate;
	NSString *_title;
	MKPlacemark *_placemark;
}

@property (nonatomic, assign) MKPlacemark *placemark;

- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate title:(NSString*)title;
- (void)changeCoordinate:(CLLocationCoordinate2D)coordinate;
@end