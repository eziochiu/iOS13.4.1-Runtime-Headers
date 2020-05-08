/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficBannerText : PBCodable <NSCopying> {
    GEOFormattedString * _bannerLargeText;
    GEOFormattedString * _bannerSmallText;
    int  _bannerStyle;
    bool  _disableFasterRerouteByDefault;
    struct { 
        unsigned int has_bannerStyle : 1; 
        unsigned int has_hideAtDistance : 1; 
        unsigned int has_incidentDistance : 1; 
        unsigned int has_incidentIndex : 1; 
        unsigned int has_previousBannerChange : 1; 
        unsigned int has_secondsSaved : 1; 
        unsigned int has_showAtDistance : 1; 
        unsigned int has_disableFasterRerouteByDefault : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_bannerLargeText : 1; 
        unsigned int read_bannerSmallText : 1; 
        unsigned int read_localizedIncidentBanners : 1; 
        unsigned int read_localizedIncidentSpokenTexts : 1; 
        unsigned int read_localizedIncidentSubBanners : 1; 
        unsigned int read_spokenPrompt : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_bannerLargeText : 1; 
        unsigned int wrote_bannerSmallText : 1; 
        unsigned int wrote_localizedIncidentBanners : 1; 
        unsigned int wrote_localizedIncidentSpokenTexts : 1; 
        unsigned int wrote_localizedIncidentSubBanners : 1; 
        unsigned int wrote_spokenPrompt : 1; 
        unsigned int wrote_bannerStyle : 1; 
        unsigned int wrote_hideAtDistance : 1; 
        unsigned int wrote_incidentDistance : 1; 
        unsigned int wrote_incidentIndex : 1; 
        unsigned int wrote_previousBannerChange : 1; 
        unsigned int wrote_secondsSaved : 1; 
        unsigned int wrote_showAtDistance : 1; 
        unsigned int wrote_disableFasterRerouteByDefault : 1; 
    }  _flags;
    unsigned int  _hideAtDistance;
    unsigned int  _incidentDistance;
    unsigned int  _incidentIndex;
    NSMutableArray * _localizedIncidentBanners;
    NSMutableArray * _localizedIncidentSpokenTexts;
    NSMutableArray * _localizedIncidentSubBanners;
    int  _previousBannerChange;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _secondsSaved;
    unsigned int  _showAtDistance;
    GEOFormattedString * _spokenPrompt;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOFormattedString *bannerLargeText;
@property (nonatomic, retain) GEOFormattedString *bannerSmallText;
@property (nonatomic) int bannerStyle;
@property (nonatomic) bool disableFasterRerouteByDefault;
@property (nonatomic, readonly) bool hasBannerLargeText;
@property (nonatomic, readonly) bool hasBannerSmallText;
@property (nonatomic) bool hasBannerStyle;
@property (nonatomic) bool hasDisableFasterRerouteByDefault;
@property (nonatomic) bool hasHideAtDistance;
@property (nonatomic) bool hasIncidentDistance;
@property (nonatomic) bool hasIncidentIndex;
@property (nonatomic) bool hasPreviousBannerChange;
@property (nonatomic) bool hasSecondsSaved;
@property (nonatomic) bool hasShowAtDistance;
@property (nonatomic, readonly) bool hasSpokenPrompt;
@property (nonatomic) unsigned int hideAtDistance;
@property (nonatomic) unsigned int incidentDistance;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic, retain) NSMutableArray *localizedIncidentBanners;
@property (nonatomic, retain) NSMutableArray *localizedIncidentSpokenTexts;
@property (nonatomic, retain) NSMutableArray *localizedIncidentSubBanners;
@property (nonatomic) int previousBannerChange;
@property (nonatomic) unsigned int secondsSaved;
@property (nonatomic) unsigned int showAtDistance;
@property (nonatomic, retain) GEOFormattedString *spokenPrompt;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)localizedIncidentBannerType;
+ (Class)localizedIncidentSpokenTextType;
+ (Class)localizedIncidentSubBannerType;

- (void).cxx_destruct;
- (int)StringAsBannerStyle:(id)arg1;
- (int)StringAsPreviousBannerChange:(id)arg1;
- (void)_addNoFlagsLocalizedIncidentBanner:(id)arg1;
- (void)_addNoFlagsLocalizedIncidentSpokenText:(id)arg1;
- (void)_addNoFlagsLocalizedIncidentSubBanner:(id)arg1;
- (void)_readBannerLargeText;
- (void)_readBannerSmallText;
- (void)_readLocalizedIncidentBanners;
- (void)_readLocalizedIncidentSpokenTexts;
- (void)_readLocalizedIncidentSubBanners;
- (void)_readSpokenPrompt;
- (void)addLocalizedIncidentBanner:(id)arg1;
- (void)addLocalizedIncidentSpokenText:(id)arg1;
- (void)addLocalizedIncidentSubBanner:(id)arg1;
- (id)bannerLargeText;
- (id)bannerSmallText;
- (int)bannerStyle;
- (id)bannerStyleAsString:(int)arg1;
- (void)clearLocalizedIncidentBanners;
- (void)clearLocalizedIncidentSpokenTexts;
- (void)clearLocalizedIncidentSubBanners;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)disableFasterRerouteByDefault;
- (bool)hasBannerLargeText;
- (bool)hasBannerSmallText;
- (bool)hasBannerStyle;
- (bool)hasDisableFasterRerouteByDefault;
- (bool)hasHideAtDistance;
- (bool)hasIncidentDistance;
- (bool)hasIncidentIndex;
- (bool)hasPreviousBannerChange;
- (bool)hasSecondsSaved;
- (bool)hasShowAtDistance;
- (bool)hasSpokenPrompt;
- (unsigned long long)hash;
- (unsigned int)hideAtDistance;
- (unsigned int)incidentDistance;
- (unsigned int)incidentIndex;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedIncidentBannerAtIndex:(unsigned long long)arg1;
- (id)localizedIncidentBanners;
- (unsigned long long)localizedIncidentBannersCount;
- (id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1;
- (id)localizedIncidentSpokenTexts;
- (unsigned long long)localizedIncidentSpokenTextsCount;
- (id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1;
- (id)localizedIncidentSubBanners;
- (unsigned long long)localizedIncidentSubBannersCount;
- (void)mergeFrom:(id)arg1;
- (int)previousBannerChange;
- (id)previousBannerChangeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)secondsSaved;
- (void)setBannerLargeText:(id)arg1;
- (void)setBannerSmallText:(id)arg1;
- (void)setBannerStyle:(int)arg1;
- (void)setDisableFasterRerouteByDefault:(bool)arg1;
- (void)setHasBannerStyle:(bool)arg1;
- (void)setHasDisableFasterRerouteByDefault:(bool)arg1;
- (void)setHasHideAtDistance:(bool)arg1;
- (void)setHasIncidentDistance:(bool)arg1;
- (void)setHasIncidentIndex:(bool)arg1;
- (void)setHasPreviousBannerChange:(bool)arg1;
- (void)setHasSecondsSaved:(bool)arg1;
- (void)setHasShowAtDistance:(bool)arg1;
- (void)setHideAtDistance:(unsigned int)arg1;
- (void)setIncidentDistance:(unsigned int)arg1;
- (void)setIncidentIndex:(unsigned int)arg1;
- (void)setLocalizedIncidentBanners:(id)arg1;
- (void)setLocalizedIncidentSpokenTexts:(id)arg1;
- (void)setLocalizedIncidentSubBanners:(id)arg1;
- (void)setPreviousBannerChange:(int)arg1;
- (void)setSecondsSaved:(unsigned int)arg1;
- (void)setShowAtDistance:(unsigned int)arg1;
- (void)setSpokenPrompt:(id)arg1;
- (unsigned int)showAtDistance;
- (id)spokenPrompt;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end