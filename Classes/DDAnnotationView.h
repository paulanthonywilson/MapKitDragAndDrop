//
//  DDAnnotationView.h
//  MapKitDragAndDrop
//
//  Created by digdog on 7/24/09.
//  Copyright 2009 digdog software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface DDAnnotationView : MKPinAnnotationView <MKReverseGeocoderDelegate> {
@private	
    BOOL _isMoving;
    CGPoint _startLocation;
    CGPoint _originalCenter;
    MKMapView* _mapView;	
}

@property (nonatomic, assign) MKMapView* mapView;

@end
