/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class ADAdSpecification, ADRequestProperties, NSMutableArray;

@interface ADAdBatchRequest : PBRequest
{
    ADRequestProperties *_requestProperties;
    ADAdSpecification *_specification;
    NSMutableArray *_requesterIdentifiers;
    BOOL _hasDefaultsLastUpdate;
    unsigned long long _defaultsLastUpdate;
}

@property(nonatomic) unsigned long long defaultsLastUpdate; // @synthesize defaultsLastUpdate=_defaultsLastUpdate;
@property(nonatomic) BOOL hasDefaultsLastUpdate; // @synthesize hasDefaultsLastUpdate=_hasDefaultsLastUpdate;
@property(retain, nonatomic) NSMutableArray *requesterIdentifiers; // @synthesize requesterIdentifiers=_requesterIdentifiers;
@property(retain, nonatomic) ADAdSpecification *specification; // @synthesize specification=_specification;
@property(retain, nonatomic) ADRequestProperties *requestProperties; // @synthesize requestProperties=_requestProperties;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)requesterIdentifierAtIndex:(unsigned int)arg1;
- (unsigned int)requesterIdentifiersCount;
- (void)addRequesterIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL hasSpecification;
@property(readonly, nonatomic) BOOL hasRequestProperties;
- (void)dealloc;

@end
