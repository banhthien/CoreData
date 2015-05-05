//
//  StudentDetail.h
//  Task1CoreData
//
//  Created by iOSx New on 4/22/15.
//  Copyright (c) 2015 BanhThien. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class StudentInfo;

@interface StudentDetail : NSManagedObject

@property (nonatomic, retain) NSNumber * score;
@property (nonatomic, retain) NSDate * startday;
@property (nonatomic, retain) StudentInfo *info;

@end
