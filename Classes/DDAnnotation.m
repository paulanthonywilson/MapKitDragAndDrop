//
//  DDAnnotation.m
//  MapKitDragAndDrop
//
//  Created by digdog on 7/24/09.
//  Copyright 2009 digdog software. All rights reserved.
//

#import "DDAnnotation.h"

#pragma mark -
#pragma mark DDAnnotation implementation

@implementation DDAnnotation

@synthesize coordinate = _coordinate; // property declared in MKAnnotation.h
@synthesize placemark = _placemark;

- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate title:(NSString*)title {
	if (self = [super init]) {
		_coordinate = coordinate;
		_title = [title retain];
		_placemark = nil;
	}
	return self;
}

#pragma mark -
#pragma mark MKAnnotation Methods

- (NSString *)title {
	return _title;
}

- (NSString *)subtitle {
	NSString* subtitle = nil;
	
	if (_placemark) {
		subtitle = [NSString stringWithFormat:@"%@, %@", _placemark.administrativeArea, _placemark.country];
	} else {
		subtitle = [NSString stringWithFormat:@"%lf, %lf", _coordinate.latitude, _coordinate.longitude];
	}
	
	return subtitle;
}

#pragma mark -
#pragma mark Change coordinate

- (void)changeCoordinate:(CLLocationCoordinate2D)coordinate {
	_coordinate = coordinate;	
}

#pragma mark -
#pragma mark Memory Management

- (void)dealloc {
	[_title release], _title = nil;
	[super dealloc];
}

@end
