/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXProgrammaticNavigationDestination : NSObject {
    <PXDisplayAsset> * _asset;
    <PXDisplayAssetCollection> * _assetCollection;
    long long  _assetCollectionSubtype;
    long long  _assetCollectionType;
    NSString * _assetCollectionUUID;
    NSString * _assetLocalIdentifier;
    NSString * _assetUUID;
    long long  _revealMode;
    long long  _type;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) long long assetCollectionSubtype;
@property (nonatomic, readonly) long long assetCollectionType;
@property (nonatomic, readonly, copy) NSString *assetCollectionUUID;
@property (nonatomic, readonly, copy) NSString *assetLocalIdentifier;
@property (nonatomic, readonly, copy) NSString *assetUUID;
@property (nonatomic, readonly) long long revealMode;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)asset;
- (id)assetCollection;
- (long long)assetCollectionSubtype;
- (long long)assetCollectionType;
- (id)assetCollectionUUID;
- (id)assetLocalIdentifier;
- (id)assetUUID;
- (id)description;
- (id)initWithObject:(id)arg1 revealMode:(long long)arg2;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2 assetUUID:(id)arg3 assetCollectionUUID:(id)arg4;
- (id)initWithURL:(id)arg1;
- (long long)revealMode;
- (long long)type;

@end
