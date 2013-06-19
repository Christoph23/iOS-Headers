/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBSlidingAlertDisplay.h"

#import "SBSIMLockEntryViewInterface-Protocol.h"

@class NSString;

@interface SBLegacySIMLockEntryAlertDisplay : SBSlidingAlertDisplay <SBSIMLockEntryViewInterface>
{
    NSString *_languageCode;
    NSString *_code;
}

- (void)deviceLockViewCancelButtonPressed:(id)arg1;
- (void)deviceLockViewPasscodeEntered:(id)arg1;
- (void)unlock;
- (void)_unlock;
- (void)setupSuccess;
- (void)alertDisplayWillBecomeVisible;
- (BOOL)shouldShowEmergencyCallButton;
- (int)requiredUnlockStyle;
- (void)setupCurrentLockAttemptState;
- (id)label;
- (id)titleText;
- (void)setupFailureState;
- (id)failureLabel;
- (id)failureTitle;
- (void)setupUnlockAttemptState;
- (BOOL)alphanumericKeyboard;
- (id)_pinAttemptsRemainingLabel;
- (id)localizedStringWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 languageCode:(id)arg2;

@end

