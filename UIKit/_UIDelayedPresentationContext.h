/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSInvocation, NSObject<OS_dispatch_source>;

@interface _UIDelayedPresentationContext : NSObject
{
    BOOL _enableUserInteraction;
    int _reqcnt;
    NSInvocation *_presentInvocation;
    id _cancellationHandler;
    double _timeout;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property(retain, nonatomic) NSInvocation *presentInvocation; // @synthesize presentInvocation=_presentInvocation;
@property(copy, nonatomic) id cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
- (void)finishDelayedPresentation:(id)arg1;
- (void)beginDelayedPresentation;
- (void)cancelDelayedPresentation:(BOOL)arg1;
- (int)incrementRequestCount;
- (int)decrementRequestCount;
- (int)requestCount;
- (id)delayingController;
- (id)invocationTarget;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 cancellationHandler:(id)arg2;

@end

