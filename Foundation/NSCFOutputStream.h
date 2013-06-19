/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOutputStream.h"

@interface NSCFOutputStream : NSOutputStream
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(void *)arg2 context:(CDStruct_60d14f2d *)arg3;
- (BOOL)hasSpaceAvailable;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (id)streamError;
- (unsigned int)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned int)arg2;
- (id)initToMemory;
- (void)finalize;
- (unsigned int)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

