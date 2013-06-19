/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, XPCMachSendRight, _UIHostedWindowHostingHandle, _UIViewServiceInterface;

@interface _UIRemoteViewControllerConnectionInfo : NSObject
{
    BOOL _prefersStatusBarHidden;
    _UIViewServiceInterface *_interface;
    id _viewControllerOperatorProxy;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    id _textEffectsOperatorProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    XPCMachSendRight *_serviceAccessibilityServerPortWrapper;
    int _preferredStatusBarStyle;
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    _UIHostedWindowHostingHandle *_textEffectsWindowHostingHandle;
    _UIHostedWindowHostingHandle *_textEffectsWindowAboveStatusBarHostingHandle;
}

@property(retain) _UIHostedWindowHostingHandle *textEffectsWindowAboveStatusBarHostingHandle; // @synthesize textEffectsWindowAboveStatusBarHostingHandle=_textEffectsWindowAboveStatusBarHostingHandle;
@property(retain) _UIHostedWindowHostingHandle *textEffectsWindowHostingHandle; // @synthesize textEffectsWindowHostingHandle=_textEffectsWindowHostingHandle;
@property(retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // @synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle;
@property BOOL prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
@property int preferredStatusBarStyle; // @synthesize preferredStatusBarStyle=_preferredStatusBarStyle;
@property(retain) XPCMachSendRight *serviceAccessibilityServerPortWrapper; // @synthesize serviceAccessibilityServerPortWrapper=_serviceAccessibilityServerPortWrapper;
@property(retain) NSArray *serviceViewControllerSupportedInterfaceOrientations; // @synthesize serviceViewControllerSupportedInterfaceOrientations=_serviceViewControllerSupportedInterfaceOrientations;
@property(retain) id textEffectsOperatorProxy; // @synthesize textEffectsOperatorProxy=_textEffectsOperatorProxy;
@property(retain) id serviceViewControllerControlMessageProxy; // @synthesize serviceViewControllerControlMessageProxy=_serviceViewControllerControlMessageProxy;
@property(retain) id serviceViewControllerProxy; // @synthesize serviceViewControllerProxy=_serviceViewControllerProxy;
@property(retain) id viewControllerOperatorProxy; // @synthesize viewControllerOperatorProxy=_viewControllerOperatorProxy;
@property(retain) _UIViewServiceInterface *interface; // @synthesize interface=_interface;
- (void)dealloc;

@end

