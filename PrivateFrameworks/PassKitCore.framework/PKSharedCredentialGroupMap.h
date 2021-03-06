/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSharedCredentialGroupMap : NSObject {
    PKAppletSubcredential * _credential;
    long long  _groupCount;
    NSMutableDictionary * _groupIdentifierToGroupNumber;
    NSMutableDictionary * _groupNumberToInvitationReceipts;
    NSMutableDictionary * _groupNumberToSharedCredentials;
    NSMutableArray * _notGroupedInvitationReceipts;
    NSMutableArray * _notGroupedSharedCredentials;
    NSMutableDictionary * _recipientIdentifierToGroupNumber;
    NSMutableDictionary * _sharingSessionToGroupNumber;
}

- (void).cxx_destruct;
- (void)assignGroupNumber:(id)arg1 toGroupIdentifier:(id)arg2 sharingSessionIdentifier:(id)arg3 recipientIdentifier:(id)arg4;
- (id)groupNumberWithGroupIdentifier:(id)arg1 sharingSessionIdentifier:(id)arg2 recipientIdentifier:(id)arg3;
- (id)groups;
- (id)initWithCredential:(id)arg1;
- (void)insertInvitationReceipt:(id)arg1;
- (void)insertInvitationReceipt:(id)arg1 intoGroup:(id)arg2;
- (void)insertSharedCredential:(id)arg1;
- (void)insertSharedCredential:(id)arg1 intoGroup:(id)arg2;

@end
