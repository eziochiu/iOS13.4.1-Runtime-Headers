/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiWcpsStats : PBCodable <NSCopying> {
    unsigned long long  _avgCca;
    unsigned long long  _avgRssi;
    unsigned long long  _avgRxRetry;
    unsigned long long  _avgSnr;
    unsigned long long  _avgTxAirLatency;
    unsigned long long  _avgTxPacketLoss;
    unsigned long long  _avgTxRetrans;
    unsigned long long  _cntAwdlActive;
    unsigned long long  _cntDisBtActLatHi;
    unsigned long long  _cntDisBtEv3;
    unsigned long long  _cntRedBtActLatLow;
    unsigned long long  _cntRedBtInactLatHi;
    unsigned long long  _cntVoBadPeriods;
    unsigned long long  _cntVoGoodPeriods;
    unsigned long long  _durActiveMs;
    unsigned long long  _durSleepMs;
    unsigned long long  _durTotalMs;
    unsigned long long  _durWcpsDisabled;
    unsigned long long  _durWcpsEnabled;
    unsigned long long  _durWcpsReduced;
    unsigned long long  _endCca;
    unsigned long long  _endRssi;
    unsigned long long  _endRxRetry;
    unsigned long long  _endSnr;
    unsigned long long  _endTxAirLatency;
    unsigned long long  _endTxPacketLoss;
    unsigned long long  _endTxRetrans;
    struct { 
        unsigned int avgCca : 1; 
        unsigned int avgRssi : 1; 
        unsigned int avgRxRetry : 1; 
        unsigned int avgSnr : 1; 
        unsigned int avgTxAirLatency : 1; 
        unsigned int avgTxPacketLoss : 1; 
        unsigned int avgTxRetrans : 1; 
        unsigned int cntAwdlActive : 1; 
        unsigned int cntDisBtActLatHi : 1; 
        unsigned int cntDisBtEv3 : 1; 
        unsigned int cntRedBtActLatLow : 1; 
        unsigned int cntRedBtInactLatHi : 1; 
        unsigned int cntVoBadPeriods : 1; 
        unsigned int cntVoGoodPeriods : 1; 
        unsigned int durActiveMs : 1; 
        unsigned int durSleepMs : 1; 
        unsigned int durTotalMs : 1; 
        unsigned int durWcpsDisabled : 1; 
        unsigned int durWcpsEnabled : 1; 
        unsigned int durWcpsReduced : 1; 
        unsigned int endCca : 1; 
        unsigned int endRssi : 1; 
        unsigned int endRxRetry : 1; 
        unsigned int endSnr : 1; 
        unsigned int endTxAirLatency : 1; 
        unsigned int endTxPacketLoss : 1; 
        unsigned int endTxRetrans : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long avgCca;
@property (nonatomic) unsigned long long avgRssi;
@property (nonatomic) unsigned long long avgRxRetry;
@property (nonatomic) unsigned long long avgSnr;
@property (nonatomic) unsigned long long avgTxAirLatency;
@property (nonatomic) unsigned long long avgTxPacketLoss;
@property (nonatomic) unsigned long long avgTxRetrans;
@property (nonatomic) unsigned long long cntAwdlActive;
@property (nonatomic) unsigned long long cntDisBtActLatHi;
@property (nonatomic) unsigned long long cntDisBtEv3;
@property (nonatomic) unsigned long long cntRedBtActLatLow;
@property (nonatomic) unsigned long long cntRedBtInactLatHi;
@property (nonatomic) unsigned long long cntVoBadPeriods;
@property (nonatomic) unsigned long long cntVoGoodPeriods;
@property (nonatomic) unsigned long long durActiveMs;
@property (nonatomic) unsigned long long durSleepMs;
@property (nonatomic) unsigned long long durTotalMs;
@property (nonatomic) unsigned long long durWcpsDisabled;
@property (nonatomic) unsigned long long durWcpsEnabled;
@property (nonatomic) unsigned long long durWcpsReduced;
@property (nonatomic) unsigned long long endCca;
@property (nonatomic) unsigned long long endRssi;
@property (nonatomic) unsigned long long endRxRetry;
@property (nonatomic) unsigned long long endSnr;
@property (nonatomic) unsigned long long endTxAirLatency;
@property (nonatomic) unsigned long long endTxPacketLoss;
@property (nonatomic) unsigned long long endTxRetrans;
@property (nonatomic) bool hasAvgCca;
@property (nonatomic) bool hasAvgRssi;
@property (nonatomic) bool hasAvgRxRetry;
@property (nonatomic) bool hasAvgSnr;
@property (nonatomic) bool hasAvgTxAirLatency;
@property (nonatomic) bool hasAvgTxPacketLoss;
@property (nonatomic) bool hasAvgTxRetrans;
@property (nonatomic) bool hasCntAwdlActive;
@property (nonatomic) bool hasCntDisBtActLatHi;
@property (nonatomic) bool hasCntDisBtEv3;
@property (nonatomic) bool hasCntRedBtActLatLow;
@property (nonatomic) bool hasCntRedBtInactLatHi;
@property (nonatomic) bool hasCntVoBadPeriods;
@property (nonatomic) bool hasCntVoGoodPeriods;
@property (nonatomic) bool hasDurActiveMs;
@property (nonatomic) bool hasDurSleepMs;
@property (nonatomic) bool hasDurTotalMs;
@property (nonatomic) bool hasDurWcpsDisabled;
@property (nonatomic) bool hasDurWcpsEnabled;
@property (nonatomic) bool hasDurWcpsReduced;
@property (nonatomic) bool hasEndCca;
@property (nonatomic) bool hasEndRssi;
@property (nonatomic) bool hasEndRxRetry;
@property (nonatomic) bool hasEndSnr;
@property (nonatomic) bool hasEndTxAirLatency;
@property (nonatomic) bool hasEndTxPacketLoss;
@property (nonatomic) bool hasEndTxRetrans;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)avgCca;
- (unsigned long long)avgRssi;
- (unsigned long long)avgRxRetry;
- (unsigned long long)avgSnr;
- (unsigned long long)avgTxAirLatency;
- (unsigned long long)avgTxPacketLoss;
- (unsigned long long)avgTxRetrans;
- (unsigned long long)cntAwdlActive;
- (unsigned long long)cntDisBtActLatHi;
- (unsigned long long)cntDisBtEv3;
- (unsigned long long)cntRedBtActLatLow;
- (unsigned long long)cntRedBtInactLatHi;
- (unsigned long long)cntVoBadPeriods;
- (unsigned long long)cntVoGoodPeriods;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durActiveMs;
- (unsigned long long)durSleepMs;
- (unsigned long long)durTotalMs;
- (unsigned long long)durWcpsDisabled;
- (unsigned long long)durWcpsEnabled;
- (unsigned long long)durWcpsReduced;
- (unsigned long long)endCca;
- (unsigned long long)endRssi;
- (unsigned long long)endRxRetry;
- (unsigned long long)endSnr;
- (unsigned long long)endTxAirLatency;
- (unsigned long long)endTxPacketLoss;
- (unsigned long long)endTxRetrans;
- (bool)hasAvgCca;
- (bool)hasAvgRssi;
- (bool)hasAvgRxRetry;
- (bool)hasAvgSnr;
- (bool)hasAvgTxAirLatency;
- (bool)hasAvgTxPacketLoss;
- (bool)hasAvgTxRetrans;
- (bool)hasCntAwdlActive;
- (bool)hasCntDisBtActLatHi;
- (bool)hasCntDisBtEv3;
- (bool)hasCntRedBtActLatLow;
- (bool)hasCntRedBtInactLatHi;
- (bool)hasCntVoBadPeriods;
- (bool)hasCntVoGoodPeriods;
- (bool)hasDurActiveMs;
- (bool)hasDurSleepMs;
- (bool)hasDurTotalMs;
- (bool)hasDurWcpsDisabled;
- (bool)hasDurWcpsEnabled;
- (bool)hasDurWcpsReduced;
- (bool)hasEndCca;
- (bool)hasEndRssi;
- (bool)hasEndRxRetry;
- (bool)hasEndSnr;
- (bool)hasEndTxAirLatency;
- (bool)hasEndTxPacketLoss;
- (bool)hasEndTxRetrans;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvgCca:(unsigned long long)arg1;
- (void)setAvgRssi:(unsigned long long)arg1;
- (void)setAvgRxRetry:(unsigned long long)arg1;
- (void)setAvgSnr:(unsigned long long)arg1;
- (void)setAvgTxAirLatency:(unsigned long long)arg1;
- (void)setAvgTxPacketLoss:(unsigned long long)arg1;
- (void)setAvgTxRetrans:(unsigned long long)arg1;
- (void)setCntAwdlActive:(unsigned long long)arg1;
- (void)setCntDisBtActLatHi:(unsigned long long)arg1;
- (void)setCntDisBtEv3:(unsigned long long)arg1;
- (void)setCntRedBtActLatLow:(unsigned long long)arg1;
- (void)setCntRedBtInactLatHi:(unsigned long long)arg1;
- (void)setCntVoBadPeriods:(unsigned long long)arg1;
- (void)setCntVoGoodPeriods:(unsigned long long)arg1;
- (void)setDurActiveMs:(unsigned long long)arg1;
- (void)setDurSleepMs:(unsigned long long)arg1;
- (void)setDurTotalMs:(unsigned long long)arg1;
- (void)setDurWcpsDisabled:(unsigned long long)arg1;
- (void)setDurWcpsEnabled:(unsigned long long)arg1;
- (void)setDurWcpsReduced:(unsigned long long)arg1;
- (void)setEndCca:(unsigned long long)arg1;
- (void)setEndRssi:(unsigned long long)arg1;
- (void)setEndRxRetry:(unsigned long long)arg1;
- (void)setEndSnr:(unsigned long long)arg1;
- (void)setEndTxAirLatency:(unsigned long long)arg1;
- (void)setEndTxPacketLoss:(unsigned long long)arg1;
- (void)setEndTxRetrans:(unsigned long long)arg1;
- (void)setHasAvgCca:(bool)arg1;
- (void)setHasAvgRssi:(bool)arg1;
- (void)setHasAvgRxRetry:(bool)arg1;
- (void)setHasAvgSnr:(bool)arg1;
- (void)setHasAvgTxAirLatency:(bool)arg1;
- (void)setHasAvgTxPacketLoss:(bool)arg1;
- (void)setHasAvgTxRetrans:(bool)arg1;
- (void)setHasCntAwdlActive:(bool)arg1;
- (void)setHasCntDisBtActLatHi:(bool)arg1;
- (void)setHasCntDisBtEv3:(bool)arg1;
- (void)setHasCntRedBtActLatLow:(bool)arg1;
- (void)setHasCntRedBtInactLatHi:(bool)arg1;
- (void)setHasCntVoBadPeriods:(bool)arg1;
- (void)setHasCntVoGoodPeriods:(bool)arg1;
- (void)setHasDurActiveMs:(bool)arg1;
- (void)setHasDurSleepMs:(bool)arg1;
- (void)setHasDurTotalMs:(bool)arg1;
- (void)setHasDurWcpsDisabled:(bool)arg1;
- (void)setHasDurWcpsEnabled:(bool)arg1;
- (void)setHasDurWcpsReduced:(bool)arg1;
- (void)setHasEndCca:(bool)arg1;
- (void)setHasEndRssi:(bool)arg1;
- (void)setHasEndRxRetry:(bool)arg1;
- (void)setHasEndSnr:(bool)arg1;
- (void)setHasEndTxAirLatency:(bool)arg1;
- (void)setHasEndTxPacketLoss:(bool)arg1;
- (void)setHasEndTxRetrans:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end