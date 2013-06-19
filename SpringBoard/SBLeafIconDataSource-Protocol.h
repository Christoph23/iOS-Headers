/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBLeafIconDataSource <NSObject>
- (BOOL)icon:(id)arg1 launchFromLocation:(int)arg2;
- (BOOL)iconAllowsLaunch:(id)arg1;
- (BOOL)iconCompleteUninstall:(id)arg1;
- (BOOL)iconAllowsUninstall:(id)arg1;
- (BOOL)iconIsRecentlyUpdated:(id)arg1;
- (int)iconAccessoryType:(id)arg1;
- (id)iconFormattedAccessoryString:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (float)iconProgress:(id)arg1;
- (BOOL)iconAppearsInNewsstand:(id)arg1;
- (BOOL)iconCanElliptisizeLabel:(id)arg1;
- (id)iconDisplayName:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (unsigned int)iconPriority:(id)arg1;
@end

