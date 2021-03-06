/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIPlaybackReporterUTS : VUIPlaybackReporter {
    VUIPostPlayConfig * _postPlayConfig;
    WLKPlaybackReporter * _reporter;
}

@property (nonatomic, retain) VUIPostPlayConfig *postPlayConfig;
@property (nonatomic, retain) WLKPlaybackReporter *reporter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)_completionFudgeFactor;
- (id)_createSessionForPlayer:(id)arg1;
- (void)_endSession:(id)arg1;
- (bool)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3;
- (void)_reportForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(id /* block */)arg4;
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;
- (void)_reportLinearForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(id /* block */)arg4;
- (void)_reportSummary:(id)arg1 sessionID:(id)arg2 completion:(id /* block */)arg3;
- (void)_reportVODForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(id /* block */)arg4;
- (bool)_watchedTimeEnabled;
- (id)_wlkPlaybackRateForState:(id)arg1 player:(id)arg2;
- (long long)_wlkPlaybackStateForState:(id)arg1;
- (bool)enforceSinglePlaybackSession;
- (id)postPlayConfig;
- (void)reportForPlayer:(id)arg1 completionState:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (id)reporter;
- (void)setPostPlayConfig:(id)arg1;
- (void)setReporter:(id)arg1;

@end
