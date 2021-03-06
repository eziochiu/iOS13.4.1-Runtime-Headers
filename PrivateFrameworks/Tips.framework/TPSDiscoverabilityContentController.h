/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSDiscoverabilityContentController : NSObject {
    <TPSDiscoverabilityContentControllerDelegate> * _delegate;
    NSMutableDictionary * _identifierToURLSessionItemMap;
    NSObject<OS_dispatch_queue> * _sessionQueue;
}

@property (nonatomic) <TPSDiscoverabilityContentControllerDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *identifierToURLSessionItemMap;

- (void).cxx_destruct;
- (void)_cacheAssetsForTipDictionary:(id)arg1;
- (void)contentWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)fetchDeliveryInfo;
- (id)identifierToURLSessionItemMap;
- (id)init;
- (id)sessionItemForIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifierToURLSessionItemMap:(id)arg1;
- (void)updateIdentifier:(id)arg1 sessionItem:(id)arg2;

@end
