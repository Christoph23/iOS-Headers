/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBAppSliderIconControllerDelegate <NSObject>
- (void)sliderIconScrollerDidEndScrolling:(id)arg1;
- (unsigned int)sliderIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout float *)arg2 andXVelocity:(float)arg3;
- (void)sliderIconScrollerBeganPanning:(id)arg1;
- (void)sliderIconScroller:(id)arg1 activate:(id)arg2;
- (void)sliderIconScroller:(id)arg1 contentOffsetChanged:(float)arg2;
@end

