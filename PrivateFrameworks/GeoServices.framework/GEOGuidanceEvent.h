/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGuidanceEvent : PBCodable <NSCopying> {
    int  _distanceZilchIndex;
    int  _endValidDistance;
    int  _eventType;
    struct { 
        unsigned int has_maxSpeed : 1; 
        unsigned int has_minSpeed : 1; 
        unsigned int has_distanceZilchIndex : 1; 
        unsigned int has_endValidDistance : 1; 
        unsigned int has_eventType : 1; 
        unsigned int has_identifier : 1; 
        unsigned int has_offsetForDistanceString : 1; 
        unsigned int has_startValidDistance : 1; 
        unsigned int has_sticky : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_junctionView : 1; 
        unsigned int read_laneGuidance : 1; 
        unsigned int read_signGuidance : 1; 
        unsigned int read_spokenGuidance : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_junctionView : 1; 
        unsigned int wrote_laneGuidance : 1; 
        unsigned int wrote_maxSpeed : 1; 
        unsigned int wrote_minSpeed : 1; 
        unsigned int wrote_signGuidance : 1; 
        unsigned int wrote_spokenGuidance : 1; 
        unsigned int wrote_distanceZilchIndex : 1; 
        unsigned int wrote_endValidDistance : 1; 
        unsigned int wrote_eventType : 1; 
        unsigned int wrote_identifier : 1; 
        unsigned int wrote_offsetForDistanceString : 1; 
        unsigned int wrote_startValidDistance : 1; 
        unsigned int wrote_sticky : 1; 
    }  _flags;
    unsigned int  _identifier;
    GEOJunctionView * _junctionView;
    GEOVisualLaneGuidance * _laneGuidance;
    double  _maxSpeed;
    double  _minSpeed;
    int  _offsetForDistanceString;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOSignGuidance * _signGuidance;
    GEOSpokenGuidance * _spokenGuidance;
    int  _startValidDistance;
    bool  _sticky;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int distanceZilchIndex;
@property (nonatomic) int endValidDistance;
@property (nonatomic) int eventType;
@property (nonatomic) bool hasDistanceZilchIndex;
@property (nonatomic) bool hasEndValidDistance;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic, readonly) bool hasJunctionView;
@property (nonatomic, readonly) bool hasLaneGuidance;
@property (nonatomic) bool hasMaxSpeed;
@property (nonatomic) bool hasMinSpeed;
@property (nonatomic) bool hasOffsetForDistanceString;
@property (nonatomic, readonly) bool hasSignGuidance;
@property (nonatomic, readonly) bool hasSpokenGuidance;
@property (nonatomic) bool hasStartValidDistance;
@property (nonatomic) bool hasSticky;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, retain) GEOJunctionView *junctionView;
@property (nonatomic, retain) GEOVisualLaneGuidance *laneGuidance;
@property (nonatomic) double maxSpeed;
@property (nonatomic) double minSpeed;
@property (nonatomic) int offsetForDistanceString;
@property (nonatomic, retain) GEOSignGuidance *signGuidance;
@property (nonatomic, retain) GEOSpokenGuidance *spokenGuidance;
@property (nonatomic) int startValidDistance;
@property (nonatomic) bool sticky;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (void)_readJunctionView;
- (void)_readLaneGuidance;
- (void)_readSignGuidance;
- (void)_readSpokenGuidance;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)distanceZilchIndex;
- (int)endValidDistance;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasDistanceZilchIndex;
- (bool)hasEndValidDistance;
- (bool)hasEventType;
- (bool)hasIdentifier;
- (bool)hasJunctionView;
- (bool)hasLaneGuidance;
- (bool)hasMaxSpeed;
- (bool)hasMinSpeed;
- (bool)hasOffsetForDistanceString;
- (bool)hasSignGuidance;
- (bool)hasSpokenGuidance;
- (bool)hasStartValidDistance;
- (bool)hasSticky;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)junctionView;
- (id)laneGuidance;
- (double)maxSpeed;
- (void)mergeFrom:(id)arg1;
- (double)minSpeed;
- (int)offsetForDistanceString;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistanceZilchIndex:(int)arg1;
- (void)setEndValidDistance:(int)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasDistanceZilchIndex:(bool)arg1;
- (void)setHasEndValidDistance:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasMaxSpeed:(bool)arg1;
- (void)setHasMinSpeed:(bool)arg1;
- (void)setHasOffsetForDistanceString:(bool)arg1;
- (void)setHasStartValidDistance:(bool)arg1;
- (void)setHasSticky:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setJunctionView:(id)arg1;
- (void)setLaneGuidance:(id)arg1;
- (void)setMaxSpeed:(double)arg1;
- (void)setMinSpeed:(double)arg1;
- (void)setOffsetForDistanceString:(int)arg1;
- (void)setSignGuidance:(id)arg1;
- (void)setSpokenGuidance:(id)arg1;
- (void)setStartValidDistance:(int)arg1;
- (void)setSticky:(bool)arg1;
- (id)signGuidance;
- (id)spokenGuidance;
- (int)startValidDistance;
- (bool)sticky;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
