/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBUIAnimationZoomDownAppToHome.h"

@class SBLockScreenViewController, SBLockToAppStatusBarAnimator;

@interface SBUIAnimationZoomDownLockScreenCameraToHome : SBUIAnimationZoomDownAppToHome
{
    SBLockScreenViewController *_lockScreenViewController;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
}

- (void)_prepareAnimation;
- (void)animateZoomWithCompletion:(id)arg1;
- (void)animateFakeStatusBarWithParameters:(id)arg1;
- (BOOL)_shouldTakeActivationAssertionForDeactivatingApp;
- (BOOL)_shouldUpdateStatusBarOnContentRestore;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1;

@end

