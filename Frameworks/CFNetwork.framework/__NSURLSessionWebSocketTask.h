/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSURLSessionWebSocketTask : __NSCFLocalSessionTask {
    long long  _closeCode;
    NSData * _closeReason;
    NSMutableArray * _delegateWork;
    NSMutableArray * _highPriorityPendingWork;
    long long  _maximumMessageSize;
    NSMutableArray * _pendingReceiveWork;
    NSMutableArray * _pendingSendWork;
    int  _pingSeed;
    NSString * _protocolPicked;
    bool  _readInProgress;
    NSError * _webSocketError;
    bool  _webSocketHandshakeCompleted;
}

@property (readonly) long long closeCode;
@property (readonly, copy) NSData *closeReason;
@property (retain) NSMutableArray *delegateWork;
@property (retain) NSMutableArray *highPriorityPendingWork;
@property long long maximumMessageSize;
@property (retain) NSMutableArray *pendingReceiveWork;
@property (retain) NSMutableArray *pendingSendWork;
@property int pingSeed;
@property (retain) NSString *protocolPicked;
@property bool readInProgress;
@property (retain) NSError *webSocketError;
@property bool webSocketHandshakeCompleted;

- (void).cxx_destruct;
- (void)_onqueue_cancel;
- (void)_onqueue_cancelWebSocketTaskWithError:(long long)arg1;
- (void)_onqueue_cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_onqueue_enableWebSocketFraming:(id)arg1;
- (void)_onqueue_handshakeFailureWithReason:(unsigned long long)arg1;
- (void)_onqueue_ioTick;
- (void)_onqueue_pingWithPongHandler:(id /* block */)arg1;
- (void)_onqueue_receiveMessageWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_resume;
- (void)_onqueue_sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_onqueue_validateWebSocketHandshake;
- (void)cancel;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (long long)closeCode;
- (id)closeReason;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)dealloc;
- (id)delegateWork;
- (id)highPriorityPendingWork;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (bool)isKindOfClass:(Class)arg1;
- (long long)maximumMessageSize;
- (id)pendingReceiveWork;
- (id)pendingSendWork;
- (int)pingSeed;
- (id)protocolPicked;
- (bool)readInProgress;
- (void)receiveMessageWithCompletionHandler:(id /* block */)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendPingWithPongReceiveHandler:(id /* block */)arg1;
- (void)setDelegateWork:(id)arg1;
- (void)setHighPriorityPendingWork:(id)arg1;
- (void)setMaximumMessageSize:(long long)arg1;
- (void)setPendingReceiveWork:(id)arg1;
- (void)setPendingSendWork:(id)arg1;
- (void)setPingSeed:(int)arg1;
- (void)setProtocolPicked:(id)arg1;
- (void)setReadInProgress:(bool)arg1;
- (void)setWebSocketError:(id)arg1;
- (void)setWebSocketHandshakeCompleted:(bool)arg1;
- (id)webSocketError;
- (bool)webSocketHandshakeCompleted;

@end
