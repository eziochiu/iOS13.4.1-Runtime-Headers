/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewDeviceOutreach.framework/NewDeviceOutreach
 */

@interface NDOManager : NSObject

- (id)agentConnection;
- (id)appSupportDictionary;
- (bool)checkIsAvailableInStore:(id)arg1;
- (void)getWarrantyUsingPolicy:(unsigned long long)arg1 withReply:(id /* block */)arg2;
- (void)scheduleOutreachWithReply:(id /* block */)arg1;

@end