/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIRemoteViewController.h>

@class _UIWebViewController;

@interface _UIRemoteWebViewController : _UIRemoteViewController
{
    _UIWebViewController *_webViewController;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) _UIWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

