/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AirPortAssistantController : NSObject
{
    id _delegate;
    id _viewController;
    id _context;
    NSString *_configuredSSID;
}

+ (_Bool)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(_Bool)arg3;
+ (_Bool)launchAUForDevice:(id)arg1 getAUFromAppStore:(_Bool)arg2;
+ (id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2;
+ (id)unconfiguredDeviceName:(id)arg1;
+ (_Bool)isUnconfiguredDevice:(id)arg1;
+ (_Bool)isGenericMFiAccessory:(id)arg1;
+ (_Bool)isSTAOnlyDevice:(id)arg1;
+ (_Bool)isAirPlayDevice:(id)arg1;
+ (void)cancelAirPortAssistantController;
+ (id)assistantUIViewControllerWithParameters:(id)arg1;
+ (id)sharedInstance;
@property(retain) NSString *configuredSSID; // @synthesize configuredSSID=_configuredSSID;
@property(retain) id context; // @synthesize context=_context;
@property(retain) id viewController; // @synthesize viewController=_viewController;
@property(nonatomic) id <AirPortAssistantControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)assistantCompleteWithResult:(int)arg1;

@end

