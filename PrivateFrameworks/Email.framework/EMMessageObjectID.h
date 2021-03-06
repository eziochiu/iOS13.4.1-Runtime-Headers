/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMMessageObjectID : EMObjectID {
    EMMessageCollectionItemID * _collectionItemID;
    EMMailboxScope * _mailboxScope;
}

@property (nonatomic, readonly) EMMessageCollectionItemID *collectionItemID;
@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property (nonatomic, readonly) NSData *serializedRepresentation;

+ (id)log;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionItemID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)databaseID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionItemID:(id)arg1 mailboxScope:(id)arg2;
- (id)initWithCollectionItemID:(id)arg1 predicate:(id)arg2 mailboxTypeResolver:(id)arg3;
- (id)initWithMessageDatabaseID:(long long)arg1;
- (id)initWithMessageIDHeaderHash:(id)arg1 mailboxScope:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mailboxScope;
- (id)messageIDHeaderHash;
- (id)serializedRepresentation;

@end
