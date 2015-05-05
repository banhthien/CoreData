//
//  StudentInfo.h
//  Task1CoreData
//
//  Created by iOSx New on 4/22/15.
//  Copyright (c) 2015 BanhThien. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class StudentDetail;

@interface StudentInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * birthday;
@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) StudentDetail *detail;

@end
