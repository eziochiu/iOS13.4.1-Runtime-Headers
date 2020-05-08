/* Generated by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCHCEStateChangeEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int state : 1; 
    }  _has;
    unsigned int  _state;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)state;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end