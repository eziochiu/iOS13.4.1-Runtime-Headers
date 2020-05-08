/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying> {
    NSMutableArray * _arrivalParameters;
    NSMutableArray * _cameras;
    GEOClientMetrics * _clientMetrics;
    GEOPDDatasetABStatus * _datasetAbStatus;
    NSString * _debugData;
    unsigned long long  _debugServerLatencyMs;
    GEOETAServiceResponseSummary * _etaServiceSummary;
    struct { 
        unsigned int has_debugServerLatencyMs : 1; 
        unsigned int has_status : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_arrivalParameters : 1; 
        unsigned int read_cameras : 1; 
        unsigned int read_clientMetrics : 1; 
        unsigned int read_datasetAbStatus : 1; 
        unsigned int read_debugData : 1; 
        unsigned int read_etaServiceSummary : 1; 
        unsigned int read_responseId : 1; 
        unsigned int read_routes : 1; 
        unsigned int read_sessionState : 1; 
        unsigned int read_trafficSignals : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_arrivalParameters : 1; 
        unsigned int wrote_cameras : 1; 
        unsigned int wrote_clientMetrics : 1; 
        unsigned int wrote_datasetAbStatus : 1; 
        unsigned int wrote_debugData : 1; 
        unsigned int wrote_debugServerLatencyMs : 1; 
        unsigned int wrote_etaServiceSummary : 1; 
        unsigned int wrote_responseId : 1; 
        unsigned int wrote_routes : 1; 
        unsigned int wrote_sessionState : 1; 
        unsigned int wrote_trafficSignals : 1; 
        unsigned int wrote_status : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _responseId;
    NSMutableArray * _routes;
    NSData * _sessionState;
    int  _status;
    NSMutableArray * _trafficSignals;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *arrivalParameters;
@property (nonatomic, retain) NSMutableArray *cameras;
@property (nonatomic, retain) GEOClientMetrics *clientMetrics;
@property (nonatomic, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, retain) NSString *debugData;
@property (nonatomic) unsigned long long debugServerLatencyMs;
@property (nonatomic, retain) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic, readonly) bool hasClientMetrics;
@property (nonatomic, readonly) bool hasDatasetAbStatus;
@property (nonatomic, readonly) bool hasDebugData;
@property (nonatomic) bool hasDebugServerLatencyMs;
@property (nonatomic, readonly) bool hasEtaServiceSummary;
@property (nonatomic, readonly) bool hasResponseId;
@property (nonatomic, readonly) bool hasSessionState;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSData *responseId;
@property (nonatomic, retain) NSMutableArray *routes;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic) int status;
@property (nonatomic, retain) NSMutableArray *trafficSignals;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)arrivalParametersType;
+ (Class)cameraType;
+ (bool)isValid:(id)arg1;
+ (Class)routeType;
+ (Class)trafficSignalType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)_addNoFlagsArrivalParameters:(id)arg1;
- (void)_addNoFlagsCamera:(id)arg1;
- (void)_addNoFlagsRoute:(id)arg1;
- (void)_addNoFlagsTrafficSignal:(id)arg1;
- (void)_readArrivalParameters;
- (void)_readCameras;
- (void)_readClientMetrics;
- (void)_readDatasetAbStatus;
- (void)_readDebugData;
- (void)_readEtaServiceSummary;
- (void)_readResponseId;
- (void)_readRoutes;
- (void)_readSessionState;
- (void)_readTrafficSignals;
- (void)addArrivalParameters:(id)arg1;
- (void)addCamera:(id)arg1;
- (void)addRoute:(id)arg1;
- (void)addTrafficSignal:(id)arg1;
- (id)arrivalParameters;
- (id)arrivalParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrivalParametersCount;
- (id)cameraAtIndex:(unsigned long long)arg1;
- (id)cameras;
- (unsigned long long)camerasCount;
- (void)clearArrivalParameters;
- (void)clearCameras;
- (void)clearRoutes;
- (void)clearTrafficSignals;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (id)debugData;
- (unsigned long long)debugServerLatencyMs;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaServiceSummary;
- (bool)hasClientMetrics;
- (bool)hasDatasetAbStatus;
- (bool)hasDebugData;
- (bool)hasDebugServerLatencyMs;
- (bool)hasEtaServiceSummary;
- (bool)hasResponseId;
- (bool)hasSessionState;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseId;
- (id)routeAtIndex:(unsigned long long)arg1;
- (id)routes;
- (unsigned long long)routesCount;
- (id)sessionState;
- (void)setArrivalParameters:(id)arg1;
- (void)setCameras:(id)arg1;
- (void)setClientMetrics:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setDebugData:(id)arg1;
- (void)setDebugServerLatencyMs:(unsigned long long)arg1;
- (void)setEtaServiceSummary:(id)arg1;
- (void)setHasDebugServerLatencyMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setResponseId:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setSessionState:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTrafficSignals:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)trafficSignalAtIndex:(unsigned long long)arg1;
- (id)trafficSignals;
- (unsigned long long)trafficSignalsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end