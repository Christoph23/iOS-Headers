/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, _UIAsyncInvocation;

@interface _UIViewServiceXPCListener : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_incomingConnectionQueue;
    _UIAsyncInvocation *_invalidationInvocation;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

- (id)invalidate;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (id)endpoint;
- (void)dealloc;
- (id)initWithName:(id)arg1 connectionHandler:(id)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end

