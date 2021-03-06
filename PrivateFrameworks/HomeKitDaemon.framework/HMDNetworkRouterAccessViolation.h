/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNetworkRouterAccessViolation : NSObject <HMDTLVProtocol, NSCopying> {
    HMDTLVUnsignedNumberValue * _clientIdentifier;
    HMDTLVUnsignedNumberValue * _lastResetTimestamp;
    HMDTLVUnsignedNumberValue * _lastViolationTimestamp;
}

@property (nonatomic, retain) HMDTLVUnsignedNumberValue *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDTLVUnsignedNumberValue *lastResetTimestamp;
@property (nonatomic, retain) HMDTLVUnsignedNumberValue *lastViolationTimestamp;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1 lastViolationTimestamp:(id)arg2 lastResetTimestamp:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lastResetTimestamp;
- (id)lastViolationTimestamp;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setLastResetTimestamp:(id)arg1;
- (void)setLastViolationTimestamp:(id)arg1;

@end
