/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMachineDataOperation : ICAsyncOperation {
    id /* block */  _completionHandler;
    NSData * _data;
    long long  _protocolVersion;
    ICStoreRequestContext * _requestContext;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) long long protocolVersion;
@property (nonatomic, retain) ICStoreRequestContext *requestContext;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)data;
- (long long)protocolVersion;
- (id)requestContext;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setData:(id)arg1;
- (void)setProtocolVersion:(long long)arg1;
- (void)setRequestContext:(id)arg1;

@end