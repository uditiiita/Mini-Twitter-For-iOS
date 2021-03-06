//
//  HomeTimelineViewController.h
//  Mini Twitter For iOS
//
//  Created by udit.ag on 04/09/13.
//  Copyright (c) 2013 udit.ag. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TweeterFetcher.h"
#import "MTTweetCell.h"
#import "Utils.h"
#import "MTTweet.h"
#import "MTTweetViewController.h"
#import "MTCoreDataTableViewController.h"
#import "HomeTimeLine+Twitter.h"

@interface MTHomeTimelineViewController : MTCoreDataTableViewController
@property (nonatomic,strong) MTUser* currentUser;
@end
