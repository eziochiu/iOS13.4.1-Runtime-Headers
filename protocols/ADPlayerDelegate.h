/* Generated by EzioChiu.
 */

@protocol ADPlayerDelegate <NSObject>

@required

- (void)adPlayer:(ADPlayer *)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(ADPlayer *)arg1 readyForPlaybackWithAVPlayer:(AVPlayer *)arg2 impressionProperties:(ADAdImpressionPublicAttributes *)arg3;
- (void)adPlayerDidFinishPlayback:(ADPlayer *)arg1;
- (void)adPlayerDidTimeout:(ADPlayer *)arg1;
- (void)adPlayerFailedToLoadAsset:(ADPlayer *)arg1;
- (void)adPlayerFailedToPlayWithUnknownError:(ADPlayer *)arg1;

@optional

- (void)adPlayer:(ADPlayer *)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (UIViewController *)viewControllerForActionFromAdPlayer:(ADPlayer *)arg1;

@end