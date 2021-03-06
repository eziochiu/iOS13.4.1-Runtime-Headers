/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VEKProduction : VEKPipeline <NSCopying, NSSecureCoding, PosterDataProtocol> {
    VEKBlueprint * _blueprint;
    VEKProduction_MiroMemory_Bridge * _bridge;
    PHAssetCollection * _collection;
    bool  _isPending;
    PHAsset * _keyAsset;
    double  _maxDuration;
    NSDate * _memoryViewedDate;
    double  _requestedDuration;
    NSString * _requestedMood;
    NSString * _subtitle;
    NSSet * _suggestions;
    NSString * _title;
}

@property (nonatomic, retain) VEKBlueprint *blueprint;
@property (nonatomic, retain) VEKProduction_MiroMemory_Bridge *bridge;
@property (nonatomic, readonly) PHAssetCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPending;
@property (nonatomic, copy) PHAsset *keyAsset;
@property (nonatomic) double maxDuration;
@property (nonatomic, retain) NSDate *memoryViewedDate;
@property (nonatomic) double requestedDuration;
@property (nonatomic, retain) NSString *requestedMood;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) NSSet *suggestions;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blueprint;
- (id)bridge;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)exportWithPresets:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)fontName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPending;
- (id)keyAsset;
- (void)makePlayerItemWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)makeProjectWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (double)maxDuration;
- (id)memoryViewedDate;
- (long long)pickedItemCount;
- (double)requestedDuration;
- (id)requestedMood;
- (void)setBlueprint:(id)arg1;
- (void)setBridge:(id)arg1;
- (void)setIsPending:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setMaxDuration:(double)arg1;
- (void)setMemoryViewedDate:(id)arg1;
- (void)setRequestedDuration:(double)arg1;
- (void)setRequestedMood:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)suggestions;
- (id)title;

@end
