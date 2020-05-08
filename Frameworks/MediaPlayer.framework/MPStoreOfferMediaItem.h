/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSCopying, NSSecureCoding> {
    MPStoreOfferContentRating * _contentRating;
    id  _discNumber;
    NSNumber * _itemID;
    NSDictionary * _lookupCollectionPropertyValues;
    MPStoreOfferMediaItemArtworkDescriptor * _offerArtworkDescriptor;
    long long  _offerArtworkDescriptorOnceToken;
    id  _pid;
    long long  _preferredStoreOfferVariant;
    id  _title;
    id  _trackNumber;
}

+ (id)assetLookupKeyForItemMediaProperty:(id)arg1;
+ (bool)canFilterByProperty:(id)arg1;
+ (bool)canMergeStoreOfferWithLocalMediaItems:(id)arg1;
+ (bool)canRequestStoreOfferForLocalMediaItems:(id)arg1;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)defaultPropertyValues;
+ (bool)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)itemLookupKeyForMediaProperty:(id)arg1;
+ (id)localRepresentativeItemPropertyForMediaProperty:(id)arg1;
+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2;
+ (id)mediaItemsByRemovingRestrictedContentFromMediaItems:(id)arg1;
+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 mediaProperty:(id)arg3;
+ (id)offerArtworkDescriptorForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1;
+ (id)offerLookupKeyForItemMediaProperty:(id)arg1;
+ (id)preferredAssetDictionaryInOfferDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_lookupOfferDictionaries;
- (bool)_offeredItemAlreadyExists;
- (unsigned long long)albumTrackNumber;
- (id)buyOfferForVariant:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)discNumber;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 itemID:(id)arg3;
- (bool)isDownloadable;
- (bool)isEqual:(id)arg1;
- (id)mediaLibrary;
- (id)offerArtworkDescriptor;
- (unsigned long long)persistentID;
- (long long)preferredStoreOfferVariant;
- (id)screenshotArtworkCatalog;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (id)title;
- (id)valueForProperty:(id)arg1;

@end