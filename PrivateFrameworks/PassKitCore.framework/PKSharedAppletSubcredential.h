/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSharedAppletSubcredential : NSObject <NSCopying, NSSecureCoding> {
    bool  _canBeRevoked;
    PKAppletSubcredentialEntitlement * _entitlement;
    NSString * _identifier;
    PKSharedAppletSubcredentialMetadata * _metadata;
    NSString * _name;
    long long  _state;
}

@property (nonatomic) bool canBeRevoked;
@property (nonatomic, retain) PKAppletSubcredentialEntitlement *entitlement;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) PKSharedAppletSubcredentialMetadata *metadata;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canBeRevoked;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlement;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sharingInvitationReceipt:(id)arg2;
- (id)initWithSharedCredentialManifestItem:(id)arg1 credential:(id)arg2;
- (id)metadata;
- (id)name;
- (void)setCanBeRevoked:(bool)arg1;
- (void)setEntitlement:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setName:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)updateWithSharedCredentialManifestItem:(id)arg1 credential:(id)arg2;

@end
