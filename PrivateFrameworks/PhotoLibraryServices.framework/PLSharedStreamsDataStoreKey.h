/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSharedStreamsDataStoreKey : NSObject <PLChooserKeyProperties, PLResourceDataStoreKey> {
    NSString * _relativePath;
    unsigned int  _sharedStreamsResourceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_keyDataWithRelativePath:(id)arg1 type:(unsigned int)arg2;
+ (id)_relativeFilePathForPersonID:(id)arg1 albumID:(id)arg2 dcimDirectory:(id)arg3 fileName:(id)arg4;
+ (id)_replacementPathExtensionForType:(unsigned int)arg1;
+ (unsigned long long)dataLengthFromPreviewByte:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isDerivative;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToKey:(id)arg1;
- (id)keyData;
- (unsigned int)recipeIDForAssetID:(id)arg1;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;

@end
