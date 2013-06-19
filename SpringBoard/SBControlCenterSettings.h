/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UISettings.h"

@class UIColor;

@interface SBControlCenterSettings : _UISettings
{
    BOOL _backgroundShowGradient;
    BOOL _backgroundDarkensCC;
    float _controlAlpha;
    float _disabledAlpha;
    float _highlightAlpha;
    float _glowAlpha;
    UIColor *_highlightColor;
    float _bounceFriction;
    float _backgroundColorAlpha;
}

+ (id)settingsControllerModule;
@property float backgroundColorAlpha; // @synthesize backgroundColorAlpha=_backgroundColorAlpha;
@property BOOL backgroundDarkensCC; // @synthesize backgroundDarkensCC=_backgroundDarkensCC;
@property BOOL backgroundShowGradient; // @synthesize backgroundShowGradient=_backgroundShowGradient;
@property float bounceFriction; // @synthesize bounceFriction=_bounceFriction;
@property(retain) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property float glowAlpha; // @synthesize glowAlpha=_glowAlpha;
@property float highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
@property float disabledAlpha; // @synthesize disabledAlpha=_disabledAlpha;
@property float controlAlpha; // @synthesize controlAlpha=_controlAlpha;
- (void)setDefaultValues;

@end

