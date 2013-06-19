/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class UIImage;

@interface SBDarkeningImageView : UIImageView
{
    UIImage *_baseImage;
    float _brightness;
    id <SBDarkeningImageViewDelegate> _delegate;
}

@property(nonatomic) id <SBDarkeningImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)setImage:(id)arg1 brightness:(float)arg2;
@property(nonatomic) float brightness;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

