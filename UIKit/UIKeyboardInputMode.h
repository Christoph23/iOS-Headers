/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITextInputMode.h>

@class NSArray, NSString;

@interface UIKeyboardInputMode : UITextInputMode
{
    NSString *primaryLanguage;
    NSString *identifier;
    NSString *softwareLayout;
    NSString *hardwareLayout;
}

+ (id)keyboardInputModeWithIdentifier:(id)arg1;
+ (id)hardwareLayoutFromIdentifier:(id)arg1;
+ (id)softwareLayoutFromIdentifier:(id)arg1;
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;
@property(retain, nonatomic) NSString *hardwareLayout; // @synthesize hardwareLayout;
@property(retain, nonatomic) NSString *softwareLayout; // @synthesize softwareLayout;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
@property(retain, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *normalizedIdentifierLevels;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

