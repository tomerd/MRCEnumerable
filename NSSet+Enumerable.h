//
//  NSSet+Enumerable.h
//  MRCEnumerable
//
//  Created by Marcus Crafter on 27/03/11.
//  Copyright 2011 Red Artisan. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSSet (Enumerable)

- (void) each:(void (^)(id obj))block;
- (void) eachWithIndex:(void (^)(id obj, NSUInteger idx))block;
- (NSSet*) collect:(id (^)(id obj))block;
- (NSSet*) collectWithIndex:(id (^)(id obj, NSUInteger idx))block;
- (id) inject:(id)m block:(id (^)(id m, id obj))block;
- (id) injectWithIndex:(id)m block:(id (^)(id m, id obj, NSUInteger idx))block;
- (NSSet*) select:(BOOL (^)(id obj))block;
- (NSSet*) selectWithIndex:(BOOL (^)(id obj, NSUInteger idx))block;
- (NSSet*) reject:(BOOL (^)(id obj))block;
- (NSSet*) rejectWithIndex:(BOOL (^)(id obj, NSUInteger idx))block;
- (id) detect:(BOOL (^)(id obj))block;
- (BOOL) exists:(BOOL (^)(id obj))block;

@end
