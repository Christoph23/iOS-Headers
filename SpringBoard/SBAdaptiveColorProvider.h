/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SBUIColorStatistics;

@interface SBAdaptiveColorProvider : NSObject
{
    BOOL _savedBrightnessSet;
    float _savedBrightness;
    SBUIColorStatistics *_colorStatistics;
}

@property(retain, nonatomic, getter=_colorStatistics) SBUIColorStatistics *colorStatistics; // @synthesize colorStatistics=_colorStatistics;
@property(nonatomic, getter=_savedBrightness) float savedBrightness; // @synthesize savedBrightness=_savedBrightness;
- (id)_legibleColor;
- (int)_legibilityStyle;
- (id)_adaptiveColorInfo;
- (void)_updateBrightnessState;
- (id)adaptiveColorInfoForStatistics:(id)arg1;
- (void)dealloc;

@end

