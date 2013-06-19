/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface NSError : NSObject <NSCopying, NSSecureCoding>
{
    void *_reserved;
    int _code;
    NSString *_domain;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
+ (void)_registerFormatter:(void *)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_registerBuiltInFormatters;
+ (id)_web_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(int)arg2 failingURL:(id)arg3;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
- (unsigned long)_cfTypeID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)helpAnchor;
- (id)recoveryAttempter;
- (id)localizedRecoveryOptions;
- (id)localizedRecoverySuggestion;
- (id)localizedFailureReason;
- (id)localizedDescription;
- (struct __CFString *)_retainedUserInfoCallBackForKey:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)userInfo;
- (id)domain;
- (int)code;
- (void)finalize;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 code:(int)arg2 userInfo:(id)arg3;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct **)arg3 count:(int)arg4;
- (int)_collectApplicableUserInfoFormatters:(struct **)arg1 max:(int)arg2;
- (id)_web_failingURL;
- (id)_web_localizedDescription;
- (BOOL)_web_errorIsInDomain:(id)arg1;
- (id)_web_initWithDomain:(id)arg1 code:(int)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(int)arg2 URL:(id)arg3;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

