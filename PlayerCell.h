//
//  PlayerCell.h
//  Storyboardlearning
//
//  Created by Aaron Holland-Plum on 6/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *nameLabel;
@property (nonatomic, strong) IBOutlet UILabel *gameLabel;
@property (nonatomic, strong) IBOutlet UIImageView *ratingImageView;

@end
