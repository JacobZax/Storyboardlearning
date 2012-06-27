//
//  PlayersViewController.h
//  Storyboardlearning
//
//  Created by Aaron Holland-Plum on 6/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;


@end
