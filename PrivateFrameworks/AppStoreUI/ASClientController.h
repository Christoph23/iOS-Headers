/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SUClientController.h"

@interface ASClientController : SUClientController
{
    BOOL _shouldExitAfterPurchases;
}

@property(nonatomic) BOOL shouldExitAfterPurchases; // @synthesize shouldExitAfterPurchases=_shouldExitAfterPurchases;
- (id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (id)initWithClientInterface:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;

@end
