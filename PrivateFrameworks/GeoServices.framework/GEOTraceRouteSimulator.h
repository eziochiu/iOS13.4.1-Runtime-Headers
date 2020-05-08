/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraceRouteSimulator : NSObject {
    double  _deltaT;
    struct { 
        double latitude; 
        double longitude; 
    }  _destination;
    double  _duration;
    double  _horizontalAccuracy;
    NSArray * _locations;
    NSMutableArray * _mutableLocations;
    struct { 
        double latitude; 
        double longitude; 
    }  _origin;
    NSDictionary * _pointTimestamps;
    GEODirectionsRequest * _request;
    GEODirectionsResponse * _response;
    GEOComposedRoute * _route;
    GEORouteAttributes * _routeAttributes;
    unsigned int  _routeIndex;
    NSDate * _startTime;
    double  _verticalAccuracy;
    struct { 
        double latitude; 
        double longitude; 
    }  _walkingEnd;
    struct { 
        double latitude; 
        double longitude; 
    }  _walkingStart;
}

@property (nonatomic) double deltaT;
@property (nonatomic) struct { double x1; double x2; } destination;
@property (nonatomic) double duration;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic, retain) NSArray *locations;
@property (nonatomic, retain) NSMutableArray *mutableLocations;
@property (nonatomic) struct { double x1; double x2; } origin;
@property (nonatomic, readonly) NSDictionary *pointTimestamps;
@property (nonatomic, readonly) GEODirectionsRequest *request;
@property (nonatomic, readonly) GEODirectionsResponse *response;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) unsigned int routeIndex;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) struct { double x1; double x2; } walkingEnd;
@property (nonatomic) struct { double x1; double x2; } walkingStart;

- (void).cxx_destruct;
- (void)addLocation:(struct { double x1; double x2; })arg1 withCourse:(double)arg2 altitude:(double)arg3 speed:(double)arg4 transport:(int)arg5;
- (double)deltaT;
- (struct { double x1; double x2; })destination;
- (double)duration;
- (double)estimateDuration;
- (void)generateLocations;
- (void)generateLocationsWithSpeedOverride:(double)arg1;
- (double)horizontalAccuracy;
- (id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned int)arg5;
- (id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned int)arg5 locations:(id)arg6;
- (id)locations;
- (id)mutableLocations;
- (struct { double x1; double x2; })origin;
- (id)pointTimestamps;
- (id)request;
- (id)response;
- (id)route;
- (id)routeAttributes;
- (unsigned int)routeIndex;
- (void)setDeltaT:(double)arg1;
- (void)setDestination:(struct { double x1; double x2; })arg1;
- (void)setDuration:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLocations:(id)arg1;
- (void)setMutableLocations:(id)arg1;
- (void)setOrigin:(struct { double x1; double x2; })arg1;
- (void)setStartTime:(id)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (void)setWalkingEnd:(struct { double x1; double x2; })arg1;
- (void)setWalkingStart:(struct { double x1; double x2; })arg1;
- (void)simulateWalkingFrom:(struct { double x1; double x2; })arg1 to:(struct { double x1; double x2; })arg2;
- (id)startTime;
- (double)verticalAccuracy;
- (struct { double x1; double x2; })walkingEnd;
- (struct { double x1; double x2; })walkingStart;

@end