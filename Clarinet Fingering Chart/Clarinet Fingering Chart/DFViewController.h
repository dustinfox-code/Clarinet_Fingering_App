//
//  DFViewController.h
//  Clarinet Fingering Chart
//
//  Created by Dustin Fox on 4/12/14.
//  Copyright (c) 2014 Dustin Fox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DFViewController : UIViewController
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *notesImageView;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *notesLabelImageView;
@property (strong, nonatomic) IBOutlet UIImageView *cleffImageView;

@end
