/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBRingerHUDViewController : UIViewController <SBHUDViewControlling, UIViewControllerTransitioningDelegate> {
    <SBRingerHUDViewControllerDelegate> * _delegate;
    NSTimer * _dismissalTimer;
    bool  _lastEventIsAVolumeChange;
    double  _overshoot;
    SBRingerPillView * _pillView;
    UIViewFloatAnimatableProperty * _positionSpring;
    bool  _ringerSilent;
    UIViewFloatAnimatableProperty * _ringerValueSpring;
    float  _volume;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBRingerHUDViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSTimer *dismissalTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastEventIsAVolumeChange;
@property (nonatomic) double overshoot;
@property (nonatomic, retain) SBRingerPillView *pillView;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *positionSpring;
@property (getter=isPresented, nonatomic, readonly) bool presented;
@property (nonatomic) bool ringerSilent;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *ringerValueSpring;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_createSprings;
- (void)_dismiss;
- (void)_extendDismissalTimer;
- (void)_layoutPillView;
- (void)_setPositionSpringValue:(double)arg1 completion:(id /* block */)arg2;
- (void)_updateStateAnimated:(bool)arg1 invert:(bool)arg2;
- (void)_updateVolumeSliderAnimated:(bool)arg1;
- (void)buttonReleased;
- (bool)definesAnimatedDismissal;
- (id)delegate;
- (void)dismissAnimatedWithCompletion:(id /* block */)arg1;
- (id)dismissalTimer;
- (bool)isPresented;
- (bool)lastEventIsAVolumeChange;
- (void)loadView;
- (void)noteVolumeDidChange:(float)arg1;
- (void)noteVolumeDownWasHit:(bool)arg1;
- (void)noteVolumeUpWasHit:(bool)arg1;
- (void)nudgeUp:(bool)arg1;
- (double)overshoot;
- (id)pillView;
- (id)positionSpring;
- (void)presentForMuteSwitch:(bool)arg1;
- (void)refreshAudioUI;
- (bool)ringerSilent;
- (id)ringerValueSpring;
- (void)setDelegate:(id)arg1;
- (void)setDismissalTimer:(id)arg1;
- (void)setLastEventIsAVolumeChange:(bool)arg1;
- (void)setOvershoot:(double)arg1;
- (void)setPillView:(id)arg1;
- (void)setPositionSpring:(id)arg1;
- (void)setRingerSilent:(bool)arg1;
- (void)setRingerValueSpring:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 animated:(bool)arg2 forKeyPress:(bool)arg3;
- (void)swipeGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (float)volume;

@end