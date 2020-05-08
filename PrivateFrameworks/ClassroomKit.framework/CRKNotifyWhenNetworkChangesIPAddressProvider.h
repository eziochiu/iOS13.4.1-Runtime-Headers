/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKNotifyWhenNetworkChangesIPAddressProvider : NSObject <CRKIPAddressProviding> {
    NSString * _IPAddress;
    <CRKIPAddressProviding> * mBaseProvider;
    int  mNetworkChangeNotificationToken;
    NSObject<OS_dispatch_queue> * mQueue;
}

@property (nonatomic, copy) NSString *IPAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)IPAddress;
- (void)dealloc;
- (id)initWithIPAddressProvider:(id)arg1;
- (void)networkDidChange;
- (void)networkDidChangeDebounced;
- (void)setIPAddress:(id)arg1;
- (void)subscribeToNetworkChangeNotifications;
- (void)unsubscribeFromNetworkChangeNotifications;

@end