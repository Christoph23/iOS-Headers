/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBLockOverlayViewController-Protocol.h"

@class NSString, SBLockScreenTemperatureWarningView;

@interface SBLockScreenTemperatureWarningViewController : UIViewController <SBLockOverlayViewController>
{
    SBLockScreenTemperatureWarningView *_warningView;
}

@property(readonly, nonatomic) NSString *slideToUnlockText;
- (id)overlayView;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

