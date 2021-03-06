/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKOlympusFaceView : NTKAnalogFaceView <NTKOlympusViewDelegate, NTKUtilityFlatComplicationViewDelegate, NTKVictoryAnalogBackgroundViewDelegate> {
    NTKVictoryAnalogBackgroundView * _analogBackgroundView;
    double  _circleDiameter;
    NSNumber * _clockTimerToken;
    bool  _contentLoaded;
    NTKRoundedCornerOverlayView * _cornerView;
    unsigned long long  _currentColor;
    unsigned long long  _currentDial;
    unsigned long long  _currentStyle;
    NSDate * _date;
    NTKCircularAnalogDialView * _dialView;
    unsigned long long  _hour;
    unsigned long long  _minute;
    NTKOlympusTimeView * _olympusView;
    unsigned long long  _second;
    bool  _trackSeconds;
}

@property (nonatomic, retain) NTKVictoryAnalogBackgroundView *analogBackgroundView;
@property (nonatomic) double circleDiameter;
@property (nonatomic, retain) NSNumber *clockTimerToken;
@property (nonatomic) bool contentLoaded;
@property (nonatomic, retain) NTKRoundedCornerOverlayView *cornerView;
@property (nonatomic) unsigned long long currentColor;
@property (nonatomic) unsigned long long currentDial;
@property (nonatomic) unsigned long long currentStyle;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NTKCircularAnalogDialView *dialView;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic, retain) NTKOlympusTimeView *olympusView;
@property (nonatomic) unsigned long long second;
@property (readonly) Class superclass;
@property (nonatomic) bool trackSeconds;

+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyContentViewTranform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_applyDataMode;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(bool)arg4;
- (void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;
- (void)_applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (double)_bezelUtilityComplicationAlphaForEditMode:(long long)arg1;
- (double)_calculateDeviationBetweenHourAngle:(double)arg1 minuteAngle:(double)arg2;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterZoom;
- (double)_complicationAlphaForEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureTimeView:(id)arg1;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (void)_createAnalogBackgroundIfNeeded;
- (double)_dialAlphaForEditMode:(long long)arg1;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_handleSignificantTimeChanged;
- (bool)_hasWindrunnerWedge;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (bool)_needsForegroundContainerView;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_removeViews;
- (void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)_setupDialViewIfNeeded;
- (void)_setupViews;
- (bool)_showAnalogHands;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_tearDownAnalogView;
- (void)_tearDownOlympusView;
- (double)_timeAlphaForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateDialBezelComplicationColor:(id)arg1;
- (void)_updateDialTicksForBezelText;
- (bool)_wantsStatusBarIconShadow;
- (id)analogBackgroundView;
- (void)animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3;
- (void)applyColorOnAnalogHands;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (void)applyTransitionToCircularDialWithBezelFraction:(double)arg1;
- (void)applyWindrunnerMask;
- (void)applyWindrunnerMaskStartAngle:(double)arg1 endAngle:(double)arg2;
- (double)bezelComplicationTextWidthInRadius;
- (double)circleDiameter;
- (id)clockTimerToken;
- (void)configureComplicationAlphaFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)configureViewsForEditing;
- (bool)contentLoaded;
- (double)contentViewScale;
- (id)cornerView;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (void)createOlympusViewIfNeeded;
- (unsigned long long)currentColor;
- (unsigned long long)currentDial;
- (unsigned long long)currentStyle;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)dialView;
- (unsigned long long)hour;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (bool)isCircularDialWithBezel;
- (void)layoutSubviews;
- (void)logoTappedFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)minute;
- (id)olympusView;
- (void)olympusView:(id)arg1 didTapAppLogoFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)openVictoryAppFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)second;
- (void)setAnalogBackgroundView:(id)arg1;
- (void)setCircleDiameter:(double)arg1;
- (void)setCircularMaskForCircularDialFraction:(double)arg1 circleDiameter:(double)arg2;
- (void)setClockTimerToken:(id)arg1;
- (void)setContentLoaded:(bool)arg1;
- (void)setCornerView:(id)arg1;
- (void)setCurrentColor:(unsigned long long)arg1;
- (void)setCurrentDial:(unsigned long long)arg1;
- (void)setCurrentStyle:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDialView:(id)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setOlympusView:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setSecond:(unsigned long long)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTrackSeconds:(bool)arg1;
- (void)setupViewsForCurrentState;
- (void)tearDownDialView;
- (bool)trackSeconds;
- (void)updateCircularMask;
- (void)updateHourComponentsWithDate:(id)arg1;
- (id)utilityBezelComplicationView;
- (void)utilityComplicationView:(id)arg1 didChangeTextWidth:(double)arg2;

@end
