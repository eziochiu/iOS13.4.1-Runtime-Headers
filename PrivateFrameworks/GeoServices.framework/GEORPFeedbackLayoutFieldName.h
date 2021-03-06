/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackLayoutFieldName : PBCodable <NSCopying> {
    int  _addressFieldName;
    struct { 
        unsigned int has_addressFieldName : 1; 
        unsigned int has_groundviewFieldName : 1; 
        unsigned int has_otherFieldName : 1; 
        unsigned int has_poiFieldName : 1; 
        unsigned int has_workflowFieldName : 1; 
    }  _flags;
    int  _groundviewFieldName;
    int  _otherFieldName;
    int  _poiFieldName;
    PBUnknownFields * _unknownFields;
    int  _workflowFieldName;
}

@property (nonatomic) int addressFieldName;
@property (nonatomic) int groundviewFieldName;
@property (nonatomic) bool hasAddressFieldName;
@property (nonatomic) bool hasGroundviewFieldName;
@property (nonatomic) bool hasOtherFieldName;
@property (nonatomic) bool hasPoiFieldName;
@property (nonatomic) bool hasWorkflowFieldName;
@property (nonatomic) int otherFieldName;
@property (nonatomic) int poiFieldName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int workflowFieldName;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAddressFieldName:(id)arg1;
- (int)StringAsGroundviewFieldName:(id)arg1;
- (int)StringAsOtherFieldName:(id)arg1;
- (int)StringAsPoiFieldName:(id)arg1;
- (int)StringAsWorkflowFieldName:(id)arg1;
- (int)addressFieldName;
- (id)addressFieldNameAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)groundviewFieldName;
- (id)groundviewFieldNameAsString:(int)arg1;
- (bool)hasAddressFieldName;
- (bool)hasGroundviewFieldName;
- (bool)hasOtherFieldName;
- (bool)hasPoiFieldName;
- (bool)hasWorkflowFieldName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)otherFieldName;
- (id)otherFieldNameAsString:(int)arg1;
- (int)poiFieldName;
- (id)poiFieldNameAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressFieldName:(int)arg1;
- (void)setGroundviewFieldName:(int)arg1;
- (void)setHasAddressFieldName:(bool)arg1;
- (void)setHasGroundviewFieldName:(bool)arg1;
- (void)setHasOtherFieldName:(bool)arg1;
- (void)setHasPoiFieldName:(bool)arg1;
- (void)setHasWorkflowFieldName:(bool)arg1;
- (void)setOtherFieldName:(int)arg1;
- (void)setPoiFieldName:(int)arg1;
- (void)setWorkflowFieldName:(int)arg1;
- (id)unknownFields;
- (int)workflowFieldName;
- (id)workflowFieldNameAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
