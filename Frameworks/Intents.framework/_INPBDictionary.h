/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDictionary : PBCodable <NSCopying, NSSecureCoding, _INPBDictionary> {
    bool  __encodeLegacyGloryData;
    struct { }  _has;
    NSArray * _pairs;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *pairs;
@property (nonatomic, readonly) unsigned long long pairsCount;
@property (readonly) Class superclass;

+ (Class)pairType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addPair:(id)arg1;
- (void)clearPairs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pairAtIndex:(unsigned long long)arg1;
- (id)pairs;
- (unsigned long long)pairsCount;
- (bool)readFrom:(id)arg1;
- (void)setPairs:(id)arg1;
- (void)writeTo:(id)arg1;

@end