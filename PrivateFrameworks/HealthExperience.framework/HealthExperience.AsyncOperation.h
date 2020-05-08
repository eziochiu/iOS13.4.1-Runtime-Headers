/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
 */

@interface HealthExperience.AsyncOperation : NSOperation {
    void stateLock;
    void underlyingState;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) bool executing;
@property (nonatomic, readonly) bool finished;

- (void).cxx_destruct;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)start;

@end