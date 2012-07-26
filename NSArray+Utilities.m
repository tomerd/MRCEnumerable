//
//  NSArray+Utilities.m
//  MRCEnumerable
//
//  Created by Marcus Crafter on 16/11/10.
//  Copyright 2010 Red Artisan. All rights reserved.
//

#import "NSArray+Utilities.h"


@implementation NSArray (Utilities)

- (id) firstObject
{
    return self.empty ? [self objectAtIndex:0] : nil;
}

- (BOOL) empty
{
    return 0 == self.count;
}

@end
