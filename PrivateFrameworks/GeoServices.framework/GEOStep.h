/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStep : PBCodable <NSCopying> {
    unsigned int  _distance;
    bool  _endsOnFwy;
    GEONameInfo * _exitNumber;
    unsigned int  _expectedTime;
    struct { 
        unsigned int has_distance : 1; 
        unsigned int has_expectedTime : 1; 
        unsigned int has_hintFirstAnnouncementZilchIndex : 1; 
        unsigned int has_junctionType : 1; 
        unsigned int has_maneuverEndBasicIndex : 1; 
        unsigned int has_maneuverEndZilchIndex : 1; 
        unsigned int has_maneuverStartZilchIndex : 1; 
        unsigned int has_maneuverType : 1; 
        unsigned int has_overrideDrivingSide : 1; 
        unsigned int has_overrideTransportType : 1; 
        unsigned int has_stepID : 1; 
        unsigned int has_endsOnFwy : 1; 
        unsigned int has_maneuverLaneGuidanceSuppressed : 1; 
        unsigned int has_shouldChainManeuver : 1; 
        unsigned int has_stayOn : 1; 
        unsigned int has_toFreeway : 1; 
        unsigned int has_tollAhead : 1; 
        unsigned int has_tollPrior : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_junctionElements : 1; 
        unsigned int read_exitNumber : 1; 
        unsigned int read_guidanceEvents : 1; 
        unsigned int read_instructionSet : 1; 
        unsigned int read_instructions : 1; 
        unsigned int read_maneuverNames : 1; 
        unsigned int read_notice : 1; 
        unsigned int read_signposts : 1; 
        unsigned int read_timeCheckpoints : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_junctionElements : 1; 
        unsigned int wrote_exitNumber : 1; 
        unsigned int wrote_guidanceEvents : 1; 
        unsigned int wrote_instructionSet : 1; 
        unsigned int wrote_instructions : 1; 
        unsigned int wrote_maneuverNames : 1; 
        unsigned int wrote_notice : 1; 
        unsigned int wrote_signposts : 1; 
        unsigned int wrote_timeCheckpoints : 1; 
        unsigned int wrote_distance : 1; 
        unsigned int wrote_expectedTime : 1; 
        unsigned int wrote_hintFirstAnnouncementZilchIndex : 1; 
        unsigned int wrote_junctionType : 1; 
        unsigned int wrote_maneuverEndBasicIndex : 1; 
        unsigned int wrote_maneuverEndZilchIndex : 1; 
        unsigned int wrote_maneuverStartZilchIndex : 1; 
        unsigned int wrote_maneuverType : 1; 
        unsigned int wrote_overrideDrivingSide : 1; 
        unsigned int wrote_overrideTransportType : 1; 
        unsigned int wrote_stepID : 1; 
        unsigned int wrote_endsOnFwy : 1; 
        unsigned int wrote_maneuverLaneGuidanceSuppressed : 1; 
        unsigned int wrote_shouldChainManeuver : 1; 
        unsigned int wrote_stayOn : 1; 
        unsigned int wrote_toFreeway : 1; 
        unsigned int wrote_tollAhead : 1; 
        unsigned int wrote_tollPrior : 1; 
    }  _flags;
    NSMutableArray * _guidanceEvents;
    int  _hintFirstAnnouncementZilchIndex;
    GEOInstructionSet * _instructionSet;
    NSString * _instructions;
    struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _junctionElements;
    unsigned long long  _junctionElementsCount;
    unsigned long long  _junctionElementsSpace;
    int  _junctionType;
    int  _maneuverEndBasicIndex;
    int  _maneuverEndZilchIndex;
    bool  _maneuverLaneGuidanceSuppressed;
    NSMutableArray * _maneuverNames;
    int  _maneuverStartZilchIndex;
    int  _maneuverType;
    NSString * _notice;
    int  _overrideDrivingSide;
    int  _overrideTransportType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _shouldChainManeuver;
    NSMutableArray * _signposts;
    bool  _stayOn;
    unsigned int  _stepID;
    GEOTimeCheckpoints * _timeCheckpoints;
    bool  _toFreeway;
    bool  _tollAhead;
    bool  _tollPrior;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) bool endsOnFwy;
@property (nonatomic, retain) GEONameInfo *exitNumber;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic, retain) NSMutableArray *guidanceEvents;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasEndsOnFwy;
@property (nonatomic, readonly) bool hasExitNumber;
@property (nonatomic) bool hasExpectedTime;
@property (nonatomic, readonly) bool hasHintFirstAnnouncementIndex;
@property (nonatomic) bool hasHintFirstAnnouncementZilchIndex;
@property (nonatomic, readonly) bool hasInstructionSet;
@property (nonatomic, readonly) bool hasInstructions;
@property (nonatomic) bool hasJunctionType;
@property (nonatomic) bool hasManeuverEndBasicIndex;
@property (nonatomic) bool hasManeuverEndZilchIndex;
@property (nonatomic) bool hasManeuverLaneGuidanceSuppressed;
@property (nonatomic) bool hasManeuverStartZilchIndex;
@property (nonatomic) bool hasManeuverType;
@property (nonatomic, readonly) bool hasNotice;
@property (nonatomic) bool hasOverrideDrivingSide;
@property (nonatomic) bool hasOverrideTransportType;
@property (nonatomic) bool hasShouldChainManeuver;
@property (nonatomic) bool hasStayOn;
@property (nonatomic) bool hasStepID;
@property (nonatomic, readonly) bool hasTimeCheckpoints;
@property (nonatomic) bool hasToFreeway;
@property (nonatomic) bool hasTollAhead;
@property (nonatomic) bool hasTollPrior;
@property (nonatomic, readonly) int hintFirstAnnouncementIndex;
@property (nonatomic) int hintFirstAnnouncementZilchIndex;
@property (nonatomic, retain) GEOInstructionSet *instructionSet;
@property (nonatomic, retain) NSString *instructions;
@property (nonatomic, readonly) struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*junctionElements;
@property (nonatomic, readonly) unsigned long long junctionElementsCount;
@property (nonatomic) int junctionType;
@property (nonatomic) int maneuverEndBasicIndex;
@property (nonatomic, readonly) unsigned int maneuverEndIndex;
@property (nonatomic) int maneuverEndZilchIndex;
@property (nonatomic) bool maneuverLaneGuidanceSuppressed;
@property (nonatomic, retain) NSMutableArray *maneuverNames;
@property (nonatomic, readonly) unsigned int maneuverStartIndex;
@property (nonatomic) int maneuverStartZilchIndex;
@property (nonatomic) int maneuverType;
@property (nonatomic, retain) NSString *notice;
@property (nonatomic) int overrideDrivingSide;
@property (nonatomic) int overrideTransportType;
@property (nonatomic) bool shouldChainManeuver;
@property (nonatomic, retain) NSMutableArray *signposts;
@property (nonatomic) bool stayOn;
@property (nonatomic) unsigned int stepID;
@property (nonatomic, retain) GEOTimeCheckpoints *timeCheckpoints;
@property (nonatomic) bool toFreeway;
@property (nonatomic) bool tollAhead;
@property (nonatomic) bool tollPrior;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)guidanceEventType;
+ (bool)isValid:(id)arg1;
+ (Class)maneuverNameType;
+ (Class)signpostType;

- (void).cxx_destruct;
- (int)StringAsJunctionType:(id)arg1;
- (int)StringAsManeuverType:(id)arg1;
- (int)StringAsOverrideDrivingSide:(id)arg1;
- (int)StringAsOverrideTransportType:(id)arg1;
- (void)_addNoFlagsGuidanceEvent:(id)arg1;
- (void)_addNoFlagsJunctionElement:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)_addNoFlagsManeuverName:(id)arg1;
- (void)_addNoFlagsSignpost:(id)arg1;
- (void)_readExitNumber;
- (void)_readGuidanceEvents;
- (void)_readInstructionSet;
- (void)_readInstructions;
- (void)_readJunctionElements;
- (void)_readManeuverNames;
- (void)_readNotice;
- (void)_readSignposts;
- (void)_readTimeCheckpoints;
- (void)addGuidanceEvent:(id)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addManeuverName:(id)arg1;
- (void)addSignpost:(id)arg1;
- (void)clearGuidanceEvents;
- (void)clearJunctionElements;
- (void)clearManeuverNames;
- (void)clearSignposts;
- (void)clearUnknownFields:(bool)arg1;
- (id)continueInstructionForSpoken;
- (id)continueInstructionsForSignView;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (id)distanceForListView;
- (id)distanceForSignView;
- (bool)endsOnFwy;
- (id)executionInstructionsForSpoken;
- (id)exitNumber;
- (unsigned int)expectedTime;
- (id)firstNameInfo;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;
- (id)guidanceEvents;
- (unsigned long long)guidanceEventsCount;
- (bool)hasDistance;
- (bool)hasEndsOnFwy;
- (bool)hasExitNumber;
- (bool)hasExpectedTime;
- (bool)hasHintFirstAnnouncementIndex;
- (bool)hasHintFirstAnnouncementZilchIndex;
- (bool)hasInstructionSet;
- (bool)hasInstructions;
- (bool)hasJunctionType;
- (bool)hasManeuverEndBasicIndex;
- (bool)hasManeuverEndZilchIndex;
- (bool)hasManeuverLaneGuidanceSuppressed;
- (bool)hasManeuverStartZilchIndex;
- (bool)hasManeuverType;
- (bool)hasNotice;
- (bool)hasOverrideDrivingSide;
- (bool)hasOverrideTransportType;
- (bool)hasShouldChainManeuver;
- (bool)hasStayOn;
- (bool)hasStepID;
- (bool)hasTimeCheckpoints;
- (bool)hasToFreeway;
- (bool)hasTollAhead;
- (bool)hasTollPrior;
- (unsigned long long)hash;
- (int)hintFirstAnnouncementIndex;
- (int)hintFirstAnnouncementZilchIndex;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initialInstructionForSpoken;
- (id)instructionSet;
- (id)instructions;
- (id)instructionsForListView;
- (id)intersectionNameInfo;
- (bool)isEqual:(id)arg1;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })junctionElementAtIndex:(unsigned long long)arg1;
- (struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)junctionElements;
- (unsigned long long)junctionElementsCount;
- (int)junctionType;
- (id)junctionTypeAsString:(int)arg1;
- (id)maneuverDescription;
- (int)maneuverEndBasicIndex;
- (unsigned int)maneuverEndIndex;
- (int)maneuverEndZilchIndex;
- (bool)maneuverIsHighwayExit;
- (bool)maneuverLaneGuidanceSuppressed;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (id)maneuverNames;
- (unsigned long long)maneuverNamesCount;
- (unsigned int)maneuverStartIndex;
- (int)maneuverStartZilchIndex;
- (int)maneuverType;
- (id)maneuverTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mergeInstructionsForSignView;
- (id)normalInstructionsForSignView;
- (id)notice;
- (int)overrideDrivingSide;
- (id)overrideDrivingSideAsString:(int)arg1;
- (int)overrideTransportType;
- (id)overrideTransportTypeAsString:(int)arg1;
- (id)prepareInstructionForSpoken;
- (id)proceedInstructionForSpoken;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)roadName;
- (void)setDistance:(unsigned int)arg1;
- (void)setEndsOnFwy:(bool)arg1;
- (void)setExitNumber:(id)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setGuidanceEvents:(id)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasEndsOnFwy:(bool)arg1;
- (void)setHasExpectedTime:(bool)arg1;
- (void)setHasHintFirstAnnouncementZilchIndex:(bool)arg1;
- (void)setHasJunctionType:(bool)arg1;
- (void)setHasManeuverEndBasicIndex:(bool)arg1;
- (void)setHasManeuverEndZilchIndex:(bool)arg1;
- (void)setHasManeuverLaneGuidanceSuppressed:(bool)arg1;
- (void)setHasManeuverStartZilchIndex:(bool)arg1;
- (void)setHasManeuverType:(bool)arg1;
- (void)setHasOverrideDrivingSide:(bool)arg1;
- (void)setHasOverrideTransportType:(bool)arg1;
- (void)setHasShouldChainManeuver:(bool)arg1;
- (void)setHasStayOn:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasToFreeway:(bool)arg1;
- (void)setHasTollAhead:(bool)arg1;
- (void)setHasTollPrior:(bool)arg1;
- (void)setHintFirstAnnouncementZilchIndex:(int)arg1;
- (void)setInstructionSet:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setJunctionElements:(struct GEOJunctionElement { int x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setJunctionType:(int)arg1;
- (void)setManeuverEndBasicIndex:(int)arg1;
- (void)setManeuverEndZilchIndex:(int)arg1;
- (void)setManeuverLaneGuidanceSuppressed:(bool)arg1;
- (void)setManeuverNames:(id)arg1;
- (void)setManeuverStartZilchIndex:(int)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setNotice:(id)arg1;
- (void)setOverrideDrivingSide:(int)arg1;
- (void)setOverrideTransportType:(int)arg1;
- (void)setShouldChainManeuver:(bool)arg1;
- (void)setSignposts:(id)arg1;
- (void)setStayOn:(bool)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimeCheckpoints:(id)arg1;
- (void)setToFreeway:(bool)arg1;
- (void)setTollAhead:(bool)arg1;
- (void)setTollPrior:(bool)arg1;
- (void)shieldInfo:(id /* block */)arg1;
- (bool)shouldChainManeuver;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (id)signposts;
- (unsigned long long)signpostsCount;
- (bool)stayOn;
- (unsigned int)stepID;
- (id)timeCheckpoints;
- (bool)toFreeway;
- (bool)tollAhead;
- (bool)tollPrior;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (bool)maneuverIsTakeNthExitAtRoundabout;
- (double)speed;

@end
