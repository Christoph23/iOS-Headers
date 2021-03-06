/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RemoteUI/RUIElement.h>

#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSData, NSDate, NSDictionary, NSMutableArray, RemoteUITableViewCell, UISwitch, UIWebView, WebContainerView;

@interface RUITableViewRow : RUIElement <UIPickerViewDelegate, UITextFieldDelegate>
{
    RemoteUITableViewCell *_tableCell;
    id _delegate;
    NSMutableArray *_selectOptions;
    int _selectedRow;
    NSDate *_date;
    NSDate *_dateMax;
    NSDate *_dateMin;
    UISwitch *_switchControl;
    BOOL _rowInvalid;
    NSDictionary *_deleteAction;
    NSData *_data;
    UIWebView *_webView;
    WebContainerView *_webContainerView;
    float _cachedHeight;
}

+ (id)_monthAndDayFormatter;
+ (void)resetLocale;
- (void)setDelegate:(id)arg1;
@property(nonatomic) BOOL rowInvalid; // @synthesize rowInvalid=_rowInvalid;
- (Class)tableCellClass;
- (int)tableCellStyle;
- (id)_dateFormatter;
- (void)setImage:(id)arg1;
- (id)tableCell;
- (BOOL)supportsAutomaticSelection;
- (void)populatePostbackDictionary:(id)arg1;
- (id)selectOptions;
- (void)dealloc;
- (void)_datePickerChanged:(id)arg1;
- (float)rowHeightWithMax:(float)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)clearCachedHeight;
- (void)_activate;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
@property(retain, nonatomic) NSDate *dateMax; // @synthesize dateMax=_dateMax;
@property(retain, nonatomic) NSDate *dateMin; // @synthesize dateMin=_dateMin;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) int selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *deleteAction; // @synthesize deleteAction=_deleteAction;

@end

