//
//  ViewController.m
//  Task1CoreData
//
//  Created by iOSx New on 4/22/15.
//  Copyright (c) 2015 BanhThien. All rights reserved.
//

#import "ViewController.h"
#import "StudentDetail.h"
@interface ViewController ()

@end

@implementation ViewController

@synthesize managedObjectContext = _managedObjectContext;
@synthesize managedObjectModel = _managedObjectModel;
@synthesize persistentStoreCoordinator = _persistentStoreCoordinator;
@synthesize student;
@synthesize intlabel;
- (void)viewDidLoad {
    [super viewDidLoad];
    AppDelegate *apdelegate = [[UIApplication sharedApplication] delegate];
    _managedObjectContext = [apdelegate managedObjectContext];
    
    // check status update or new
    
    if(student){
        [self.nameTxt setText:student.name];
        [self.datePick setDate:student.birthday];
        [self.addressTxt setText:student.address];
        self.status.text=@"UPDATE";
    } else self.status.text=@"ADD NEW";
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)click:(id)sender {
    // check status then do this
    if(student){
        student.name =self.nameTxt.text;
        student.address=self.addressTxt.text;
        student.birthday=[self.datePick date];
    }
    else {
        StudentInfo *newStudent= [NSEntityDescription insertNewObjectForEntityForName:@"StudentInfo" inManagedObjectContext:_managedObjectContext];
        newStudent.name=self.nameTxt.text;
        newStudent.address=self.addressTxt.text;
        newStudent.birthday=[self.datePick date];

    }
    
    NSError *error;
    if(![_managedObjectContext save:&error]){
        NSLog(@"co loi , %@", [error localizedDescription]);
    }
    
    
    
}
-(IBAction)deleteAll:(id)sender{
    // delete all data
    NSError *error;
    NSFetchRequest *fetch= [[NSFetchRequest alloc] init];
    NSEntityDescription *entity=[NSEntityDescription entityForName:@"StudentInfo" inManagedObjectContext:_managedObjectContext];
    [fetch setEntity:entity];
    
    
    NSMutableArray *sinhVienInfoArray =[[_managedObjectContext executeFetchRequest:fetch error:&error] mutableCopy];
    for (StudentInfo *Entity in sinhVienInfoArray) {
        [_managedObjectContext deleteObject:Entity];
    }
    if(![_managedObjectContext save:&error]){
        NSLog(@"co loi , %@", [error localizedDescription]);
    }
    
    
}

- (IBAction)refeshClick:(id)sender {
    //refesh text
    [self.nameTxt setText:@""];
    [self.addressTxt setText:@""];
}
@end

