/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol> {
    <MSSearchDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSSearchDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 delegate:(id)arg4;
+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(bool)arg3 onServer:(bool)arg4 delegate:(id)arg5;
+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(bool)arg3 onServer:(bool)arg4 onlyInboxes:(bool)arg5 delegate:(id)arg6;
+ (void)setUnitTestingResultsArray:(id)arg1;

- (void).cxx_destruct;
- (void)_delegateDidFindResults:(id)arg1;
- (void)_delegateDidFinishWithError:(id)arg1;
- (void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3;
- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3;
- (void)_generateUnitTestResponsesForResultArray:(id)arg1;
- (id)_initWithDelegate:(id)arg1;
- (bool)_unitTestsAreEnabled;
- (void)cancel;
- (id)delegate;
- (void)foundResults:(id)arg1 error:(id)arg2;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)newConnectionForInterface:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
