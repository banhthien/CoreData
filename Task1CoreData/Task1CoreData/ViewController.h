//
//  ViewController.h
//  Task1CoreData
//
//  Created by iOSx New on 4/22/15.
//  Copyright (c) 2015 BanhThien. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "StudentInfo.h"

@interface ViewController : UIViewController
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (strong) StudentInfo *student;
@property NSInteger intlabel;
- (IBAction)click:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *nameTxt;
@property (strong, nonatomic) IBOutlet UITextField *addressTxt;
@property (strong, nonatomic) IBOutlet UILabel *birthdayTxt;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePick;

@property (strong, nonatomic) IBOutlet UILabel *status;

- (IBAction)deleteAll:(id)sender;

- (IBAction)refeshClick:(id)sender;

@end


