/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryEntityTranslationContext : NSObject {
    NSArray * _allowedEntityIdentifiers;
    unsigned long long  _filteringOptions;
    MPMediaLibrary * _mediaLibrary;
    MPModelKind * _modelKind;
    bool  _multiQuery;
    NSString * _personID;
    NSArray * _scopedContainers;
}

@property (nonatomic, retain) NSArray *allowedEntityIdentifiers;
@property (nonatomic) unsigned long long filteringOptions;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) MPModelKind *modelKind;
@property (getter=isMultiQuery, nonatomic) bool multiQuery;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic, retain) NSArray *scopedContainers;

- (void).cxx_destruct;
- (id)allowedEntityIdentifiers;
- (unsigned long long)filteringOptions;
- (bool)isMultiQuery;
- (id)mediaLibrary;
- (id)modelKind;
- (id)personID;
- (id)scopedContainers;
- (void)setAllowedEntityIdentifiers:(id)arg1;
- (void)setFilteringOptions:(unsigned long long)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setModelKind:(id)arg1;
- (void)setMultiQuery:(bool)arg1;
- (void)setPersonID:(id)arg1;
- (void)setScopedContainers:(id)arg1;

@end
