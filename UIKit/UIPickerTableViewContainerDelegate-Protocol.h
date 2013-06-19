/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol UIPickerTableViewContainerDelegate
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)_usesCheckSelection;
- (BOOL)_soundsEnabled;
- (void)_sendSelectionChangedFromTable:(id)arg1;
- (void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;

@optional
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;
@end

