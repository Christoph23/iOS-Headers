/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSISVariableDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet;

@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate>
{
    NSMutableDictionary *oldIdentsToNewVariables;
    NSMutableSet *variablesToIntegralize;
    NSMutableSet *userObservableVariables;
}

- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (void)playbackOneAction:(id)arg1 onEngine:(id)arg2;
- (void)dealloc;
- (id)unwrapLinearExpression:(id)arg1;
- (id)unwrapVariable:(id)arg1;
- (id)init;

@end

