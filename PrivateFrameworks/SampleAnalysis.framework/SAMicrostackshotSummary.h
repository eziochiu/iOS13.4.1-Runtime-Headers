/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAMicrostackshotSummary : NSObject {
    NSMutableDictionary * _microstackshotStateCounts;
    unsigned long long  _onACCount;
    unsigned long long  _onBatteryCount;
    unsigned long long  _userActiveCount;
    unsigned long long  _userIdleCount;
}

@property (readonly) NSMutableDictionary *microstackshotStateCounts;
@property unsigned long long onACCount;
@property unsigned long long onBatteryCount;
@property unsigned long long userActiveCount;
@property unsigned long long userIdleCount;

- (void).cxx_destruct;
- (id)init;
- (id)microstackshotStateCounts;
- (unsigned long long)onACCount;
- (unsigned long long)onBatteryCount;
- (void)setOnACCount:(unsigned long long)arg1;
- (void)setOnBatteryCount:(unsigned long long)arg1;
- (void)setUserActiveCount:(unsigned long long)arg1;
- (void)setUserIdleCount:(unsigned long long)arg1;
- (unsigned long long)userActiveCount;
- (unsigned long long)userIdleCount;

@end