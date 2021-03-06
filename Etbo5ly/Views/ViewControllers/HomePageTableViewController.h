//
//  HomePageTableViewController.h
//  Etbo5ly
//
//  Created by MDW Event on 5/22/16.
//  Copyright © 2016 JETS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Etbo5lyNetworkDelegate.h"
#import "Etbo5lyNetworkManager.h"
#import "URLS.h"
#import "MealsServices.h"
#import "CookServices.h"
@interface HomePageTableViewController : UIViewController <UITableViewDataSource ,UITableViewDelegate , Etbo5lyNetworkDelegate>
{
    NSArray *meals;
    NSArray *cooks;
    MealsServices *mealsRequestedService;
    CookServices *cooksRequestedMeals;
}

@property (strong, nonatomic) IBOutlet UISegmentedControl *menuOptions;
@property (strong, nonatomic) IBOutlet UITableView *dataTableView;
- (IBAction)changeValueOfSegmentedController:(id)sender;


@end
