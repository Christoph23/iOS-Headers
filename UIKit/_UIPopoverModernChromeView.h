/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIPopoverBackgroundView.h>

@class _UIBackdropView;

@interface _UIPopoverModernChromeView : UIPopoverBackgroundView
{
    _UIBackdropView *_chromeBlurView;
    unsigned int _myArrowDirection;
    float _myArrowOffset;
}

+ (BOOL)wantsDefaultContentAppearance;
+ (struct UIEdgeInsets)contentViewInsets;
+ (float)arrowBase;
+ (float)arrowHeight;
- (void)setArrowOffset:(float)arg1;
- (float)arrowOffset;
- (void)setArrowDirection:(unsigned int)arg1;
- (unsigned int)arrowDirection;
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

