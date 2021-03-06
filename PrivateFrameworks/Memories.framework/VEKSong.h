/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VEKSong : NSObject <NSCopying> {
    FMSong * _fmSong;
    unsigned long long  _iTunesID;
    MPMediaItem * _iTunesMediaItem;
}

@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSString *artworkPath;
@property (nonatomic, retain) FMSong *fmSong;
@property (nonatomic, readonly) NSSet *genres;
@property (nonatomic) unsigned long long iTunesID;
@property (nonatomic, retain) MPMediaItem *iTunesMediaItem;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) bool isSmartMusic;
@property (nonatomic, readonly) bool isiTunesMusic;
@property (nonatomic, readonly) long long mood;
@property (nonatomic, readonly) id songID;
@property (nonatomic, readonly) NSString *songName;

+ (id)availableSmartSongs;
+ (id)featuredSmartSongsForMood:(long long)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_fetchMediaItemForMediaID:(unsigned long long)arg1;
- (id)artistName;
- (id)artworkPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fetchSmartSongArtwork;
- (id)fmSong;
- (id)genres;
- (unsigned long long)hash;
- (unsigned long long)iTunesID;
- (id)iTunesMediaItem;
- (id)initWithSmartMusicID:(id)arg1;
- (id)initWithiTunesMusicID:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (bool)isSmartMusic;
- (bool)isiTunesMusic;
- (long long)mood;
- (long long)moodForMoodString:(id)arg1;
- (id)previewPlayerItemForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 normalizedVolume:(double*)arg2;
- (void)setFmSong:(id)arg1;
- (void)setITunesID:(unsigned long long)arg1;
- (void)setITunesMediaItem:(id)arg1;
- (id)songID;
- (id)songName;

@end
