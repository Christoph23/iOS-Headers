/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/PDSlideBase.h>

@class OADColorMap, OADThemeOverrides;

@interface PDSlideChild : PDSlideBase
{
    BOOL mShowMasterPlaceholderAnimations;
    BOOL mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}

- (id)init;
- (void)dealloc;
- (BOOL)showMasterPlaceholderAnimations;
- (void)setShowMasterPlaceholderAnimations:(BOOL)arg1;
- (BOOL)showMasterShapes;
- (void)setShowMasterShapes:(BOOL)arg1;
- (id)themeOverrides;
- (id)colorMapOverride;
- (void)setColorMapOverride:(id)arg1;
- (id)colorScheme;
- (id)fontScheme;
- (id)colorMap;
- (id)styleMatrix;
- (void)doneWithContent;
- (id)drawingTheme;

@end
