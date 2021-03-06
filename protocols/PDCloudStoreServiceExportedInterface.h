/* Generated by EzioChiu.
 */

@protocol PDCloudStoreServiceExportedInterface <PDXPCServiceExportedInterface>

@required

- (void)allItemsOfItemType:(void *)arg1 storeLocally:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*
- (void)checkTLKsMissingWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cloudStoreStatusForContainer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKAccountInfo *, bool, NSError *, void*
- (void)copyDataFromZoneName:(void *)arg1 toZoneName:(void *)arg2 inContainerName:(void *)arg3 passUniqueID:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteZone:(void *)arg1 containerName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*
- (void)itemOfItemType:(void *)arg1 recordName:(void *)arg2 qualityOfService:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: unsigned long long, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordObject *, NSError *, void*
- (void)noteAccountDeletedWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)noteCloudSyncPassesSwitchChangedWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)populateEvents:(void *)arg1 forAccountIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*
- (void)recreateZone:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeItemsWithRecordNames:(void *)arg1 itemType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeRecordWithRecordName:(void *)arg1 zoneName:(void *)arg2 containerName:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetApplePayManateeViewWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetContainerWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setupCloudDatabaseForContainerName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)simulateCloudStorePushForContainerIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSArray *, NSError *, void*
- (void)updateCloudStoreWithLocalItems:(void *)arg1 recordSpecificKeys:(void *)arg2 includeServerData:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)uploadTransaction:(void *)arg1 forPassWithUniqueIdentifier:(void *)arg2 includeServerData:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: PKPaymentTransaction *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKCloudRecordArray *, NSError *, void*

@end
