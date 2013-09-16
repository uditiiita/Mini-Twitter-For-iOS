//
//  UserFollowingViewController.h
//  Mini Twitter For iOS
//
//  Created by udit.ag on 13/09/13.
//  Copyright (c) 2013 udit.ag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"
#import "UserCell.h"
#import "Padder.h"
#import "TweeterFetcher.h"

@interface UserFollowingViewController : UITableViewController
@property (nonatomic, strong) User* user;
@end