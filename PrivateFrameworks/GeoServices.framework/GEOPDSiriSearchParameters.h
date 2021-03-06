/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying> {
    GEOAddress * _address;
    NSMutableArray * _businessCategoryFilters;
    struct { 
        unsigned int has_maxResultCount : 1; 
        unsigned int has_sortOrder : 1; 
        unsigned int has_isStrictMapRegion : 1; 
        unsigned int has_structuredSearch : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_address : 1; 
        unsigned int read_businessCategoryFilters : 1; 
        unsigned int read_indexFilter : 1; 
        unsigned int read_recentRouteInfo : 1; 
        unsigned int read_searchString : 1; 
        unsigned int read_searchSubstringDescriptors : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_address : 1; 
        unsigned int wrote_businessCategoryFilters : 1; 
        unsigned int wrote_indexFilter : 1; 
        unsigned int wrote_recentRouteInfo : 1; 
        unsigned int wrote_searchString : 1; 
        unsigned int wrote_searchSubstringDescriptors : 1; 
        unsigned int wrote_viewportInfo : 1; 
        unsigned int wrote_maxResultCount : 1; 
        unsigned int wrote_sortOrder : 1; 
        unsigned int wrote_isStrictMapRegion : 1; 
        unsigned int wrote_structuredSearch : 1; 
    }  _flags;
    GEOPDIndexQueryNode * _indexFilter;
    bool  _isStrictMapRegion;
    unsigned int  _maxResultCount;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRecentRouteInfo * _recentRouteInfo;
    NSString * _searchString;
    NSMutableArray * _searchSubstringDescriptors;
    int  _sortOrder;
    bool  _structuredSearch;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, retain) GEOAddress *address;
@property (nonatomic, retain) NSMutableArray *businessCategoryFilters;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic, readonly) bool hasIndexFilter;
@property (nonatomic) bool hasIsStrictMapRegion;
@property (nonatomic) bool hasMaxResultCount;
@property (nonatomic, readonly) bool hasRecentRouteInfo;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic) bool hasSortOrder;
@property (nonatomic) bool hasStructuredSearch;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic, retain) GEOPDIndexQueryNode *indexFilter;
@property (nonatomic) bool isStrictMapRegion;
@property (nonatomic) unsigned int maxResultCount;
@property (nonatomic, retain) GEOPDRecentRouteInfo *recentRouteInfo;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) NSMutableArray *searchSubstringDescriptors;
@property (nonatomic) int sortOrder;
@property (nonatomic) bool structuredSearch;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (Class)businessCategoryFilterType;
+ (bool)isValid:(id)arg1;
+ (Class)searchSubstringDescriptorType;

- (void).cxx_destruct;
- (int)StringAsSortOrder:(id)arg1;
- (void)_addNoFlagsBusinessCategoryFilter:(id)arg1;
- (void)_addNoFlagsSearchSubstringDescriptor:(id)arg1;
- (void)_readAddress;
- (void)_readBusinessCategoryFilters;
- (void)_readIndexFilter;
- (void)_readRecentRouteInfo;
- (void)_readSearchString;
- (void)_readSearchSubstringDescriptors;
- (void)_readViewportInfo;
- (void)addBusinessCategoryFilter:(id)arg1;
- (void)addSearchSubstringDescriptor:(id)arg1;
- (id)address;
- (id)businessCategoryFilterAtIndex:(unsigned long long)arg1;
- (id)businessCategoryFilters;
- (unsigned long long)businessCategoryFiltersCount;
- (void)clearBusinessCategoryFilters;
- (void)clearSearchSubstringDescriptors;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasIndexFilter;
- (bool)hasIsStrictMapRegion;
- (bool)hasMaxResultCount;
- (bool)hasRecentRouteInfo;
- (bool)hasSearchString;
- (bool)hasSortOrder;
- (bool)hasStructuredSearch;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (id)indexFilter;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStrictMapRegion;
- (unsigned int)maxResultCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)recentRouteInfo;
- (id)searchString;
- (id)searchSubstringDescriptorAtIndex:(unsigned long long)arg1;
- (id)searchSubstringDescriptors;
- (unsigned long long)searchSubstringDescriptorsCount;
- (void)setAddress:(id)arg1;
- (void)setBusinessCategoryFilters:(id)arg1;
- (void)setHasIsStrictMapRegion:(bool)arg1;
- (void)setHasMaxResultCount:(bool)arg1;
- (void)setHasSortOrder:(bool)arg1;
- (void)setHasStructuredSearch:(bool)arg1;
- (void)setIndexFilter:(id)arg1;
- (void)setIsStrictMapRegion:(bool)arg1;
- (void)setMaxResultCount:(unsigned int)arg1;
- (void)setRecentRouteInfo:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchSubstringDescriptors:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setStructuredSearch:(bool)arg1;
- (void)setViewportInfo:(id)arg1;
- (int)sortOrder;
- (id)sortOrderAsString:(int)arg1;
- (bool)structuredSearch;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
