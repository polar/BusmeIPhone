//
//  MQOverlaySampleViewController.h
//  MQOverlaySample
//
//  Created by Erik Scrafford on 8/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MQMapKit/MQMapKit.h>
#import "BusmeMapView.h"


///The main view controller for the overlay sample
@interface MQOverlaySampleViewController : UIViewController <MQMapViewDelegate> {
    BusmeMapView *map;
}

@end
