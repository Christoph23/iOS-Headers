/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITextTapRecognizer.h>

@class UIResponder<UITextInput>;

@interface UISelectionTapRecognizer : UITextTapRecognizer
{
    UIResponder<UITextInput> *_textView;
}

@property UIResponder<UITextInput> *textView; // @synthesize textView=_textView;
- (void)setState:(int)arg1;
- (BOOL)isCloseToSelection;

@end

