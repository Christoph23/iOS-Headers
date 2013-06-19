/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBSlidingAlertDisplay.h"

#import "SBAwayDateViewDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSTimer, SBAlertImageView, SBAwayBuddyBackgroundView, SBAwayBulletinListController, SBAwayChargingView, SBAwayDateView, SBAwayInCallController, SBAwayLockBar, SBAwaySwipeGestureRecognizer, SBAwayViewPluginController, SBThermalLockoutView, TPLegacyBottomSingleButtonBar, UIAlertView, UIButton, UIView, UIView<SBAwayHeaderPluginView>, UIWindow;

@interface SBAwayView : SBSlidingAlertDisplay <SBAwayDateViewDelegate>
{
    BOOL _isDimmed;
    BOOL _fullscreen;
    BOOL _alwaysFullscreen;
    BOOL _showingBlockedIndicator;
    BOOL _hasTelephony;
    BOOL _wasShowingAlertAtDismiss;
    BOOL _removingAlertAtUnlock;
    BOOL _awayPluginIsVisible;
    BOOL _ignoreFullScreenUpdates;
    BOOL _lockBarCurrentlyTracking;
    UIView *_headerContainerView;
    SBAwayDateView *_dateHeaderView;
    UIView<SBAwayHeaderPluginView> *_pluginHeaderView;
    UIView *_animatingFromHeaderView;
    SBAwayChargingView *_chargingView;
    SBThermalLockoutView *_thermalLockoutView;
    SBAlertImageView *_firewireWarningView;
    SBAwayViewPluginController *_awayPluginController;
    BOOL _awayPluginControllerReceivedViewWillDisappear;
    BOOL _awayPluginControllerReceivedViewDidDisappear;
    SBAwaySwipeGestureRecognizer *_gestureRecognizer;
    SBAwayBuddyBackgroundView *_buddyBackgroundView;
    SBAwayBulletinListController *_bulletinController;
    NSTimer *_mediaControlsTimer;
    NSTimer *_fullscreenTimer;
    NSTimer *_chargingViewTimer;
    NSDictionary *_nowPlayingInfo;
    BOOL _isPlaying;
    NSMutableDictionary *_currentPluginFadeAnimationContext;
    NSTimer *_blockedStatusUpdateTimer;
    UIAlertView *_alertSheet;
    int _alertSheetPosition;
    SBAwayInCallController *_inCallController;
    SBAwayLockBar *_lockBar;
    TPLegacyBottomSingleButtonBar *_cancelSyncBar;
    UIButton *_infoButton;
    UIView *_legalTextView;
    UIWindow *_previousWindow;
    struct __CFBoolean *_hasHardwareKeyboardCapability;
}

+ (id)lockLabels:(BOOL)arg1 fontSize:(float *)arg2;
+ (id)bottomBarForInstance:(id)arg1;
@property(retain, nonatomic) UIView *animatingFromHeaderView; // @synthesize animatingFromHeaderView=_animatingFromHeaderView;
- (void)_layoutLegalTextOverlay:(int)arg1;
- (void)_initializeLegalTextOverlay;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_networkTetheringStateChanged:(id)arg1;
- (void)animateToShowingDeviceLock:(BOOL)arg1 duration:(float)arg2;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)handleMenuButtonTap;
- (void)restartFullscreenTimerIfNecessary;
- (void)_fullscreenTimerFired;
- (void)restartFullscreenTimer;
- (void)cancelFullscreenTimer;
- (void)enableOrDisableNowPlayingPlugin;
- (void)updateNowPlayingInfo:(id)arg1;
- (void)hideSyncingBottomBar:(BOOL)arg1;
- (void)showSyncingBottomBar:(BOOL)arg1;
- (void)updateTopBarBackground;
- (id)_topBarLCDControlsImage;
- (BOOL)_isShowingPluginHeaderView;
- (BOOL)hasNowPlayingInfo;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (BOOL)isMediaControlsShowingOverlays;
- (BOOL)isShowingMediaControls;
- (void)toggleMediaControls;
- (void)showMediaControls;
- (void)_hideMediaControls;
- (void)hideMediaControls;
- (void)restartMediaControlsTimerIfNecessary;
- (void)restartMediaControlsTimer;
- (void)clearMediaControlsTimer;
- (void)_hideChargingViewAndClearTimer;
- (void)clearChargingViewTimer;
- (void)_didFadeChargingView;
- (void)_chargingViewTimerFired;
- (void)startChargingViewTimer;
- (void)updateChargingView;
- (void)hideChargingView;
- (void)showChargingView;
- (id)chargingView;
- (void)_recenterAlertSheet;
- (void)slideAlertSheetOut:(BOOL)arg1 direction:(BOOL)arg2 duration:(float)arg3;
- (void)removeAlertSheet;
- (BOOL)replaceAlertSheet:(id)arg1 withAlertSheet:(id)arg2;
- (void)showAlertSheet:(id)arg1;
- (void)setShowingDeviceLock:(BOOL)arg1 duration:(float)arg2 completion:(id)arg3;
- (void)animateToShowingDeviceLockFinished;
- (void)animateToHidingDeviceLockFinished;
- (void)showBulletinView;
- (void)hideBulletinView;
- (void)_positionBulletinViewForOrientation:(int)arg1;
- (void)_placeBulletinViewInHierarchy;
- (struct CGAffineTransform)slideTopBarToVisible:(BOOL)arg1;
- (void)updateInCallInfo;
- (BOOL)shouldShowInCallInfo;
- (id)inCallController;
- (void)removeBuddyBackgroundView;
- (void)addBuddyBackgroundView;
- (id)buddyBackgroundView;
- (void)awayDateViewDidChangeTitle:(id)arg1;
- (void)_addHeaderView;
- (void)_removeHeaderView;
- (id)dateHeaderView;
- (BOOL)_isShowingDateHeaderView;
- (id)_currentTitleForHeaderView;
- (void)_updateBlockedStatus;
- (void)removeBlockedStatus;
- (void)showBlockedStatus;
- (void)deviceUnlockFailed;
- (void)deviceUnlockCanceled;
- (void)_updateBlockedStatusLabel;
- (BOOL)shouldShowBlockedRedStatus;
- (void)windowGestureWasCompleted:(id)arg1;
- (void)_setAwayViewGesturesEnabled:(BOOL)arg1;
- (id)bulletinController;
- (void)setIgnoreFullScreenUpdates:(BOOL)arg1;
- (void)setAlwaysFullscreen:(BOOL)arg1;
- (BOOL)isAlwaysFullscreen;
- (BOOL)isFullscreen;
- (void)setFullscreen:(BOOL)arg1 duration:(double)arg2;
- (void)setFullscreen:(BOOL)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_fullscreenAnimationStopped:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_pluginAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_finalizeAndClearPluginAnimationContext;
- (void)_setPluginController:(id)arg1;
- (void)_performTransitionFromPluginController:(id)arg1 toPluginController:(id)arg2;
- (id)currentAwayPluginController;
- (void)_adjustForDoubleHighStatusBar:(BOOL)arg1;
- (void)updateLockBarLabel;
- (void)_updateLockBarLabelByClearingFirst:(BOOL)arg1;
- (void)lockBar:(id)arg1 textAlphaChangedForKnobDrag:(float)arg2;
- (BOOL)lockBarIsTracking;
- (void)lockBarStoppedTracking:(id)arg1;
- (void)lockBarStartedTracking:(id)arg1;
- (void)lockBarUnlocked:(id)arg1;
- (void)lockBarUnlocked:(id)arg1 freezeKnobInLockedPosition:(BOOL)arg2;
- (void)resetLockBar;
- (BOOL)dimmed;
- (void)setDimmed:(BOOL)arg1;
- (void)setMiddleContentAlpha:(float)arg1;
- (void)_setMiddleSubviewsAlpha:(float)arg1;
- (void)updateInterface;
- (void)_updateTopBarShadowAlpha;
- (BOOL)_shouldAlwaysHideBulletinView;
- (BOOL)canBecomeFirstResponder;
- (void)dismissMediaControlsOverlaysAnimated:(BOOL)arg1;
- (void)noteLocked:(BOOL)arg1;
- (void)_fixupFirstResponder;
- (BOOL)isShowingWallpaper;
- (BOOL)shouldShowChargingView;
- (void)removeFirewireWarningView;
- (void)addFirewireWarningView;
- (void)updateUIForResetState:(int)arg1;
- (void)updateUIForRestorationState:(int)arg1;
- (void)setThermalLockoutUIVisible:(BOOL)arg1;
- (BOOL)isSupportedInterfaceOrientation:(int)arg1;
- (void)resetForDeactivation;
- (void)stopAnimations;
- (void)startAnimations;
- (BOOL)isAnimating;
- (BOOL)shouldAnimateIconsOut;
- (BOOL)shouldAnimateIn;
- (BOOL)shouldShowBottomBar;
- (void)noteAssistantDidHide;
- (void)noteAssistantWillAppear;
- (void)setBottomLockBar:(id)arg1;
- (float)durationForOthersActivation;
- (void)finishedAnimatingOut;
- (void)performAdditionalDismissAnimations;
- (void)dismiss;
- (void)finishedAnimatingIn;
- (void)_postLockCompletedNotification;
- (void)dealloc;
- (void)postLockCompletedNotification:(BOOL)arg1;
- (void)alertDisplayWillBecomeVisible;
- (void)layoutForInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_clearBlockedStatusUpdateTimer;

@end

