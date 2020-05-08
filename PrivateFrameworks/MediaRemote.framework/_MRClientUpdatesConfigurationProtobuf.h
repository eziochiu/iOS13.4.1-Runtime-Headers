/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying> {
    bool  _artworkUpdates;
    struct { 
        unsigned int artworkUpdates : 1; 
        unsigned int keyboardUpdates : 1; 
        unsigned int nowPlayingUpdates : 1; 
        unsigned int outputDeviceUpdates : 1; 
        unsigned int volumeUpdates : 1; 
    }  _has;
    bool  _keyboardUpdates;
    bool  _nowPlayingUpdates;
    bool  _outputDeviceUpdates;
    bool  _volumeUpdates;
}

@property (nonatomic) bool artworkUpdates;
@property (nonatomic) bool hasArtworkUpdates;
@property (nonatomic) bool hasKeyboardUpdates;
@property (nonatomic) bool hasNowPlayingUpdates;
@property (nonatomic) bool hasOutputDeviceUpdates;
@property (nonatomic) bool hasVolumeUpdates;
@property (nonatomic) bool keyboardUpdates;
@property (nonatomic) bool nowPlayingUpdates;
@property (nonatomic) bool outputDeviceUpdates;
@property (nonatomic) bool volumeUpdates;

- (bool)artworkUpdates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkUpdates;
- (bool)hasKeyboardUpdates;
- (bool)hasNowPlayingUpdates;
- (bool)hasOutputDeviceUpdates;
- (bool)hasVolumeUpdates;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)keyboardUpdates;
- (void)mergeFrom:(id)arg1;
- (bool)nowPlayingUpdates;
- (bool)outputDeviceUpdates;
- (bool)readFrom:(id)arg1;
- (void)setArtworkUpdates:(bool)arg1;
- (void)setHasArtworkUpdates:(bool)arg1;
- (void)setHasKeyboardUpdates:(bool)arg1;
- (void)setHasNowPlayingUpdates:(bool)arg1;
- (void)setHasOutputDeviceUpdates:(bool)arg1;
- (void)setHasVolumeUpdates:(bool)arg1;
- (void)setKeyboardUpdates:(bool)arg1;
- (void)setNowPlayingUpdates:(bool)arg1;
- (void)setOutputDeviceUpdates:(bool)arg1;
- (void)setVolumeUpdates:(bool)arg1;
- (bool)volumeUpdates;
- (void)writeTo:(id)arg1;

@end