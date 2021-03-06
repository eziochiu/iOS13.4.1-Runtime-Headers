/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying> {
    _MRContentItemProtobuf * _contentItem;
    int  _endpointOptions;
    NSMutableArray * _events;
    struct { 
        unsigned int playbackPosition : 1; 
        unsigned int playbackRate : 1; 
        unsigned int endpointOptions : 1; 
        unsigned int playbackState : 1; 
        unsigned int playerOptions : 1; 
    }  _has;
    double  _playbackPosition;
    double  _playbackRate;
    _MRPlaybackSessionRequestProtobuf * _playbackSessionRequest;
    int  _playbackState;
    int  _playerOptions;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSString * _requestID;
}

@property (nonatomic, retain) _MRContentItemProtobuf *contentItem;
@property (nonatomic) int endpointOptions;
@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic, readonly) bool hasContentItem;
@property (nonatomic) bool hasEndpointOptions;
@property (nonatomic) bool hasPlaybackPosition;
@property (nonatomic) bool hasPlaybackRate;
@property (nonatomic, readonly) bool hasPlaybackSessionRequest;
@property (nonatomic) bool hasPlaybackState;
@property (nonatomic) bool hasPlayerOptions;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, readonly) bool hasRequestID;
@property (nonatomic) double playbackPosition;
@property (nonatomic) double playbackRate;
@property (nonatomic, retain) _MRPlaybackSessionRequestProtobuf *playbackSessionRequest;
@property (nonatomic) int playbackState;
@property (nonatomic) int playerOptions;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, retain) NSString *requestID;

+ (Class)eventsType;

- (void).cxx_destruct;
- (int)StringAsEndpointOptions:(id)arg1;
- (int)StringAsPlaybackState:(id)arg1;
- (int)StringAsPlayerOptions:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (id)contentItem;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)endpointOptions;
- (id)endpointOptionsAsString:(int)arg1;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)hasContentItem;
- (bool)hasEndpointOptions;
- (bool)hasPlaybackPosition;
- (bool)hasPlaybackRate;
- (bool)hasPlaybackSessionRequest;
- (bool)hasPlaybackState;
- (bool)hasPlayerOptions;
- (bool)hasPlayerPath;
- (bool)hasRequestID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)playbackPosition;
- (double)playbackRate;
- (id)playbackSessionRequest;
- (int)playbackState;
- (id)playbackStateAsString:(int)arg1;
- (int)playerOptions;
- (id)playerOptionsAsString:(int)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (void)setContentItem:(id)arg1;
- (void)setEndpointOptions:(int)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasEndpointOptions:(bool)arg1;
- (void)setHasPlaybackPosition:(bool)arg1;
- (void)setHasPlaybackRate:(bool)arg1;
- (void)setHasPlaybackState:(bool)arg1;
- (void)setHasPlayerOptions:(bool)arg1;
- (void)setPlaybackPosition:(double)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPlaybackSessionRequest:(id)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setPlayerOptions:(int)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
