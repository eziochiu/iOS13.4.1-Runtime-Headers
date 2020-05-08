/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenWakeAnimator : NSObject <SBFScreenWakeAnimationTarget> {
    SBFLockScreenDateView * _dateView;
    UIView * _superviewForDateViewAnimation;
    UIVisualEffectView * _wakeEffectView;
    long long  _wakeState;
}

@property (nonatomic, retain) SBFLockScreenDateView *dateView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *superviewForDateViewAnimation;
@property (nonatomic) UIVisualEffectView *wakeEffectView;
@property (nonatomic) long long wakeState;

- (void).cxx_destruct;
- (long long)_targetWakeStateForFadeIn:(bool)arg1;
- (id)_wakeEffectsForAnimatingWakeState:(long long)arg1;
- (id)_wakeEffectsForPersistentWakeState:(long long)arg1;
- (id)dateView;
- (void)setDateView:(id)arg1;
- (void)setSuperviewForDateViewAnimation:(id)arg1;
- (void)setWakeEffectView:(id)arg1;
- (void)setWakeState:(long long)arg1;
- (id)superviewForDateViewAnimation;
- (void)updateWakeEffectsForWake:(bool)arg1;
- (void)updateWakeEffectsForWake:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)wakeEffectView;
- (long long)wakeState;

@end