/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteMatcher : NSObject {
    GEOComposedRoute * _route;
    GEORouteRoadMatcher * _routeRoadMatcher;
    bool  _shouldSnapRouteMatchToRoute;
    bool  _useStrictInitialOnRouteCriteria;
}

@property (nonatomic) bool shouldSnapRouteMatchToRoute;
@property (nonatomic) bool useStrictInitialOnRouteCriteria;

- (void).cxx_destruct;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (void)_considerCandidateMatch:(id)arg1;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(id /* block */)arg3;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (bool)_shouldConsiderCourseForLocation:(id)arg1;
- (void)_snapRouteMatchToRoad:(id)arg1;
- (void)_startRouteMatch;
- (id)_startStepForPreviousRouteMatch:(id)arg1;
- (id)_stepForPointIndex:(unsigned int)arg1 previousStep:(id)arg2;
- (bool)_supportsSnapping;
- (void)dealloc;
- (double)distanceToRouteFrom:(struct { double x1; double x2; })arg1;
- (double)distanceToRouteFrom:(struct { double x1; double x2; })arg1 startDistance:(double)arg2 endDistance:(double)arg3;
- (id)initWithRoute:(id)arg1;
- (id)matchToClosestPointOnRouteWithLocation:(id)arg1;
- (id)matchToRouteWithLocation:(id)arg1;
- (id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2;
- (void)setShouldSnapRouteMatchToRoute:(bool)arg1;
- (void)setUseStrictInitialOnRouteCriteria:(bool)arg1;
- (bool)shouldSnapRouteMatchToRoute;
- (bool)useStrictInitialOnRouteCriteria;

@end