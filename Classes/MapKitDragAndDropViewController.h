//
//  MapKitDragAndDropViewController.h
//  MapKitDragAndDrop
//
//  Created by digdog on 7/24/09.
//  Copyright digdog software 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@class DDAnnotation;

@interface MapKitDragAndDropViewController : UIViewController <CLLocationManagerDelegate, MKMapViewDelegate> {
@private
	CLLocationManager *_locationManager;
	MKReverseGeocoder *_reverseGeocoder;
	MKMapView* _mapView;
}

@property (nonatomic, retain) IBOutlet MKMapView* mapView;
@end

