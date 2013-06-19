/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, UITextInputTraits, UIView, UIViewController, _UIModalItemBackgroundView, _UIModalItemContentView;

@interface UIModalItem : NSObject
{
    NSString *_title;
    NSString *_message;
    NSString *_cancelButtonTitle;
    NSString *_defaultButtonTitle;
    NSMutableArray *_otherButtonsTitles;
    int _itemType;
    id <UIModalItemDelegate> _delegate;
    id _completionBlock;
    int _modalItemInputStyle;
    UIView *_popoverTargetView;
    struct CGRect _popoverTargetRect;
    UIViewController *_contentViewController;
    struct CGSize _contentViewControllerSize;
    int _presentAnimationType;
    int _dismissAnimationType;
    BOOL _isPresented;
    BOOL _isVisible;
    BOOL _isBeingDismissed;
    UIViewController *_viewController;
    UIViewController *_hostingViewController;
    UIViewController *_anchorViewController;
    int _defaultButtonIndex;
    int _cancelButtonIndex;
    _UIModalItemContentView *_contentView;
    _UIModalItemBackgroundView *_backgroundView;
    UIView *_representedView;
    NSString *_loginString;
    NSString *_passwordString;
    NSString *_loginPlaceholderString;
    NSString *_passwordPlaceholderString;
    UITextInputTraits *_passwordTraits;
    UITextInputTraits *_loginTraits;
    int _dismissIndex;
    int cancelButtonIndex;
    NSArray *_buttonTitles;
}

+ (id)modalItemWithType:(int)arg1 title:(id)arg2 message:(id)arg3 buttonTitles:(id)arg4 completion:(id)arg5;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) int defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(copy, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) struct CGSize contentViewControllerSize; // @synthesize contentViewControllerSize=_contentViewControllerSize;
@property(copy, nonatomic) NSString *passwordPlaceholderString; // @synthesize passwordPlaceholderString=_passwordPlaceholderString;
@property(copy, nonatomic) NSString *loginPlaceholderString; // @synthesize loginPlaceholderString=_loginPlaceholderString;
@property(copy, nonatomic) NSString *passwordString; // @synthesize passwordString=_passwordString;
@property(copy, nonatomic) NSString *loginString; // @synthesize loginString=_loginString;
@property(retain, nonatomic) _UIModalItemBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIModalItemContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) id <UIModalItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int dismissAnimationType; // @synthesize dismissAnimationType=_dismissAnimationType;
@property(nonatomic) int presentAnimationType; // @synthesize presentAnimationType=_presentAnimationType;
@property(nonatomic) int cancelButtonIndex; // @synthesize cancelButtonIndex;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_popoverTargetRect;
@property(nonatomic) UIView *targetView; // @synthesize targetView=_popoverTargetView;
@property(nonatomic) int dismissIndex; // @synthesize dismissIndex=_dismissIndex;
@property(nonatomic) BOOL isBeingDismissed; // @synthesize isBeingDismissed=_isBeingDismissed;
@property(readonly) BOOL isPresented; // @synthesize isPresented=_isPresented;
@property(nonatomic) int modalItemInputStyle; // @synthesize modalItemInputStyle=_modalItemInputStyle;
@property(nonatomic) int type; // @synthesize type=_itemType;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_passwordTraits;
- (id)_loginTraits;
- (void)_loginFieldTextDidChange;
- (void)_passwordFieldTextDidChange;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (float)_maxHeight;
- (float)_maxWidth;
- (id)_defaultButtonTitle;
- (id)_cancelButtonTitle;
- (id)_otherButtonsTitles;
- (id)_typeKey;
- (void)_setAnchorViewController:(id)arg1;
- (id)_anchorViewController;
- (void)_setHostingViewController:(id)arg1;
- (id)_hostingViewController;
@property(retain, nonatomic, getter=_viewController, setter=_setViewController:) UIViewController *_viewController;
- (id)_popoverBackgroundView;
- (id)_representedView;
- (void)_setRepresentedView:(id)arg1;
- (id)_contentView;
- (id)_backgroundView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 otherButtonTitles:(id)arg3 completion:(id)arg4 delegate:(void)arg5;
- (id)buttonTitleAtIndex;
- (int)addButtonWithTitle:(id)arg1;
- (id)textFieldAtIndex:(int)arg1;

@end

