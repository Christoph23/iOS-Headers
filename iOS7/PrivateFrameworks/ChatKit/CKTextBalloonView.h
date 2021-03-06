/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKColoredBalloonView.h>

@class CKBalloonTextView, NSAttributedString;

@interface CKTextBalloonView : CKColoredBalloonView
{
    _Bool _centerTextWhenSkinny;
    CKBalloonTextView *_textView;
    NSAttributedString *_attributedText;
}

@property(nonatomic) _Bool centerTextWhenSkinny; // @synthesize centerTextWhenSkinny=_centerTextWhenSkinny;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) CKBalloonTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool containsHyperlink;
@property(readonly, nonatomic) _Bool isInteractingWithLink;
- (void)touchCanceled:(id)arg1;
- (void)touchDraggedInside:(id)arg1 forEvent:(id)arg2;
- (void)touchUpOutside:(id)arg1 forEvent:(id)arg2;
- (void)touchUpInside:(id)arg1 forEvent:(id)arg2;
- (void)doubleTap:(id)arg1 forEvent:(id)arg2;
- (void)longPress:(id)arg1 forEvent:(id)arg2;
- (void)tap:(id)arg1 forEvent:(id)arg2;
- (void)touchDown:(id)arg1 forEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (double)textViewOffsetBetweenNormalAndSkinny:(struct CGRect)arg1;
- (double)textViewWidthForWidth:(double)arg1;
- (struct CGRect)_textFrameForBounds:(struct CGRect)arg1 forceSkinny:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (void)dealloc;

@end

