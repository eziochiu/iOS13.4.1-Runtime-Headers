/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUICountdownAnimator : NSObject {
    bool  _animating;
    bool  _canceled;
    ARUICountdownView * _countdownView;
    <ARUICountdownAnimation> * _currentAnimation;
    <ARUICountdownAnimatorDelegate> * _delegate;
    struct { 
        unsigned int willBeginAnimating : 1; 
        unsigned int willBeginAnimation : 1; 
        unsigned int performingAnimation : 1; 
        unsigned int completedAnimation : 1; 
        unsigned int didFinishAnimating : 1; 
    }  _delegateFlags;
    ARUICountdownTimeline * _timeline;
}

@property (nonatomic) ARUICountdownView *countdownView;
@property (nonatomic) <ARUICountdownAnimatorDelegate> *delegate;
@property (nonatomic, retain) ARUICountdownTimeline *timeline;

- (void).cxx_destruct;
- (void)_applyAnimationAtIndex:(unsigned long long)arg1;
- (void)_applyCancelAnimationAtIndex:(unsigned long long)arg1;
- (void)_delegate_completedAnimation:(id)arg1;
- (void)_delegate_didFinishAnimating;
- (void)_delegate_performingAnimation:(id)arg1 withDuration:(double)arg2;
- (void)_delegate_willBeginAnimating;
- (void)_delegate_willBeginAnimation:(id)arg1 afterDelay:(double)arg2;
- (void)beginAnimations;
- (void)cancelAnimations;
- (bool)canceled;
- (id)countdownView;
- (id)delegate;
- (id)initWithTimeline:(id)arg1;
- (bool)isAnimating;
- (void)prepareToAnimate;
- (void)setCountdownView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTimeline:(id)arg1;
- (id)timeline;

@end
