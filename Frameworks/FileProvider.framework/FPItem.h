/* Generated by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPItem : NSObject <NSCopying, NSFileProviderItem, NSFileProviderItemDecorating, NSFileProviderItem_Private, NSSecureCoding> {
    unsigned long long  _capabilities;
    NSNumber * _childItemCount;
    NSString * _cloudContainerIdentifier;
    NSString * _containerDisplayName;
    NSDate * _contentModificationDate;
    NSDate * _creationDate;
    bool  _dataless;
    NSArray * _decorations;
    NSString * _displayName;
    NSNumber * _documentSize;
    NSString * _domainIdentifier;
    bool  _downloaded;
    bool  _downloading;
    NSError * _downloadingError;
    unsigned long long  _enumerationOrigin;
    bool  _excludedFromSync;
    NSDictionary * _extendedAttributes;
    NSNumber * _favoriteRank;
    NSString * _fileSystemFilename;
    NSURL * _fileURL;
    NSString * _filename;
    <NSFileProviderItemFlags> * _flags;
    NSString * _formerIdentifier;
    NSString * _fp_appContainerBundleIdentifier;
    bool  _fp_lastModifiedByCurrentUser;
    NSString * _fp_parentDomainIdentifier;
    NSData * _fsID;
    NSNumber * _hasUnresolvedConflicts;
    NSArray * _hierarchyPath;
    NSString * _hierarchyPathKey;
    bool  _inPinnedFolder;
    bool  _isContainer;
    bool  _isContainerPristine;
    NSNumber * _isDownloadRequested;
    bool  _isUbiquitous;
    NSString * _itemIdentifier;
    NSFileProviderItemVersion * _itemVersion;
    NSDate * _lastUsedDate;
    NSPersonNameComponents * _mostRecentEditorNameComponents;
    bool  _mostRecentVersionDownloaded;
    bool  _offline;
    NSPersonNameComponents * _ownerNameComponents;
    NSString * _parentItemIdentifier;
    bool  _pending;
    bool  _pinned;
    NSString * _placeholdIdentifier;
    NSString * _preformattedMostRecentEditorName;
    NSString * _preformattedOwnerName;
    NSProgress * _progress;
    NSString * _providerID;
    bool  _recursivelyDownloaded;
    bool  _shared;
    bool  _sharedByCurrentUser;
    NSString * _sharingPermissions;
    NSString * _spotlightSubDomainIdentifier;
    unsigned long long  _state;
    bool  _supportsMostRecentVersionDownloaded;
    NSArray * _tags;
    bool  _topLevelSharedItem;
    bool  _trashed;
    NSString * _typeIdentifier;
    bool  _uploaded;
    bool  _uploading;
    NSError * _uploadingError;
    FPSandboxingURLWrapper * _urlWrapper;
    NSDictionary * _userInfo;
    NSData * _versionIdentifier;
}

@property (nonatomic, readonly) NSDate *_doc_dateForSortingRecents;
@property (getter=isActionable, nonatomic, readonly) bool actionable;
@property (nonatomic, readonly, copy) NSString *appContainerBundleIdentifier;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic, copy) NSNumber *childItemCount;
@property (nonatomic, copy) NSString *cloudContainerIdentifier;
@property (getter=isCloudItem, nonatomic, readonly) bool cloudItem;
@property (nonatomic, retain) NSString *containerDisplayName;
@property (nonatomic, copy) NSDate *contentModificationDate;
@property (nonatomic, readonly) NSProgress *copyingProgress;
@property (nonatomic, copy) NSDate *creationDate;
@property (getter=isDataless, nonatomic) bool dataless;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *decorations;
@property (nonatomic, readonly) unsigned long long depthInHierarchy;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSNumber *documentSize;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (getter=isDownloadRequested, readonly, copy) NSNumber *downloadRequested;
@property (getter=isDownloaded, nonatomic) bool downloaded;
@property (getter=isDownloading, nonatomic) bool downloading;
@property (nonatomic, copy) NSError *downloadingError;
@property (nonatomic, readonly) NSProgress *downloadingProgress;
@property (nonatomic) unsigned long long enumerationOrigin;
@property (getter=isExcludedFromSync, nonatomic) bool excludedFromSync;
@property (nonatomic, retain) NSDictionary *extendedAttributes;
@property (nonatomic, copy) NSNumber *favoriteRank;
@property (nonatomic, copy) NSString *fileSystemFilename;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, retain) <NSFileProviderItemFlags> *flags;
@property (nonatomic, readonly) unsigned long long folderType;
@property (nonatomic, retain) NSString *formerIdentifier;
@property (nonatomic, readonly) FPItemID *formerItemID;
@property (getter=fp_isAddedByCurrentUser, nonatomic, readonly) bool fp_addedByCurrentUser;
@property (nonatomic, readonly) NSPersonNameComponents *fp_addedByNameComponents;
@property (nonatomic, copy) NSString *fp_appContainerBundleIdentifier;
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (readonly, copy) NSString *fp_cloudContainerIdentifier;
@property (nonatomic, copy) NSString *fp_displayName;
@property (nonatomic, readonly) NSString *fp_domainIdentifier;
@property (readonly) bool fp_isContainer;
@property (readonly) bool fp_isContainerPristine;
@property (getter=fp_isLastModifiedByCurrentUser, nonatomic) bool fp_lastModifiedByCurrentUser;
@property (getter=fp_isLastModifiedByCurrentUser, nonatomic, readonly) bool fp_lastModifiedByCurrentUser;
@property (nonatomic, retain) NSString *fp_parentDomainIdentifier;
@property (nonatomic, readonly) NSString *fp_spotlightDomainIdentifier;
@property (getter=fp_isUbiquitous, readonly) bool fp_ubiquitous;
@property (nonatomic, retain) NSData *fsID;
@property (nonatomic, retain) NSNumber *hasUnresolvedConflicts;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, readonly) bool hidden;
@property (nonatomic, retain) NSArray *hierarchyPath;
@property (nonatomic, readonly) NSString *hierarchyPathKey;
@property (getter=isInPinnedFolder, nonatomic) bool inPinnedFolder;
@property (nonatomic) bool isContainer;
@property (nonatomic, readonly) bool isContainer;
@property (nonatomic) bool isContainerPristine;
@property (nonatomic, readonly) bool isContainerPristine;
@property (nonatomic, readonly) NSNumber *isDownloadRequested;
@property (nonatomic, readonly) bool isExternalDownloadPlaceholder;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) bool isPackage;
@property (nonatomic, readonly) NSArray *itemDecorations;
@property (nonatomic, readonly) FPItemID *itemID;
@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (nonatomic, retain) NSFileProviderItemVersion *itemVersion;
@property (nonatomic, copy) NSDate *lastUsedDate;
@property (nonatomic, readonly) NSString *localizedSharingStatusString;
@property (nonatomic, retain) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (getter=isMostRecentVersionDownloaded, nonatomic) bool mostRecentVersionDownloaded;
@property (getter=isOffline, nonatomic) bool offline;
@property (nonatomic, retain) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly) FPItemID *parentItemID;
@property (nonatomic, readonly, copy) NSString *parentItemIdentifier;
@property (getter=isPending, nonatomic) bool pending;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic) NSString *placeholdIdentifier;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, retain) NSString *preformattedMostRecentEditorName;
@property (nonatomic, retain) NSString *preformattedOwnerName;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly, copy) NSString *providerDomainID;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (getter=isReadable, nonatomic, readonly) bool readable;
@property (getter=isRecursivelyDownloaded, nonatomic) bool recursivelyDownloaded;
@property (getter=isShared, nonatomic) bool shared;
@property (getter=isSharedByCurrentUser, nonatomic) bool sharedByCurrentUser;
@property (nonatomic, retain) NSString *sharingPermissions;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, retain) NSString *spotlightSubDomainIdentifier;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsMostRecentVersionDownloaded;
@property (nonatomic, readonly, copy) NSData *tagData;
@property (nonatomic, copy) NSArray *tags;
@property (getter=isTopLevelSharedItem, nonatomic) bool topLevelSharedItem;
@property (getter=isTrashed, nonatomic) bool trashed;
@property (nonatomic, copy) NSString *typeIdentifier;
@property (getter=isUbiquitous, nonatomic) bool ubiquitous;
@property (getter=isUploaded, nonatomic) bool uploaded;
@property (getter=isUploading, nonatomic) bool uploading;
@property (nonatomic, copy) NSError *uploadingError;
@property (nonatomic, readonly) NSProgress *uploadingProgress;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (nonatomic, retain) NSData *versionIdentifier;
@property (getter=isWritable, nonatomic, readonly) bool writable;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)allUbiquitousResourceKeys;
+ (id)archivePlaceholderForItem:(id)arg1 underParent:(id)arg2 inProviderDomainID:(id)arg3;
+ (id)fp_minimalAttributesForEviction;
+ (id)fp_minimalAttributesForEvictionPriority;
+ (id)fp_queryFetchAttributes;
+ (id)generatePlaceholderIdentifier;
+ (id)generatePlaceholderIdentifierWithOriginalID:(id)arg1;
+ (id)genericArchivePlaceholderUnderParent:(id)arg1 inProviderDomainID:(id)arg2;
+ (id)placeholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4;
+ (id)placeholderWithName:(id)arg1 isFolder:(bool)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;
+ (id)placeholderWithName:(id)arg1 typeIdentifier:(id)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void*)_coreSpotlightAttributeForKey:(id)arg1;
- (id)_downloadingStatus;
- (id)_sharedByDecorationType;
- (id)appContainerBundleIdentifier;
- (unsigned long long)capabilities;
- (id)childItemCount;
- (id)cloudContainerIdentifier;
- (id)containerDisplayName;
- (id)contentModificationDate;
- (id)copyAsPending;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyingProgress;
- (id)creationDate;
- (id)decorations;
- (unsigned long long)depthInHierarchy;
- (id)description;
- (id)description:(bool)arg1;
- (id)displayName;
- (id)documentSize;
- (id)domainIdentifier;
- (id)downloadingError;
- (id)downloadingProgress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)enumerationOrigin;
- (id)extendedAttributes;
- (id)favoriteRank;
- (id)fieldDifferencesWithItem:(id)arg1;
- (id)fileSystemFilename;
- (id)fileURL;
- (id)filename;
- (id)flags;
- (unsigned long long)folderType;
- (id)formerIdentifier;
- (id)formerItemID;
- (id)fp_addedByNameComponents;
- (id)fp_appContainerBundleIdentifier;
- (id)fp_cloudContainerClientBundleIdentifiers;
- (id)fp_cloudContainerIdentifier;
- (id)fp_cs_uniqueIdentifier;
- (id)fp_displayName;
- (id)fp_domainIdentifier;
- (bool)fp_isAddedByCurrentUser;
- (bool)fp_isContainer;
- (bool)fp_isContainerPristine;
- (bool)fp_isLastModifiedByCurrentUser;
- (bool)fp_isUbiquitous;
- (id)fp_parentDomainIdentifier;
- (id)fp_spotlightDomainIdentifier;
- (id)fsID;
- (id)hasUnresolvedConflicts;
- (unsigned long long)hash;
- (id)hierarchyPath;
- (id)hierarchyPathKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithProviderDomainID:(id)arg1 itemIdentifier:(id)arg2 parentItemIdentifier:(id)arg3 filename:(id)arg4 isDirectory:(bool)arg5;
- (id)initWithProviderDomainID:(id)arg1 itemIdentifier:(id)arg2 parentItemIdentifier:(id)arg3 filename:(id)arg4 typeIdentifier:(id)arg5;
- (id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 parentItemIdentifier:(id)arg4 filename:(id)arg5 isDirectory:(bool)arg6;
- (id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 parentItemIdentifier:(id)arg4 filename:(id)arg5 typeIdentifier:(id)arg6;
- (id)initWithSearchableItem:(id)arg1;
- (id)initWithVendorItem:(id)arg1 provider:(id)arg2 domain:(id)arg3 extensionCapabilities:(unsigned long long)arg4 useFPFS:(bool)arg5;
- (bool)isActionable;
- (bool)isCloudItem;
- (bool)isContainer;
- (bool)isContainerPristine;
- (bool)isDataless;
- (id)isDownloadRequested;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (bool)isExcludedFromSync;
- (bool)isExternalDownloadPlaceholder;
- (bool)isFolder;
- (bool)isInPinnedFolder;
- (bool)isMostRecentVersionDownloaded;
- (bool)isOffline;
- (bool)isPackage;
- (bool)isPending;
- (bool)isPinned;
- (bool)isPlaceholder;
- (bool)isReadable;
- (bool)isRecursivelyDownloaded;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTopLevelSharedItem;
- (bool)isTrashed;
- (bool)isUbiquitous;
- (bool)isUploaded;
- (bool)isUploading;
- (bool)isWritable;
- (id)itemDecorations;
- (id)itemID;
- (id)itemIdentifier;
- (id)itemVersion;
- (id)lastUsedDate;
- (id)localizedSharingStatusString;
- (long long)localizedStandardTagsCompare:(id)arg1;
- (id)mostRecentEditorNameComponents;
- (void)overrideFields:(id)arg1 ofItem:(id)arg2;
- (id)ownerNameComponents;
- (id)parentItemID;
- (id)parentItemIdentifier;
- (id)placeholdIdentifier;
- (id)preformattedMostRecentEditorName;
- (id)preformattedOwnerName;
- (id)progress;
- (id)providerDomainID;
- (id)providerID;
- (id)providerIdentifier;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setChildItemCount:(id)arg1;
- (void)setCloudContainerIdentifier:(id)arg1;
- (void)setContainerDisplayName:(id)arg1;
- (void)setContentModificationDate:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDataless:(bool)arg1;
- (void)setDecorations:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDocumentSize:(id)arg1;
- (void)setDownloaded:(bool)arg1;
- (void)setDownloading:(bool)arg1;
- (void)setDownloadingError:(id)arg1;
- (void)setEnumerationOrigin:(unsigned long long)arg1;
- (void)setExcludedFromSync:(bool)arg1;
- (void)setExtendedAttributes:(id)arg1;
- (void)setFavoriteRank:(id)arg1;
- (void)setFileSystemFilename:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setFormerIdentifier:(id)arg1;
- (void)setFp_SpotlightDomainIdentifier:(id)arg1;
- (void)setFp_appContainerBundleIdentifier:(id)arg1;
- (void)setFp_displayName:(id)arg1;
- (void)setFp_lastModifiedByCurrentUser:(bool)arg1;
- (void)setFp_parentDomainIdentifier:(id)arg1;
- (void)setFsID:(id)arg1;
- (void)setHasUnresolvedConflicts:(id)arg1;
- (void)setHierarchyPath:(id)arg1;
- (void)setInPinnedFolder:(bool)arg1;
- (void)setIsContainer:(bool)arg1;
- (void)setIsContainerPristine:(bool)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemVersion:(id)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setMostRecentEditorNameComponents:(id)arg1;
- (void)setMostRecentVersionDownloaded:(bool)arg1;
- (void)setOffline:(bool)arg1;
- (void)setOwnerNameComponents:(id)arg1;
- (void)setParentItemIdentifier:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)setPinned:(bool)arg1;
- (void)setPlaceholdIdentifier:(id)arg1;
- (void)setPreformattedMostRecentEditorName:(id)arg1;
- (void)setPreformattedOwnerName:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProviderDomainID:(id)arg1;
- (void)setProviderID:(id)arg1;
- (void)setRecursivelyDownloaded:(bool)arg1;
- (void)setShared:(bool)arg1;
- (void)setSharedByCurrentUser:(bool)arg1;
- (void)setSharingPermissions:(id)arg1;
- (void)setSpotlightSubDomainIdentifier:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSupportsMostRecentVersionDownloaded:(bool)arg1;
- (void)setTags:(id)arg1;
- (void)setTopLevelSharedItem:(bool)arg1;
- (void)setTrashed:(bool)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUbiquitous:(bool)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setUploading:(bool)arg1;
- (void)setUploadingError:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (id)sharingPermissions;
- (id)spotlightSubDomainIdentifier;
- (unsigned long long)state;
- (id)strippedCopy;
- (bool)supportsMostRecentVersionDownloaded;
- (id)tagData;
- (id)tags;
- (id)toSearchableItem;
- (id)typeIdentifier;
- (id)ubiquitousResourceKeysDiffAgainstItem:(id)arg1;
- (id)uploadingError;
- (id)uploadingProgress;
- (id)userInfo;
- (id)versionIdentifier;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

- (id)_doc_dateForSortingRecents;
- (long long)_doc_fileTypeCompareWithItem:(id)arg1;
- (id)sourceIdentifier;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

- (bool)doc_isSMBSharepoint;
- (unsigned long long)doc_thumbnailFolderType;

@end
