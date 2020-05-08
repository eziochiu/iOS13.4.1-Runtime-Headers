/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

@interface IAMFigaroEvent : NSObject <IAMEventProtocol> {
    NSDictionary * _payload;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSDictionary *payload;
@property (nonatomic, readonly, copy) NSString *source;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic, readonly, copy) id value;

- (void).cxx_destruct;
- (id)decomposeKey:(id)arg1;
- (id)initWithFigaroEventProperties:(id)arg1;
- (bool)matchesWithKey:(id)arg1;
- (id)name;
- (id)payload;
- (id)serializeFigaroEventProperties:(id)arg1 withPrefix:(id)arg2;
- (void)setPayload:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end