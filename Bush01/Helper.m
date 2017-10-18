//
//  Helper.m
//  Bush01
//
//  Created by Caspar on 10/18/17.
//  Copyright © 2017 Caspar. All rights reserved.
//

#import "Helper.h"

@implementation Helper

- (void)someone:(Person*)person toSchool:(School*)school {
    NSLog(@"%@ go to %@ school", person.name, school.name);
}

@end
