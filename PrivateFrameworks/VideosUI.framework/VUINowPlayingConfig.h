/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUINowPlayingConfig : NSObject {
    double  _alertIdleTimeout;
    NSArray * _mediaTypesExcludedFromReporting;
    bool  _showsLozengeForLivePlayback;
    bool  _showsStillWatchingAlert;
    double  _stillWatchingAlertDuration;
}

@property (nonatomic) double alertIdleTimeout;
@property (nonatomic, copy) NSArray *mediaTypesExcludedFromReporting;
@property (nonatomic) bool showsLozengeForLivePlayback;
@property (nonatomic) bool showsStillWatchingAlert;
@property (nonatomic) double stillWatchingAlertDuration;

- (void).cxx_destruct;
- (double)alertIdleTimeout;
- (id)init;
- (id)mediaTypesExcludedFromReporting;
- (void)setAlertIdleTimeout:(double)arg1;
- (void)setMediaTypesExcludedFromReporting:(id)arg1;
- (void)setShowsLozengeForLivePlayback:(bool)arg1;
- (void)setShowsStillWatchingAlert:(bool)arg1;
- (void)setStillWatchingAlertDuration:(double)arg1;
- (bool)showsLozengeForLivePlayback;
- (bool)showsStillWatchingAlert;
- (double)stillWatchingAlertDuration;

@end
