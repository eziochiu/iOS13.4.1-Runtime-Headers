/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDPersistedMessageQueryIterator : NSObject <EFCancelable> {
    EFCancelationToken * _cancelationToken;
    id /* block */  _handler;
    EMMailboxScope * _mailboxScope;
    EDMessagePersistence * _messagePersistence;
    EFQueue * _persistedMessageQueue;
    EFQuery * _query;
    long long  _remaining;
    NSMutableSet * _seenHashes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_processPersistedMessages:(id)arg1;
- (void)addPersistedMessage:(id)arg1;
- (void)addPersistedMessages:(id)arg1;
- (void)cancel;
- (void)flush;
- (id)initWithMessagePersistence:(id)arg1 query:(id)arg2 batchSize:(long long)arg3 firstBatchSize:(long long)arg4 limit:(long long)arg5 handler:(id /* block */)arg6;
- (bool)shouldCancel;

@end
