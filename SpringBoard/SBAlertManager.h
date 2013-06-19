/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, NSMutableArray, SBAlertWindow, UIScreen;

@interface SBAlertManager : NSObject
{
    UIScreen *_screen;
    SBAlertWindow *_alertWindow;
    SBAlertWindow *_deferredAlertWindow;
    NSMutableArray *_alerts;
    NSMapTable *_observers;
    BOOL _deactivatingAllAlerts;
    id <SBAlertManagerDelegate> _delegate;
    struct {
        unsigned int deactivateDismissed:1;
        unsigned int newWindow:1;
    } _delegateFlags;
}

- (void)alertIsReadyToBeRemovedFromView:(id)arg1;
- (void)alertIsReadyToBeDeactivated:(id)arg1;
- (void)_makeAlertWindowOpaque:(BOOL)arg1;
- (void)_resetAlertWindowOpacity;
- (void)_removeFromView:(id)arg1;
- (void)_deactivate:(id)arg1;
- (void)_activate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)applicationFinishedAnimatingBeneathAlert;
- (void)applicationWillAnimateActivation;
- (int)orientation;
- (void)deactivateAlertsAfterLaunch;
- (void)setAlertsShouldDeactivateAfterLaunch;
- (void)deactivateAll;
- (void)deactivate:(id)arg1;
- (void)activate:(id)arg1;
- (id)allAlerts;
- (BOOL)containsAlert:(id)arg1;
- (id)stackedAlertsIncludingActiveAlert:(BOOL)arg1;
- (BOOL)hasStackedAlerts;
- (id)activeAlert;
- (id)window;
- (id)screen;
@property(nonatomic) id <SBAlertManagerDelegate> delegate;
- (void)dealloc;
- (id)init;
- (id)initWithScreen:(id)arg1;

@end

