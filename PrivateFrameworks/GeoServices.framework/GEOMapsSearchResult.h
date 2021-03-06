/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsSearchResult : PBCodable <NSCopying> {
    GEOAddress * _address;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int read_address : 1; 
        unsigned int read_placeActionDetails : 1; 
        unsigned int wrote_address : 1; 
        unsigned int wrote_muid : 1; 
        unsigned int wrote_placeActionDetails : 1; 
    }  _flags;
    unsigned long long  _muid;
    GEOPlaceActionDetails * _placeActionDetails;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOAddress *address;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasPlaceActionDetails;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) GEOPlaceActionDetails *placeActionDetails;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readAddress;
- (void)_readPlaceActionDetails;
- (id)address;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasMuid;
- (bool)hasPlaceActionDetails;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeActionDetails;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)writeTo:(id)arg1;

@end
