//
//  WMTToDoItem.h
//  ToDoList
//
//  Created by Ben Pellow on 5/28/14.
//  Copyright (c) 2014 Walmart Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WMTToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
