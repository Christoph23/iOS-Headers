/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSTimer, SBResetProgressView;

@interface SBResetView : UIView
{
    SBResetProgressView *_progressView;
    NSTimer *_progressTimer;
}

- (void)_updateProgress;
- (void)_resetFinished:(id)arg1;
- (void)_resetStarted:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

