/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceGlobalCommonResult : PBCodable <NSCopying> {
    NSMutableArray * _placeContextMetadatas;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *placeContextMetadatas;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)placeContextMetadataType;

- (void).cxx_destruct;
- (void)addPlaceContextMetadata:(id)arg1;
- (void)clearPlaceContextMetadatas;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeContextMetadataAtIndex:(unsigned long long)arg1;
- (id)placeContextMetadatas;
- (unsigned long long)placeContextMetadatasCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPlaceContextMetadatas:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
