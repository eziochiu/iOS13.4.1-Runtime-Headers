/* Generated by EzioChiu.
 */

@protocol PXPPTDelegate

@required

- (void)failedTest:(NSString *)arg1 withFailureFormat:(NSString *)arg2;
- (void)finishedSubTest:(NSString *)arg1 forTest:(NSString *)arg2;
- (void)finishedTest:(NSString *)arg1;
- (void)startedSubTest:(NSString *)arg1 forTest:(NSString *)arg2;
- (void)startedTest:(NSString *)arg1;

@end
