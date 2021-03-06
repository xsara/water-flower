//
//  CascadeTableController.h
//  water-flower
//
//  Created by ss on 8/25/13.
//  Copyright (c) 2013 ss. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableDataSource.h"
#import "GetDataDelegate.h"
#import "UpdateDataDelegate.h"
#import "ReloadDataDelegate.h"

@interface CascadeTableController : UITableViewController <GetDataDelegate, UpdateDataDelegate, ReloadDataDelegate> {
}

@property (weak, nonatomic) TableDataSource *ds;

@end
