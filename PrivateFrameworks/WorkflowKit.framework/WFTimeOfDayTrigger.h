/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding> {
    NSArray * _daysOfWeek;
    unsigned long long  _event;
    NSDateComponents * _time;
    unsigned long long  _timeOffset;
}

@property (nonatomic, copy) NSArray *daysOfWeek;
@property (nonatomic) unsigned long long event;
@property (nonatomic, retain) NSDateComponents *time;
@property (nonatomic) unsigned long long timeOffset;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)dateFormatter;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (id)localizedRecurrenceDescriptionForDaysOfWeek:(id)arg1;
+ (id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysOfWeek;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)event;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (void)setDaysOfWeek:(id)arg1;
- (void)setEvent:(unsigned long long)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeOffset:(unsigned long long)arg1;
- (id)time;
- (unsigned long long)timeOffset;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

+ (id)triggerTypeIcon;

@end
