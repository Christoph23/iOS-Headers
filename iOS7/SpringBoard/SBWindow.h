/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIWindow.h"

@interface SBWindow : UIWindow
{
    int _jailBehavior;
}

+ (struct CGRect)_actualBoundsForScreen:(id)arg1 withJailBehavior:(int)arg2;
+ (struct UIEdgeInsets)_jailInsetsForScreen:(id)arg1;
- (BOOL)_isClippedByScreenJail;
- (BOOL)_isConstrainedByScreenJail;
- (void)setAlpha:(float)arg1;
- (void)setScreen:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets jailInsets;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithScreen:(id)arg1 jailBehavior:(int)arg2;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(float)arg1;

@end
