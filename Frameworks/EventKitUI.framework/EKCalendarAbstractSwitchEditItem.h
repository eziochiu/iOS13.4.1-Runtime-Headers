/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem {
    bool  _allowEventAlerts;
    NSMutableArray * _cells;
    UILabel * _descriptionLabel;
    UITableViewHeaderFooterView * _footerView;
    bool  _switchState;
    UISwitch * _toggleSwitch;
    bool  _underlyingCalendarState;
}

@property (nonatomic) bool allowEventAlerts;
@property (nonatomic, retain) NSMutableArray *cells;
@property (nonatomic) bool switchState;
@property (nonatomic, retain) UISwitch *toggleSwitch;
@property (nonatomic) bool underlyingCalendarState;

- (void).cxx_destruct;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)_switchStateChanged:(id)arg1;
- (bool)allowEventAlerts;
- (id)cell;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)cellText;
- (bool)cellWrapsLongText;
- (id)cells;
- (id)descriptionLabelText;
- (double)footerHeightForSection;
- (id)footerView;
- (id)footerViewForSection;
- (void)layoutForWidth:(double)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (bool)saveStateToCalendar:(id)arg1;
- (void)setAllowEventAlerts:(bool)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (void)setCells:(id)arg1;
- (void)setSwitchState:(bool)arg1;
- (void)setToggleSwitch:(id)arg1;
- (void)setUnderlyingCalendarState:(bool)arg1;
- (bool)switchState;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)toggleSwitch;
- (bool)underlyingCalendarState;

@end