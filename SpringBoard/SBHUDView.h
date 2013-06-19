/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImage, UIImageView, _UIBackdropView;

@interface SBHUDView : UIView
{
    int _level;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
    BOOL _showsProgress;
    float _progress;
    UIView *_blockView;
    _UIBackdropView *_backdropView;
    UIImageView *_backdropMaskImageView;
}

+ (float)progressIndicatorStep;
+ (int)numberOfProgressIndicatorSteps;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL showsProgress; // @synthesize showsProgress=_showsProgress;
@property(nonatomic) int level; // @synthesize level=_level;
- (void)layoutSubviews;
- (void)_updateBlockView;
- (id)_blockColorForValue:(float)arg1;
- (void)_updateBlockView:(id)arg1 value:(float)arg2 blockSize:(struct CGSize)arg3 point:(struct CGPoint)arg4;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (BOOL)displaysLabel;
- (void)_updateBackdropMask;
- (void)dismissWithCompletion:(id)arg1;
- (void)cancelDismissal;
- (void)dealloc;
- (id)initWithHUDViewLevel:(int)arg1;

@end

