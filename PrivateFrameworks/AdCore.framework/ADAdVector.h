/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADAdVector : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _vectors;
    NSString * _version;
}

@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, readonly) double*vectors;
@property (nonatomic, readonly) unsigned long long vectorsCount;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (void)addVector:(double)arg1;
- (void)clearVectors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVectors:(double*)arg1 count:(unsigned long long)arg2;
- (void)setVersion:(id)arg1;
- (double)vectorAtIndex:(unsigned long long)arg1;
- (double*)vectors;
- (unsigned long long)vectorsCount;
- (id)version;
- (void)writeTo:(id)arg1;

@end
