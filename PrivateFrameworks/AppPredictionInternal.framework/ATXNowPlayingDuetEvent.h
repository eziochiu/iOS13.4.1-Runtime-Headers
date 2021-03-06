/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXNowPlayingDuetEvent : ATXDuetEvent {
    NSString * _bundleId;
    long long  _nowPlayingState;
    NSString * _track;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) long long nowPlayingState;
@property (nonatomic, readonly) NSString *track;

- (void).cxx_destruct;
- (id)bundleId;
- (id)description;
- (id)identifier;
- (id)initWithBundleId:(id)arg1 track:(id)arg2 nowPlayingState:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;
- (long long)nowPlayingState;
- (id)track;

@end
