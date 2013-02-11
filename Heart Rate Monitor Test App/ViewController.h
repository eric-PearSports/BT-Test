//
//  ViewController.h
//  Heart Rate Monitor Test App
//
//  Created by Eric Franchomme on 1/29/13.
//  Copyright (c) 2013 Eric Franchomme. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface ViewController : UIViewController <CBPeripheralDelegate, CBCentralManagerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *hrLabel;
@property (weak, nonatomic) IBOutlet UIButton *rescanButton;

@property (readwrite, nonatomic) CBCentralManager *mgr;

- (IBAction)scanPress:(id)sender;

@end
