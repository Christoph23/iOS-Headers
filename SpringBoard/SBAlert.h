/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBDisplayProtocol-Protocol.h"

@class NSHashTable, NSMapTable, NSMutableDictionary, SBActivationContext, SBAlertManager, SBAlertView, UIScreen;

@interface SBAlert : UIViewController <SBDisplayProtocol>
{
    id <SBAlertDelegate> _alertDelegate;
    SBAlertView *_display;
    NSMutableDictionary *_dictionary;
    SBActivationContext *_activationContext;
    BOOL _isWallpaperTunnelActive;
    NSMapTable *_displayValues;
    NSHashTable *_displayFlags;
    BOOL _orientationChangedEventsEnabled;
    float _accelerometerSampleInterval;
    BOOL _requestedDismissal;
    UIScreen *_targetScreen;
    SBAlertManager *_alertManager;
}

+ (void)test;
+ (void)registerForAlerts;
@property(retain, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic, getter=_requestedDismissal, setter=_setRequestedDismissal:) BOOL requestedDismissal; // @synthesize requestedDismissal=_requestedDismissal;
@property(copy, nonatomic) SBActivationContext *activationContext; // @synthesize activationContext=_activationContext;
- (void)_removeFromImpersonatedAppIfNecessary;
- (id)_impersonatesApplicationWithBundleID;
- (void)removeFromView;
- (void)alertViewIsReadyToDismiss:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setAlertDelegate:(id)arg1;
- (id)alertDelegate;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesNotificationCenter;
- (BOOL)suppressesBanners;
- (void)handleAutoLock;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)hasTranslucentBackground;
- (BOOL)shouldPendAlertItemsWhileActive;
- (void)handleSlideshowHardwareButton;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonTap;
- (void)animateDeactivation;
- (BOOL)currentlyAnimatingDeactivation;
- (void)didFinishAnimatingOut;
- (void)didFinishAnimatingIn;
- (void)didAnimateLockKeypadOut;
- (void)didAnimateLockKeypadIn;
- (int)starkStatusBarStyle;
- (int)statusBarStyle;
- (double)autoLockTime;
- (BOOL)managesOwnStatusBarAtActivation;
- (double)autoDimTime;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)expectsFaceContactInLandscape;
- (BOOL)expectsFaceContact;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (int)effectiveStatusBarStyle;
- (double)accelerometerSampleInterval;
- (void)setAccelerometerSampleInterval:(double)arg1;
- (BOOL)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(BOOL)arg1;
- (id)description;
- (void)deactivate;
- (int)interfaceOrientationForActivation;
- (void)activate;
- (int)statusBarStyleOverridesToCancel;
- (void)displayDidDisappear;
- (float)finalAlpha;
- (BOOL)showsSpringBoardStatusBar;
- (BOOL)undimsDisplay;
- (BOOL)allowsStackingOfAlert:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (id)deactivationValue:(unsigned int)arg1;
- (BOOL)deactivationFlag:(unsigned int)arg1;
- (void)setDeactivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDeactivationSetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)clearDeactivationSettings;
- (id)activationValue:(unsigned int)arg1;
- (BOOL)activationFlag:(unsigned int)arg1;
- (void)setActivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setActivationSetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)clearActivationSettings;
- (BOOL)isWallpaperTunnelActive;
- (void)setWallpaperTunnelActive:(BOOL)arg1;
- (BOOL)displayFlag:(unsigned int)arg1;
- (id)displayValue:(unsigned int)arg1;
- (void)setDisplaySetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDisplaySetting:(unsigned int)arg1 flag:(BOOL)arg2;
- (void)clearDisplaySettings;
- (void)dismissAlert;
- (void)clearDisplay;
- (id)display;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)wantsFullScreenLayout;
- (id)_screen;
- (void)_setTargetScreen:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isRemote;
- (BOOL)matchesRemoteAlertService:(id)arg1 options:(id)arg2;
- (id)effectiveViewController;

@end

