/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TAGeneralDetectionMetrics : NSObject {
    unsigned long long  _dominantUserActivity;
    bool  _geoNavHint;
    TAInterVisitMetricPerDevice * _interVisitMetrics;
    long long  _pdState;
    bool  _vehicularStateHint;
}

@property (nonatomic, readonly) unsigned long long dominantUserActivity;
@property (nonatomic, readonly) bool geoNavHint;
@property (nonatomic, readonly) TAInterVisitMetricPerDevice *interVisitMetrics;
@property (nonatomic, readonly) long long pdState;
@property (nonatomic, readonly) bool vehicularStateHint;

- (void).cxx_destruct;
- (unsigned long long)dominantUserActivity;
- (bool)geoNavHint;
- (id)initWithInterVisitMetrics:(id)arg1 dominantUserActivity:(unsigned long long)arg2 pdState:(long long)arg3 geoNavHint:(bool)arg4 vehicularStateHint:(bool)arg5;
- (id)interVisitMetrics;
- (long long)pdState;
- (bool)vehicularStateHint;

@end