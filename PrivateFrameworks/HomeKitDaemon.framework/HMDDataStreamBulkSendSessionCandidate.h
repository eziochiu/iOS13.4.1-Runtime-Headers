/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamBulkSendSessionCandidate : NSObject <HMDDataStreamBulkSendSessionCandidate> {
    HMDDataStreamBulkSendProtocol * _bulkSendProtocol;
    NSMutableArray * _pendingReads;
    NSError * _receivedFailure;
    NSDictionary * _requestHeader;
}

@property (nonatomic, readonly) HMDDataStreamBulkSendProtocol *bulkSendProtocol;
@property (nonatomic, retain) NSMutableArray *pendingReads;
@property (nonatomic, retain) NSError *receivedFailure;
@property (nonatomic, readonly) NSDictionary *requestHeader;

- (void).cxx_destruct;
- (void)acceptBulkSendSessionOnQueue:(id)arg1 callback:(id /* block */)arg2;
- (id)bulkSendProtocol;
- (id)initWithProtocol:(id)arg1 requestHeader:(id)arg2;
- (id)pendingReads;
- (id)receivedFailure;
- (void)rejectBulkSendSessionWithStatus:(unsigned short)arg1;
- (id)requestHeader;
- (void)setPendingReads:(id)arg1;
- (void)setReceivedFailure:(id)arg1;

@end