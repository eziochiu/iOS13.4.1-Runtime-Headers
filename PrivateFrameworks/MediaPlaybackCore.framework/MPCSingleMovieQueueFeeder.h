/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCSingleMovieQueueFeeder : MPQueueFeeder <MPCQueueControllerDataSource> {
    MPMovie * _movie;
    NSString * _movieIdentifier;
    <MPMutableIdentifierListSection> * _section;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) bool containsLiveStream;
@property (nonatomic, readonly) bool containsTransportableContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMovie *movie;
@property (nonatomic, retain) NSString *movieIdentifier;
@property (nonatomic, readonly) <MPMutableIdentifierListSection> *section;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)containsLiveStream;
- (bool)containsTransportableContent;
- (id)init;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(id /* block */)arg2;
- (id)movie;
- (id)movieIdentifier;
- (id)playbackInfoForItem:(id)arg1;
- (void)reloadSection:(id)arg1 completion:(id /* block */)arg2;
- (id)section;
- (bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (void)setMovie:(id)arg1;
- (void)setMovieIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end