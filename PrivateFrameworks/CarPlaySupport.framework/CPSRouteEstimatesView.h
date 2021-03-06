/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSRouteEstimatesView : UIView {
    CPSLabeledValueView * _arrivalTimeView;
    CPSLabeledValueView * _distanceRemainingView;
    unsigned long long  _timeRemainingColor;
    CPSLabeledValueView * _timeRemainingView;
    CPSTravelEstimatesStringFormatter * _travelEstimatesStringFormatter;
    unsigned long long  _tripEstimateStyle;
}

@property (nonatomic, readonly) CPSLabeledValueView *arrivalTimeView;
@property (nonatomic, copy) NSTimeZone *arrivalTimeZone;
@property (nonatomic, readonly) CPSLabeledValueView *distanceRemainingView;
@property (nonatomic) unsigned long long timeRemainingColor;
@property (nonatomic, readonly) CPSLabeledValueView *timeRemainingView;
@property (nonatomic, readonly) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter;
@property (nonatomic) unsigned long long tripEstimateStyle;

- (void).cxx_destruct;
- (id)_defaultColorForStyle:(unsigned long long)arg1;
- (id)_greenColorForStyle:(unsigned long long)arg1;
- (id)_orangeColorForStyle:(unsigned long long)arg1;
- (id)_redColorForStyle:(unsigned long long)arg1;
- (id)_timeRemainingColorForColor:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (void)_updateTextColors;
- (id)arrivalTimeView;
- (id)arrivalTimeZone;
- (id)distanceRemainingView;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)setArrivalTimeZone:(id)arg1;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setTimeRemainingColor:(unsigned long long)arg1;
- (void)setTripEstimateStyle:(unsigned long long)arg1;
- (unsigned long long)timeRemainingColor;
- (id)timeRemainingView;
- (id)travelEstimatesStringFormatter;
- (unsigned long long)tripEstimateStyle;

@end
