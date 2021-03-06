/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MKRoute, MKRouteGroup, MKRouteLoader, MKRouteStep, MKShinyRouteOverlayView, NSMutableDictionary, NSMutableSet, UIImageView;

@interface MKRouteManager : NSObject
{
    int _searchMode;
    id <MKRouteManagerDelegate> _delegate;
    MKRouteLoader *_routeLoader;
    UIImageView *_routePositionView;
    id <MKOverlay> _routeViewBModel;
    MKShinyRouteOverlayView *_routeViewB;
    NSMutableSet *_stepsToInvalidate;
    NSMutableDictionary *_transitAnnotationViews;
    BOOL _isShowingTransitAnnotationViews;
    NSMutableDictionary *_alternateRouteAnnotationViews;
    BOOL _isShowingAlternateRouteAnnotationViews;
    BOOL _isDroppingRoutePins;
    CDStruct_2c43369c _routePositionViewCoordinate;
    BOOL _tapRouteToSelectEnabled;
    BOOL _routesWereDistinguishable;
    BOOL _isAnimating;
    float _futureScale;
    CDStruct_34734122 _futureCenterPoint;
    double _futureDuration;
}

+ (void)reorientIfOffscreenAlternateRouteAnnotationView:(id)arg1 forMapView:(id)arg2;
+ (void)updateLocationAndOrientationOfAlternateRouteAnnotationViews:(id)arg1;
+ (id)sharedManager;
@property(nonatomic) CDStruct_c3b9c2ee routePositionViewCoordinate; // @synthesize routePositionViewCoordinate=_routePositionViewCoordinate;
@property(nonatomic) BOOL isDroppingRoutePins; // @synthesize isDroppingRoutePins=_isDroppingRoutePins;
@property(nonatomic) BOOL isShowingAlternateRouteAnnotationViews; // @synthesize isShowingAlternateRouteAnnotationViews=_isShowingAlternateRouteAnnotationViews;
@property(retain, nonatomic) NSMutableDictionary *alternateRouteAnnotationViews; // @synthesize alternateRouteAnnotationViews=_alternateRouteAnnotationViews;
@property(nonatomic) BOOL isShowingTransitAnnotationViews; // @synthesize isShowingTransitAnnotationViews=_isShowingTransitAnnotationViews;
@property(retain, nonatomic) NSMutableDictionary *transitAnnotationViews; // @synthesize transitAnnotationViews=_transitAnnotationViews;
@property(retain, nonatomic) NSMutableSet *stepsToInvalidate; // @synthesize stepsToInvalidate=_stepsToInvalidate;
@property(retain, nonatomic) MKShinyRouteOverlayView *routeViewB; // @synthesize routeViewB=_routeViewB;
@property(retain, nonatomic) id <MKOverlay> routeViewBModel; // @synthesize routeViewBModel=_routeViewBModel;
@property(retain, nonatomic) UIImageView *routePositionView; // @synthesize routePositionView=_routePositionView;
@property(retain, nonatomic) MKRouteLoader *routeLoader; // @synthesize routeLoader=_routeLoader;
@property(nonatomic) id <MKRouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int searchMode; // @synthesize searchMode=_searchMode;
- (id)routeCorrectedLocationForLocation:(id)arg1 routeStep:(id *)arg2;
@property(retain, nonatomic) MKShinyRouteOverlayView *routeView;
@property(readonly, nonatomic) BOOL pansAndZoomsToRouteOverview;
@property(nonatomic) BOOL showingRoute;
@property(nonatomic) BOOL needToShowRoute;
@property(readonly, nonatomic) BOOL routeStartStepIsActive;
@property(readonly, nonatomic) unsigned int previousStepIndex;
@property(readonly, nonatomic) MKRouteStep *previousStep;
@property(readonly, nonatomic) unsigned int stepIndex;
@property(readonly, nonatomic) MKRouteStep *step;
@property(readonly, nonatomic) MKRouteGroup *displayedRouteGroup;
@property(readonly, nonatomic) MKRouteGroup *routeGroup;
@property(readonly, nonatomic) unsigned int selectedRouteIndex;
@property(readonly, nonatomic) MKRoute *selectedRoute;
- (void)mapView:(id)arg1 resetDisplay:(BOOL)arg2;
- (void)_synchronizeScrollingAnimation:(BOOL)arg1;
- (void)_hideAnnotationView:(id)arg1;
- (void)_showAnnotationView:(id)arg1;
- (void)gestureRecognizer:(id)arg1 tappedAnnotationView:(id)arg2;
- (void)_cleanup;
- (void)_cancelAnimationsForMapView:(id)arg1;
- (void)_willRemoveAnnotationView:(id)arg1;
- (id)_viewForAnnotation:(id)arg1;
- (void)_animateRouteForMapView:(id)arg1 destination:(CDStruct_02837cd9)arg2 duration:(double)arg3 originalScrollViewZoomScale:(float)arg4 zoomScale:(float)arg5;
- (void)_cleanupAfterRVBAnimationForMapView:(id)arg1;
- (void)animateRoutePositionViewForMapView:(id)arg1;
- (void)deferred_animateRoutePositionViewPan:(id)arg1;
- (void)_setMapView:(id)arg1 showingRoute:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_didHideRouteMapView:(id)arg1;
- (void)_animateRoutePositionViewPanMapView:(id)arg1;
- (BOOL)_animateRoutePositionViewPanMapView:(id)arg1 centerPoint:(CDStruct_c3b9c2ee)arg2 scale:(float)arg3 duration:(double)arg4 animation:(int)arg5;
- (void)goToRouteStepForMapView:(id)arg1 animated:(BOOL)arg2;
- (void)_updateRoutePositionViewForMapView:(id)arg1;
- (void)_updateRoutePosition;
- (struct CGPoint)_routePositionCenterForMapView:(id)arg1;
- (void)_minimizeOverlapOfRouteAnnotationViewsInMapView:(id)arg1;
- (id)_acceptableOrientationsForRouteAnnotationView:(id)arg1 fromOrientations:(id)arg2 withStaticRouteAnnotationView:(id)arg3 inOrientation:(id)arg4;
- (id)_acceptableOrientationsForRouteAnnotationView:(id)arg1 withAnnotationViewsToAvoid:(id)arg2;
- (id)_acceptableOrientationsForRouteAnnotationView:(id)arg1 withAnnotationViewToAvoid:(id)arg2;
- (float)_areaOverlapOfRouteAnnotationView:(id)arg1 withAnnotationViewToAvoid:(id)arg2 inOrientation:(int)arg3;
- (void)updateAlternateRouteAnnotationViewsForMapView:(id)arg1;
- (id)titleForAllRoutes;
- (id)titleForRoute:(id)arg1;
- (void)_saveStepToInvalidate:(int)arg1;
- (BOOL)_needsToPanRoutePositionView;
- (void)_invalidateRouteStepsForMapView:(id)arg1;
- (void)setSelectedRouteIndex:(unsigned int)arg1 forMapView:(id)arg2;
- (void)_resetRouteLoaderForMapView:(id)arg1;
- (void)_handleTapToSwitchRoutes:(id)arg1;
- (void)_setTransitAnnotationViewAlphas:(float)arg1;
- (void)_setShowingTransitAnnotationViews:(BOOL)arg1 forAnnotationContainerView:(id)arg2;
- (void)_setShowingAlternateRouteAnnotationViews:(BOOL)arg1 forAnnotationContainerView:(id)arg2;
- (CDStruct_411ed4d8)_zoomRegionForStep:(id)arg1 inRoute:(id)arg2 inMapView:(id)arg3;
- (void)_setupRoutePositionView;
- (id)_routePositionViewImage;
- (id)init;

@end

