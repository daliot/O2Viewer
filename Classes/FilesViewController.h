//
//  FirstViewController.h
//  O2Viewer
//
//  Created by 오화종 on 10. 02. 11.
//  Copyright 없음 2010. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface FilesViewController : UITableViewController {

	UITableView *myTableView;
}

@property (nonatomic, retain) IBOutlet UITableView *myTableView;

@end
