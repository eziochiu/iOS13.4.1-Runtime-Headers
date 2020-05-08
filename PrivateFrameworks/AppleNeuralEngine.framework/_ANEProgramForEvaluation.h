/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

@interface _ANEProgramForEvaluation : NSObject {
    _ANEDeviceController * _controller;
    long long  _currentAsyncRequestsInFlight;
    unsigned long long  _intermediateBufferHandle;
    unsigned long long  _programHandle;
    NSObject<OS_dispatch_queue> * _q;
    BOOL  _queueDepth;
    NSObject<OS_dispatch_semaphore> * _requestsInFlight;
}

@property (nonatomic, readonly) _ANEDeviceController *controller;
@property (nonatomic) long long currentAsyncRequestsInFlight;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *q;
@property (nonatomic, readonly) BOOL queueDepth;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *requestsInFlight;

+ (id)new;
+ (id)programWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(BOOL)arg3;

- (void).cxx_destruct;
- (id)controller;
- (long long)currentAsyncRequestsInFlight;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(BOOL)arg3;
- (unsigned long long)intermediateBufferHandle;
- (bool)processRequest:(id)arg1 qos:(unsigned int)arg2 qIndex:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)programHandle;
- (id)q;
- (BOOL)queueDepth;
- (id)requestsInFlight;
- (void)setCurrentAsyncRequestsInFlight:(long long)arg1;
- (void)setIntermediateBufferHandle:(unsigned long long)arg1;
- (void)setProgramHandle:(unsigned long long)arg1;

@end