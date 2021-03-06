/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTEffectPickerPreviewDiskCache : NSObject {
    NSString * _cacheDirectoryPath;
}

@property (nonatomic, readonly) NSString *cacheDirectoryPath;

+ (id)cachedPathForEffect:(id)arg1 directoryPath:(id)arg2;
+ (id)createCacheAtDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)cacheDirectoryPath;
- (bool)hasPreviewForEffectID:(id)arg1;
- (id)initWithDirectory:(id)arg1;
- (void)previewForEffectID:(id)arg1 completion:(id /* block */)arg2;
- (void)savePreviewForEffectID:(id)arg1 image:(id)arg2 completion:(id /* block */)arg3;

@end
