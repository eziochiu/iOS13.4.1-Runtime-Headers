/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDXPCMessageFilter : HMFMessageFilter {
    HMDXPCClientConnection * _connection;
}

@property (readonly) HMDXPCClientConnection *connection;

+ (bool)canInitWithMessage:(id)arg1;
+ (id)policyClasses;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithMessage:(id)arg1;

@end
