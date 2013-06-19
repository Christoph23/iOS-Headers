/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UINavigationController.h>

@class UIPopoverController;

@interface UIPrintStatusViewController : UINavigationController
{
    UIPopoverController *_poverController;
    id <UIPrintStatusDelegate> _printStatusDelegate;
}

@property(nonatomic) id <UIPrintStatusDelegate> printStatusDelegate; // @synthesize printStatusDelegate=_printStatusDelegate;
- (void)jobDidCancel;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)presentPrintStatusFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (id)printStatusView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;

@end

