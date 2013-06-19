/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CAMediaTimingFunction, NSMutableArray, NSMutableSet, NSString, NSUUID, UIView;

@interface UIViewAnimationState : NSObject
{
    UIViewAnimationState *_nextState;
    NSString *_animationID;
    void *_context;
    id _delegate;
    double _duration;
    double _delay;
    double _frameInterval;
    double _start;
    int _curve;
    float _repeatCount;
    int _transition;
    UIView *_transitionView;
    int _filter;
    UIView *_filterView;
    float _filterValue;
    SEL _willStartSelector;
    SEL _didEndSelector;
    int _didEndCount;
    struct CGPoint _position;
    unsigned int _willStartSent:1;
    unsigned int _useCurrentLayerState:1;
    unsigned int _cacheTransition:1;
    unsigned int _autoreverses:1;
    unsigned int _roundsToInteger:1;
    unsigned int _layoutSubviews:1;
    NSMutableSet *_trackedAnimations;
    NSUUID *_uuid;
    id <_UIBasicAnimationFactory> _animationFactory;
    CAMediaTimingFunction *_customCurve;
    BOOL _animationFactoryMakesPerAnimationCustomCurves;
    id _alongsideAnimations;
    NSMutableArray *_addedCompletions;
}

+ (void)popAnimationState;
+ (void)pushViewAnimationState:(id)arg1 context:(void *)arg2;
- (id)_defaultAnimationForKey:(id)arg1;
- (void)_trackAnimation:(id)arg1 forProperty:(id)arg2 inLayer:(id)arg3;
- (void)_addAnimationStateForTracking:(id)arg1;
- (id)_trackedAnimations;
- (void)_removeAnimationStateFromTrackingMap:(BOOL)arg1;
@property(readonly, nonatomic) BOOL _allowsUserInteraction;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)sendDelegateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3 customCurve:(id)arg4;
- (void)setAnimationAttributes:(id)arg1 correctZeroDuration:(BOOL)arg2 skipDelegateAssignment:(BOOL)arg3;
- (void)_runAlongsideAnimations;
- (void)_setAlongsideAnimations:(id)arg1;
- (void)setAnimationAttributes:(id)arg1;
- (void)setupCustomTimingCurve;
- (void)dealloc;
- (void)pop;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned int)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id)arg7 completion:(void)arg8;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (id)init;

@end

