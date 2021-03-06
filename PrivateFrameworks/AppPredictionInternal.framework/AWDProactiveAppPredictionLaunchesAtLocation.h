/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface AWDProactiveAppPredictionLaunchesAtLocation : PBCodable <NSCopying> {
    NSString * _bundleId;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    bool  _isTourist;
    float  _latitude;
    float  _longitude;
    unsigned int  _timeBucket;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isTourist;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (nonatomic) unsigned int timeBucket;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isTourist;
- (float)latitude;
- (float)longitude;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsTourist:(bool)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLongitude:(float)arg1;
- (void)setTimeBucket:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)timeBucket;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
