//
//  PlayerDetailsViewController.h
//  Storyboardlearning
//
//  Created by Aaron Holland-Plum on 6/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

@class PlayerDetailsViewController;

@protocol PlayerDetailsViewControllerDelegate <NSObject>
- (void)playerDetailsViewControllerDidCancel:
(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewControllerDidSave:
(PlayerDetailsViewController *)controller;
@end

@interface PlayerDetailsViewController : UITableViewController

@property (nonatomic, weak) id <PlayerDetailsViewControllerDelegate> delegate;

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;

@end