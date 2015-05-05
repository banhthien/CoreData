//
//  ListStudentTableViewController.h
//  Task1CoreData
//
//  Created by iOSx New on 4/22/15.
//  Copyright (c) 2015 BanhThien. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StudentInfo.h"
#import "AppDelegate.h"
#import "CoreData/CoreData.h"
#import "ViewController.h"
@interface ListStudentTableViewController : UITableViewController

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property NSMutableArray *listStudent;
@end
