/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMusicRecommendation : NSObject <NSCopying> {
    MPArtworkCatalog * _artworkCatalog;
    NSString * _identifier;
    NSMapTable * _itemSectionMap;
    NSOrderedSet * _items;
    NSDate * _lastModifiedDate;
    bool  _selected;
    NSObject<OS_dispatch_queue> * _serializerQueue;
    NSString * _subtitle;
    unsigned long long  _type;
}

@property (nonatomic, readonly) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isHeavyRotation;
@property (nonatomic, readonly) NSOrderedSet *items;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) NSArray *storeRecommendationModelObjects;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long type;

+ (void)_fillArtworkMutableArray:(id)arg1 toCount:(unsigned long long)arg2;
+ (id)_missingArtImage;

- (void).cxx_destruct;
- (id)_artworkCatalogsForLibraryRecommendationAlbumsWithCount:(unsigned long long)arg1;
- (id)_artworkCatalogsForLibraryRecommendationPlaylistsWithCount:(unsigned long long)arg1;
- (void)_commonInit;
- (id)_stringForDayOfWeek:(long long)arg1;
- (id)_tiledArtworkRequestForPlaylists:(id)arg1 albums:(id)arg2;
- (id)artworkCatalog;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initWithItems:(id)arg1 itemSectionMap:(id)arg2;
- (id)initWithLibraryRecommendation;
- (id)initWithPlaylist:(id)arg1 section:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isHeavyRotation;
- (bool)isSelected;
- (id)items;
- (id)lastModifiedDate;
- (id)sectionForItemWithIdentifiers:(id)arg1;
- (void)setSelected:(bool)arg1;
- (id)storeRecommendationModelObjects;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;

@end