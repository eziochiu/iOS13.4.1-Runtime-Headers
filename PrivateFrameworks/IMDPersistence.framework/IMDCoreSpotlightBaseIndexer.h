/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDCoreSpotlightBaseIndexer : NSObject <IMDCoreSpotlightIndexer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)auxiliaryItemsForPrimaryAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3 isReindexing:(bool)arg4;
+ (bool)cancelIndexingForItem:(id)arg1;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(bool)arg3 metadataToUpdate:(id)arg4;
+ (id)indexTypeCustomKey;
+ (id)isBusinessChatCustomKey;
+ (id)isFromMeCustomKey;

@end