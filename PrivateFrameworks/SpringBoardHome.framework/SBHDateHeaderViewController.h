/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHDateHeaderViewController : UIViewController <SBHLegibility> {
    SBUILegibilityLabel * _dateLabel;
    <SBFDateProviding> * _dateProvider;
    _UILegibilitySettings * _legibilitySettings;
    UIView * _timeContainer;
    SBUILegibilityLabel * _timeLabel;
    NSLayoutConstraint * _timeLeadingConstraint;
    id  _timerToken;
    unsigned long long  _updateDisabledCount;
}

@property (nonatomic, readonly) SBUILegibilityLabel *dateLabel;
@property (nonatomic, retain) <SBFDateProviding> *dateProvider;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIView *timeContainer;
@property (nonatomic, readonly) SBUILegibilityLabel *timeLabel;
@property (nonatomic, readonly) NSLayoutConstraint *timeLeadingConstraint;

+ (double)_topMarginFromTimeFont;
+ (id)dateFont;
+ (struct { double x1; double x2; double x3; double x4; })dateFontMetrics;
+ (id)timeFont;
+ (struct { double x1; double x2; double x3; double x4; })timeFontMetrics;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cachedGlyphInsetsTimeFontForString:(id)arg1;
- (void)_handleTimeZoneChange;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_timeLabelInsetsForTimeString:(id)arg1;
- (void)_updateFormat;
- (void)_updateLabels;
- (void)_updateTimeLeadingConstraint;
- (id)dateLabel;
- (id)dateProvider;
- (void)dealloc;
- (void)disableUpdates;
- (void)enableUpdates;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)legibilitySettings;
- (void)loadView;
- (void)setDateProvider:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (id)timeContainer;
- (id)timeLabel;
- (id)timeLeadingConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
