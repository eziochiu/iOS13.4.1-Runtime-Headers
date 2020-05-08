/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPM2DatabaseRemoteRecordCount : PBCodable <NSCopying> {
    struct { 
        unsigned int schemaVersion : 1; 
    }  _has;
    unsigned int  _schemaVersion;
    NSString * _tableName;
}

@property (nonatomic) bool hasSchemaVersion;
@property (nonatomic, readonly) bool hasTableName;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic, retain) NSString *tableName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSchemaVersion;
- (bool)hasTableName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)schemaVersion;
- (void)setHasSchemaVersion:(bool)arg1;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)setTableName:(id)arg1;
- (id)tableName;
- (void)writeTo:(id)arg1;

@end