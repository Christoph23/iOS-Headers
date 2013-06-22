/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOLocationShiftFunctionRequest, GEOLocationShiftFunctionResponse;

@interface GEOLocationShifter : NSObject
{
    BOOL _hasCheckedLocationShiftEnabled;
    BOOL _locationShiftEnabled;
    GEOLocationShiftFunctionResponse *_shiftFunction;
    BOOL _isRequestingShiftFunction;
    CDStruct_2c43369c _coordinateToShift;
    double _coordinateAccuracy;
    GEOLocationShiftFunctionRequest *_shiftRequest;
    int _shiftProviderID;
    id _successHandler;
}

@property(nonatomic) double coordinateAccuracy; // @synthesize coordinateAccuracy=_coordinateAccuracy;
@property(copy, nonatomic) id successHandler; // @synthesize successHandler=_successHandler;
@property(retain, nonatomic) GEOLocationShiftFunctionRequest *shiftRequest; // @synthesize shiftRequest=_shiftRequest;
@property(nonatomic) CDStruct_c3b9c2ee coordinateToShift; // @synthesize coordinateToShift=_coordinateToShift;
@property(retain, nonatomic) GEOLocationShiftFunctionResponse *shiftFunction; // @synthesize shiftFunction=_shiftFunction;
- (void)_shiftAndReturnCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2;
- (void)_applyLocationShift:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2;
- (void)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 withCompletionHandler:(id)arg3;
- (void)_requestShiftFunctionForLocation:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2;
- (void)_countryProvidersDidChange:(id)arg1;
@property(nonatomic) BOOL locationShiftEnabled;
- (void)_updateLocationShiftEnabled;
- (void)dealloc;
- (id)init;

@end
