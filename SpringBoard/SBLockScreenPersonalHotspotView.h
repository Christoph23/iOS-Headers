/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

@interface SBLockScreenPersonalHotspotView : UIView
{
    UILabel *_clientCountLabel;
    unsigned int _clientCount;
}

@property(nonatomic) unsigned int clientCount; // @synthesize clientCount=_clientCount;
- (void)layoutSubviews;
- (void)_updateLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

