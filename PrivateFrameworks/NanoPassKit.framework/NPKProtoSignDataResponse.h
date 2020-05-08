/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSignDataResponse : PBCodable <NSCopying> {
    NSData * _certsBytes;
    struct { 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
    NSData * _signatureInfoBytes;
    NSData * _signedData;
}

@property (nonatomic, retain) NSData *certsBytes;
@property (nonatomic, readonly) bool hasCertsBytes;
@property (nonatomic) bool hasPending;
@property (nonatomic, readonly) bool hasSignatureInfoBytes;
@property (nonatomic, readonly) bool hasSignedData;
@property (nonatomic) bool pending;
@property (nonatomic, retain) NSData *signatureInfoBytes;
@property (nonatomic, retain) NSData *signedData;

- (void).cxx_destruct;
- (id)certsBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCertsBytes;
- (bool)hasPending;
- (bool)hasSignatureInfoBytes;
- (bool)hasSignedData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setCertsBytes:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setSignatureInfoBytes:(id)arg1;
- (void)setSignedData:(id)arg1;
- (id)signatureInfoBytes;
- (id)signedData;
- (void)writeTo:(id)arg1;

@end