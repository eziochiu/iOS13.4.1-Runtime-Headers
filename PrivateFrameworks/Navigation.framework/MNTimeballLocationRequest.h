/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTimeballLocationRequest : NSObject {
    unsigned long long  _attemptCount;
    id /* block */  _completionBlock;
    double  _desiredAccuracy;
    unsigned long long  _maxAttempts;
    NSDate * _requestDate;
    double  _timeoutInterval;
}

@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) unsigned long long maxAttempts;
@property (nonatomic, retain) NSDate *requestDate;
@property (nonatomic) double timeoutInterval;

+ (id)requestWithAccuracy:(double)arg1 maxAttempts:(unsigned long long)arg2 timeoutInterval:(double)arg3 completionBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (unsigned long long)attemptCount;
- (id /* block */)completionBlock;
- (double)desiredAccuracy;
- (id)init;
- (unsigned long long)maxAttempts;
- (id)requestDate;
- (void)setAttemptCount:(unsigned long long)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setMaxAttempts:(unsigned long long)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;

@end
