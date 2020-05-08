/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSingleRingView : UIView {
    HKActivitySummary * _activitySummary;
    UIImageView * _imageView;
    ARUIRingsView * _ringView;
    unsigned long long  _type;
}

@property (nonatomic, retain) HKActivitySummary *activitySummary;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)activitySummary;
- (id)initWithType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setActivitySummary:(id)arg1;
- (void)setActivitySummary:(id)arg1 animated:(bool)arg2;
- (unsigned long long)type;

@end