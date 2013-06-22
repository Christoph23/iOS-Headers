/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAwayListItem.h"

@class NSString, SBAlertItem, UIImage;

@interface SBAwaySystemAlertItem : SBAwayListItem
{
    SBAlertItem *_currentAlert;
    NSString *_title;
    UIImage *_appImage;
    NSString *_message;
    int _cancelButtonIdx;
    BOOL _isAlarm;
}

- (BOOL)isAlarm;
- (int)snoozeButtonindex;
- (int)cancelButtonIndex;
- (void)buttonPressedAtIndex:(int)arg1;
- (id)sortDate;
- (id)iconImage;
- (id)title;
- (id)message;
- (void)setCurrentAlert:(id)arg1;
- (id)currentAlert;
- (void)dealloc;
- (id)initWithSystemAlert:(id)arg1;

@end
