/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextView.h"

@class ABSwellTextView, UIColor;

@interface ABUITextView : UITextView
{
    float _lastContentHeight;
    BOOL _isHighlighted;
    UIColor *_savedTextColor;
    UIColor *_highlightedTextColor;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
    BOOL _disallowsSetContentOffset;
    BOOL _informParentOfContentSizeChange;
    struct _NSRange _pinnedCursorPosition;
    ABSwellTextView *_parent;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
@property(nonatomic) BOOL disallowsSetContentOffset; // @synthesize disallowsSetContentOffset=_disallowsSetContentOffset;
- (void)_secretSetFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_isHighlighted;
- (void)setTextColor:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)_beginPinningInputViews;
- (void)_endPinningInputViews;
- (void)_updateStylesheet;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(nonatomic) ABSwellTextView *parent; // @synthesize parent=_parent;

@end

