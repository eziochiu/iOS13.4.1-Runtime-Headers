/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMessageUsageMetric : PBCodable <NSCopying> {
    struct { 
        unsigned int has_sessionId : 1; 
        unsigned int has_messageSize : 1; 
        unsigned int has_messageCount : 1; 
        unsigned int has_metricState : 1; 
        unsigned int has_metricType : 1; 
        unsigned int has_retryCount : 1; 
    }  _flags;
    unsigned int  _messageCount;
    unsigned long long  _messageSize;
    int  _metricState;
    int  _metricType;
    unsigned int  _retryCount;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
}

@property (nonatomic) bool hasMessageCount;
@property (nonatomic) bool hasMessageSize;
@property (nonatomic) bool hasMetricState;
@property (nonatomic) bool hasMetricType;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic) bool hasSessionId;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) int metricState;
@property (nonatomic) int metricType;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;

+ (bool)isValid:(id)arg1;

- (int)StringAsMetricState:(id)arg1;
- (int)StringAsMetricType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageCount;
- (bool)hasMessageSize;
- (bool)hasMetricState;
- (bool)hasMetricType;
- (bool)hasRetryCount;
- (bool)hasSessionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageCount;
- (unsigned long long)messageSize;
- (int)metricState;
- (id)metricStateAsString:(int)arg1;
- (int)metricType;
- (id)metricTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)retryCount;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setHasMessageCount:(bool)arg1;
- (void)setHasMessageSize:(bool)arg1;
- (void)setHasMetricState:(bool)arg1;
- (void)setHasMetricType:(bool)arg1;
- (void)setHasRetryCount:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setMessageCount:(unsigned int)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setMetricState:(int)arg1;
- (void)setMetricType:(int)arg1;
- (void)setRetryCount:(unsigned int)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end
