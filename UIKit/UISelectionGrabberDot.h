/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIView
{
    UISelectionGrabber *m_grabber;
}

@property(nonatomic) UISelectionGrabber *grabber; // @synthesize grabber=m_grabber;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelWhenKey;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 container:(id)arg2;

@end

