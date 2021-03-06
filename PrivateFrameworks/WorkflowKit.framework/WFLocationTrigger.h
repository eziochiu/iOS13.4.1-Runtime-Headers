/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLocationTrigger : WFTrigger {
    NSDate * _endTime;
    CLCircularRegion * _region;
    NSDate * _startTime;
}

@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, copy) CLCircularRegion *region;
@property (nonatomic, retain) NSDate *startTime;

+ (bool)supportsSecureCoding;
+ (id)timestampDateFormatter;

- (void).cxx_destruct;
- (void)configureWithConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (bool)hasValidConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)region;
- (void)setEndTime:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
