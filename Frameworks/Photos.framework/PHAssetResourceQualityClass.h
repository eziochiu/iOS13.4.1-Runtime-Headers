/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceQualityClass : NSObject {
    unsigned long long  _backingCPLResourceType;
    PLImageFormat * _backingImageFormat;
    bool  _croppedToSquare;
    unsigned long long  _maxNumberOfPixelsIfSquare;
    unsigned long long  _maxSideLengthIfSquare;
    bool  _table;
    bool  _thumbnail;
    bool  _video;
}

@property (nonatomic) unsigned long long backingCPLResourceType;
@property (nonatomic, retain) PLImageFormat *backingImageFormat;
@property (getter=isCroppedToSquare, nonatomic, readonly) bool croppedToSquare;
@property (nonatomic, readonly) unsigned long long maxNumberOfPixelsIfSquare;
@property (nonatomic, readonly) unsigned long long maxSideLengthIfSquare;
@property (getter=isTable, nonatomic, readonly) bool table;
@property (getter=isThumbnail, nonatomic, readonly) bool thumbnail;
@property (getter=isVideo, nonatomic, readonly) bool video;

+ (id)_cplDerivativeAssetResourceQualityClasses;
+ (id)_thumbnailAssetResourceQualityClassesForCurrentDevice;
+ (id)allQualityClassesMatchingPredicate:(id)arg1;
+ (id)anyQualityClassMatchingPredicate:(id)arg1;
+ (id)assetResourceQualityClasses;

- (void).cxx_destruct;
- (long long)_compare:(id)arg1;
- (unsigned long long)backingCPLResourceType;
- (id)backingImageFormat;
- (id)description;
- (id)initWithCPLResourceType:(unsigned long long)arg1;
- (id)initWithThumbnailFormat:(id)arg1;
- (bool)isCroppedToSquare;
- (bool)isTable;
- (bool)isThumbnail;
- (bool)isVideo;
- (unsigned long long)maxNumberOfPixelsIfSquare;
- (unsigned long long)maxSideLengthIfSquare;
- (void)preheatDataForThumbnailIndexes:(id)arg1 inLibrary:(id)arg2;
- (void)setBackingCPLResourceType:(unsigned long long)arg1;
- (void)setBackingImageFormat:(id)arg1;
- (id)tableThumbnailDataForAsset:(id)arg1 dataSpecification:(struct PHAssetResourceTableDataSpecification { int x1; int x2; int x3; int x4; int x5; int x6; }*)arg2;

@end
