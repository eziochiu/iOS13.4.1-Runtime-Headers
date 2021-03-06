/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
 */

@interface OspreyGRPCChannel : NSObject <NSURLSessionTaskDelegate> {
    NSURL * _baseURL;
    id /* block */  _connectionMetricsHandler;
    bool  _forceHTTPv2;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableData * _receivedData;
    NSURLSession * _session;
    NSMapTable * _taskToContext;
    bool  _useCompression;
}

@property (nonatomic, copy) id /* block */ connectionMetricsHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceHTTPv2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useCompression;

+ (void)initialize;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2;
- (bool)_entitledForMPTCP;
- (id)_lengthPrefixedData:(id)arg1 error:(id*)arg2;
- (void)_readMoreFromStreamTask:(id)arg1;
- (id /* block */)connectionMetricsHandler;
- (bool)forceHTTPv2;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (id)initWithURL:(id)arg1 configuration:(id)arg2 queue:(id)arg3;
- (void)performBidirectionalStreamingRequest:(id)arg1 context:(id)arg2;
- (void)performRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)performStreamingRequest:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)preconnect;
- (void)setConnectionMetricsHandler:(id /* block */)arg1;
- (void)setForceHTTPv2:(bool)arg1;
- (void)setUseCompression:(bool)arg1;
- (bool)useCompression;

@end
