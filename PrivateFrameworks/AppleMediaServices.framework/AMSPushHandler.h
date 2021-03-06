/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPushHandler : NSObject {
    <AMSBagProtocol> * _bag;
    <AMSPushHandlerContract> * _bagContract;
    AMSPushConfiguration * _configuration;
}

@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) <AMSPushHandlerContract> *bagContract;
@property (nonatomic, readonly) AMSPushConfiguration *configuration;

- (void).cxx_destruct;
- (id)_enabledParsables;
- (id)bag;
- (id)bagContract;
- (id)configuration;
- (void)handleNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1 bag:(id)arg2;
- (id)initWithConfiguration:(id)arg1 bagContract:(id)arg2;
- (bool)shouldHandleNotification:(id)arg1;

@end
