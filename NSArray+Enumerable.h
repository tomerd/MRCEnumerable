//
//  NSArray+Enumerable.h
//  MRCEnumerable
//
//  Created by Marcus Crafter on 16/11/10.
//  Copyright 2010 Red Artisan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Enumerable)

- (void) each:(void(^)(id obj))block;
- (void) eachWithIndex:(void(^)(id obj, NSUInteger idx))block;
- (NSArray*) collect:(id(^)(id obj))block;
- (NSArray*) collectWithIndex:(id (^)(id obj, NSUInteger idx))block;
- (NSArray*) safeCollect:(id(^)(id obj, NSError** error))block error:(NSError**)error;
- (id) inject:(id)m block:(id(^)(id m, id obj))block;
- (id) injectWithIndex:(id)m block:(id (^)(id m, id obj, NSUInteger idx))block;
- (NSArray*) select:(BOOL(^)(id obj))block;
- (NSArray*) selectWithIndex:(BOOL(^)(id obj, NSUInteger idx))block;
- (NSArray*) reject:(BOOL(^)(id obj))block;
- (NSArray*) rejectWithIndex:(BOOL(^)(id obj, NSUInteger idx))block;
- (id) detect:(BOOL(^)(id obj))block;
- (id) detectWithIndex:(BOOL(^)(id obj, NSUInteger idx))block;
- (BOOL) exists:(BOOL(^)(id obj))block;
- (NSInteger) findIndex:(id)obj;
- (NSInteger) findIndexWithBlock:(BOOL(^)(id obj))block;

@end
