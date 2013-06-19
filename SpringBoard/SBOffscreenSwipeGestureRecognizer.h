/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBPanGestureRecognizer.h"

#import "_UIScreenEdgePanRecognizerDelegate-Protocol.h"

@class _UIScreenEdgePanRecognizer, _UIScreenEdgePanRecognizerSettings;

@interface SBOffscreenSwipeGestureRecognizer : SBPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate>
{
    int m_offscreenEdge;
    BOOL m_shouldUseUIKitHeuristics;
    float m_edgeMargin;
    float m_falseEdge;
    int m_touchesChecked;
    struct CGPoint m_firstTouch;
    float m_edgeCenter;
    float m_allowableDistanceFromEdgeCenter;
    BOOL m_requiresSecondTouchInRange;
    _UIScreenEdgePanRecognizer *m_recognizer;
}

+ (void)reloadDefaults;
@property(nonatomic) float edgeCenter; // @synthesize edgeCenter=m_edgeCenter;
@property(nonatomic) BOOL requiresSecondTouchInRange; // @synthesize requiresSecondTouchInRange=m_requiresSecondTouchInRange;
@property(nonatomic) float allowableDistanceFromEdgeCenter; // @synthesize allowableDistanceFromEdgeCenter=m_allowableDistanceFromEdgeCenter;
@property(nonatomic) float falseEdge; // @synthesize falseEdge=m_falseEdge;
@property(nonatomic) float edgeMargin; // @synthesize edgeMargin=m_edgeMargin;
@property(nonatomic) BOOL shouldUseUIKitHeuristics; // @synthesize shouldUseUIKitHeuristics=m_shouldUseUIKitHeuristics;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)updateForBeganOrMovedTouches:(struct __SBGestureContext *)arg1;
- (void)setState:(int)arg1;
- (void)_updateAnimationDistanceAndEdgeCenter;
- (BOOL)secondTouchQualifies:(const CDStruct_9bf48c9a *)arg1;
- (struct CGRect)activeScreenBounds;
- (BOOL)firstTouchQualifies:(const CDStruct_9bf48c9a *)arg1;
- (BOOL)_firstTouchInRange:(const CDStruct_9bf48c9a *)arg1;
- (void)dealloc;
- (void)reset;
- (BOOL)isHandlingLongPress;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings;
- (id)initForOffscreenEdge:(int)arg1;

@end

