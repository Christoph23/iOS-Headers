/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSMutableSet, NSString, UIImage;

@interface SBBulletinListSection : NSObject
{
    NSString *_sectionID;
    int _sectionType;
    int _sectionCategory;
    id _widget;
    NSMutableArray *_bulletins;
    NSMutableSet *_bulletinIDs;
    NSArray *_sortDescriptors;
    NSString *_displayName;
    UIImage *_iconImage;
    unsigned int _notificationCenterLimit;
    BOOL _showsInLockScreen;
    BOOL _displaysCriticalBulletins;
    NSDate *_lastSortDate;
}

@property(nonatomic) BOOL showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property(nonatomic) unsigned int notificationCenterLimit; // @synthesize notificationCenterLimit=_notificationCenterLimit;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) id widget; // @synthesize widget=_widget;
@property(readonly, nonatomic) NSArray *bulletins; // @synthesize bulletins=_bulletins;
@property(nonatomic) int sectionCategory; // @synthesize sectionCategory=_sectionCategory;
- (BOOL)hasBulletinWithID:(id)arg1;
- (id)bulletinWithBulletinID:(id)arg1;
- (id)bulletinAtIndex:(unsigned int)arg1;
- (unsigned int)replaceBulletin:(id)arg1 withBulletin:(id)arg2;
- (unsigned int)removeBulletin:(id)arg1;
- (unsigned int)_removeBulletin:(id)arg1;
- (unsigned int)addBulletin:(id)arg1;
- (unsigned int)indexOfBulletinWithLocalNotification:(id)arg1;
- (unsigned int)indexOfBulletinID:(id)arg1;
- (unsigned int)_indexForNewBulletin:(id)arg1;
- (int)compareSection:(id)arg1 forOrder:(int)arg2;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)initWithSectionInfo:(id)arg1;
- (BOOL)showsTodaysDate;
- (BOOL)displaysCriticalBulletins;
- (id)lastSortDate;
- (BOOL)hasClearableBulletins;
- (unsigned int)bulletinCount;
- (BOOL)isBulletinSection;
- (BOOL)isWidgetSection;
- (id)description;

@end

