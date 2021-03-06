/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTemporalEventTrigger : PBCodable <NSCopying, NSSecureCoding, _INPBTemporalEventTrigger> {
    bool  __encodeLegacyGloryData;
    _INPBDateTimeRangeValue * _dateTime;
    struct { }  _has;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (nonatomic, retain) _INPBDateTimeRangeValue *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateTime;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDateTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateTime:(id)arg1;
- (void)writeTo:(id)arg1;

@end
