/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPLayerGroup.h>

#import "MPActionableSupportInternal-Protocol.h"
#import "MPLayerableSupportInternal-Protocol.h"
#import "MPNavigatorSupportInternal-Protocol.h"

@interface MPLayerGroup (Internal) <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal>
- (_Bool)detectFacesInBackground;
- (id)layerKeyDictionary;
- (id)actionableObjectForID:(id)arg1;
- (void)setIsDocumentLayerGroup:(_Bool)arg1;
- (long long)lastSlideUsed;
- (void)setLastSlideUsed:(long long)arg1;
- (void)setUsedAllPaths:(_Bool)arg1;
- (double)aspectRatioDidChange:(double)arg1 atTime:(double)arg2;
- (_Bool)nearingEndWithOptions:(id)arg1;
- (id)liveLock;
- (void)setAuthoredVersionInfo:(id)arg1;
- (id)authoredVersionInfo;
- (void)copyActions:(id)arg1;
- (void)copyAnimationPaths:(id)arg1;
- (void)copyAudioPlaylist:(id)arg1;
- (void)copyLayerDictionary:(id)arg1;
- (void)copyLayers:(id)arg1;
- (void)copyStruct:(id)arg1;
- (void)reconfigureLoopingMode;
- (void)reconnectAll;
- (void)setDurationPadding:(double)arg1;
- (double)durationPadding;
- (void)resetDuration;
- (void)cleanup;
- (void)setPlug:(id)arg1;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)configureActions;
- (void)setParent:(id)arg1;
- (id)observer;
- (void)cachePaths;
- (_Bool)layersCanPositionZIndex;
- (id)objectID;
- (id)plugID;
@end

