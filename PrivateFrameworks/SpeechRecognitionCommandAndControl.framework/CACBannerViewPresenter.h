/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

@interface CACBannerViewPresenter : NSObject {
    CACBannerView * _bannerView;
    UIView * _containingView;
}

@property (nonatomic, retain) CACBannerView *bannerView;
@property (nonatomic, readonly) UIView *containingView;

+ (double)durationToDisplayMessageString:(id)arg1;

- (void).cxx_destruct;
- (void)_hideBannerView;
- (id)bannerView;
- (id)containingView;
- (void)dismissBannerView;
- (id)initWithContainingView:(id)arg1;
- (void)presentBannerViewWithText:(id)arg1 type:(long long)arg2;
- (void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 duration:(double)arg3;
- (void)setBannerView:(id)arg1;

@end
