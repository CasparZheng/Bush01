//
//  Person.h
//  Bush01
//
//  Created by Caspar on 10/18/17.
//  Copyright © 2017 Caspar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "School.h"
#import "Country.h"

@interface Person : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSUInteger age;
@property (nonatomic, copy) NSString *phone;
@property (nonatomic, assign) NSUInteger gender; // female 1, male 0
@property (nonatomic, strong) Country *country;
@property (nonatomic, strong) School *school;

@end
