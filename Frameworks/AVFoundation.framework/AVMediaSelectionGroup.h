/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal * _mediaSelectionGroup;
}

@property (nonatomic, readonly) bool allowsEmptySelection;
@property (nonatomic, readonly) AVMediaSelectionOption *defaultOption;
@property (nonatomic, readonly) NSArray *options;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;
+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;

- (id)_groupID;
- (id)_groupMediaCharacteristics;
- (id)_groupMediaType;
- (bool)_isStreamingGroup;
- (bool)_matchesGroupID:(id)arg1 mediaType:(id)arg2;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(bool)arg2;
- (id)_weakReference;
- (bool)allowsEmptySelection;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultOption;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)options;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)makeNowPlayingInfoLanguageOptionGroup;

@end
