/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject
{
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}

- (void)checkinValues:(id)arg1;
- (void)checkinValue:(id)arg1;
- (id)checkoutValueForKey:(id)arg1 creationBlock:(id)arg2;
- (void)dealloc;
- (id)init;

@end

