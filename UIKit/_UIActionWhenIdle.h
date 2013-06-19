/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSInvocation;

@interface _UIActionWhenIdle : NSObject
{
    NSInvocation *_invocation;
}

+ (id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void)addObserverToRunLoop;
- (void)invoke;
- (void)invalidate;
- (void)dealloc;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end

