//
//  DetailViewController.h
//  TestNavBar
//
//  Created by Joshua Bryson on 1/22/14.
//  Copyright (c) 2014 QuickworkApps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
