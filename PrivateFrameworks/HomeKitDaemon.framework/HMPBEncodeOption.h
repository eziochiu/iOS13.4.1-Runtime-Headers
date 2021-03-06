/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMPBEncodeOption : PBCodable <NSCopying> {
    struct { 
        unsigned int isSPI : 1; 
        unsigned int isXPC : 1; 
    }  _has;
    bool  _isSPI;
    bool  _isXPC;
}

@property (nonatomic) bool hasIsSPI;
@property (nonatomic) bool hasIsXPC;
@property (nonatomic) bool isSPI;
@property (nonatomic) bool isXPC;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsSPI;
- (bool)hasIsXPC;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSPI;
- (bool)isXPC;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsSPI:(bool)arg1;
- (void)setHasIsXPC:(bool)arg1;
- (void)setIsSPI:(bool)arg1;
- (void)setIsXPC:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
