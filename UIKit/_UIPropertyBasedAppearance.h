/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIAppearance.h>

@class NSDictionary;

@interface _UIPropertyBasedAppearance : _UIAppearance
{
    NSDictionary *_propertiesToMatch;
}

+ (id)appearanceAtNode:(id)arg1 withObject:(id)arg2;
+ (id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;
+ (id)_appearanceObjectKeyForProperties:(id)arg1;
@property(retain, nonatomic, setter=_setPropertiesToMatch:) NSDictionary *_propertiesToMatch; // @synthesize _propertiesToMatch;

@end

