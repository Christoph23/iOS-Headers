/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject
{
    AVCaptureOutputInternal *_outputInternal;
}

- (id)init;
- (void)dealloc;
- (id)session;
- (void)setSession:(id)arg1;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
@property(readonly, nonatomic) NSArray *connections;
- (id)connectionWithMediaType:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (void)removeConnection:(id)arg1;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (id)notReadyError;
- (id)firstEnabledConnectionForMediaType:(id)arg1;
- (id)liveConnections;
- (int)changeSeed;
- (void)bumpChangeSeed;

@end

