/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVLooper : NSObject {
    SVVideoDurationObserver * _durationObserver;
    AVPlayer * _player;
}

@property (nonatomic, readonly) SVVideoDurationObserver *durationObserver;
@property (nonatomic, readonly) AVPlayer *player;

- (void).cxx_destruct;
- (id)durationObserver;
- (id)initWithPlayer:(id)arg1;
- (id)player;

@end
