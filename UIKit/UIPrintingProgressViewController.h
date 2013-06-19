/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewController.h>

@class UINavigationController, UIPrintingMessageView, UIPrintingProgress, UIWindow;

@interface UIPrintingProgressViewController : UITableViewController
{
    UIPrintingProgress *_printingProgress;
    UIPrintingMessageView *_messageView;
    UINavigationController *_navController;
    UIWindow *_window;
    double _rotationDelay;
}

- (double)rotationDelay;
- (BOOL)visible;
- (void)dismissAnimated:(BOOL)arg1;
- (void)cleanupAfterDismiss;
- (void)show;
- (void)setDonePrinting:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)cancelProgress;
- (void)doneProgress;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3;

@end

