/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class NSDictionary;

@interface GKRelayUpdateDataRequest : GKDataRequest
{
    NSDictionary *_updateRelayRequest;
}

@property(retain, nonatomic) NSDictionary *updateRelayRequest; // @synthesize updateRelayRequest=_updateRelayRequest;
- (void)handleResponseFromServer:(id)arg1;
- (id)request;
- (id)key;
- (void)dealloc;

@end

