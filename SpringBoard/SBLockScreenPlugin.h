/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SBAwayViewPluginController, SBLockOverlayContext;

@interface SBLockScreenPlugin : NSObject
{
    SBAwayViewPluginController *_controller;
    SBLockOverlayContext *_overlay;
    NSString *_bundleName;
}

@property(copy) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(retain) SBLockOverlayContext *overlay; // @synthesize overlay=_overlay;
@property(retain) SBAwayViewPluginController *controller; // @synthesize controller=_controller;
- (void)dealloc;

@end

