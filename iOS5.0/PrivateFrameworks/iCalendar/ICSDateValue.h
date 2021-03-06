/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@interface ICSDateValue : NSObject <NSCoding>
{
    int _year;
    int _month;
    int _day;
}

+ (id)dateFromICSString:(id)arg1;
@property(readonly) int day; // @synthesize day=_day;
@property(readonly) int month; // @synthesize month=_month;
@property(readonly) int year; // @synthesize year=_year;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)icsString;
- (int)compare:(id)arg1;
- (id)components;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;

@end

