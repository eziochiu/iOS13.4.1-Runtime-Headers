/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject {
    HMFNetAddress * _addressEnd;
    HMFNetAddress * _addressStart;
}

@property (nonatomic, readonly) HMFNetAddress *addressEnd;
@property (nonatomic, readonly) HMFNetAddress *addressStart;

- (void).cxx_destruct;
- (id)addressEnd;
- (id)addressStart;
- (id)attributeDescriptions;
- (id)initWithAddressStart:(id)arg1 addressEnd:(id)arg2;
- (id)prettyJSONDictionary;

@end
