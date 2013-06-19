/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBUIBannerView-Protocol.h"

@class SBBannerViewCallbackManager, SBUIBannerContext, UIImage, UIImageView, UIView<SBUIBannerView>, _UIBackdropView;

@interface SBBannerContextView : UIView <SBUIBannerView>
{
    struct UIEdgeInsets _clippingInsets;
    UIView *_clippingView;
    SBUIBannerContext *_context;
    UIView<SBUIBannerView> *_contentView;
    SBBannerViewCallbackManager *_callbacks;
    SBBannerViewCallbackManager *_wrapperCallbacks;
    _UIBackdropView *_backdropView;
    UIImageView *_backgroundImageView;
}

- (id)bannerContext;
- (void)layoutSubviews;
- (struct CGRect)_frameInClippingViewForFrame:(struct CGRect)arg1;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2;
- (struct CGRect)_contentFrame;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) _UIBackdropView *backdrop;
@property(nonatomic) struct UIEdgeInsets clippingInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

