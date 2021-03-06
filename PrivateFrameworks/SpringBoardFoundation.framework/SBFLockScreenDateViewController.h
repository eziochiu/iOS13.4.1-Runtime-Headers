/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver> {
    <SBFDateProviding> * _dateProvider;
    bool  _disablesUpdates;
    bool  _isVisible;
    _UILegibilitySettings * _legibilitySettings;
    id  _minuteHandlerToken;
    bool  _screenOff;
    id  _timerToken;
}

@property (nonatomic, retain) <SBFDateProviding> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) bool screenOff;
@property (getter=isSubtitleHidden, nonatomic) bool subtitleHidden;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addObservers;
- (bool)_canShowWhileLocked;
- (void)_handleTimeZoneChange;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (void)_updateFormat;
- (void)_updateFormatIfEnabled;
- (void)_updateLegibilityStrength;
- (void)_updateState;
- (void)_updateView;
- (id)dateProvider;
- (id)dateView;
- (id)dateViewIfExists;
- (void)dealloc;
- (id)description;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isSubtitleHidden;
- (id)legibilitySettings;
- (void)loadView;
- (bool)screenOff;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(bool)arg2;
- (void)setCustomSubtitleView:(id)arg1;
- (void)setDateProvider:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setScreenOff:(bool)arg1;
- (void)setSubtitleHidden:(bool)arg1;
- (void)setView:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateTimeNow;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
