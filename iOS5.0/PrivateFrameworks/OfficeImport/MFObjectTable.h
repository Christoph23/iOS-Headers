/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface MFObjectTable : NSObject
{
    NSMutableArray *m_objects;
}

- (id)init;
- (void)dealloc;
- (int)deleteObject:(unsigned int)arg1;
- (int)selectInto:(int)arg1:(id)arg2;
- (void)clear;
- (unsigned int)insertPos;
- (int)putObject:(id)arg1:(unsigned int)arg2;
- (id)getObject:(unsigned int)arg1;
- (int)size;

@end
