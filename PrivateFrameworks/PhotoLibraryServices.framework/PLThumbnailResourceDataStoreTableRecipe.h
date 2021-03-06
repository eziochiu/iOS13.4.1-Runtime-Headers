/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailResourceDataStoreTableRecipe : PLResourceRecipe {
    unsigned int  _recipeID;
}

@property (nonatomic) unsigned int recipeID;

- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)codecInContext:(id)arg1;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)description;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id*)arg5 completion:(id /* block */)arg6;
- (id)initWithRecipeID:(unsigned int)arg1;
- (unsigned int)recipeID;
- (void)setRecipeID:(unsigned int)arg1;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)utiInContext:(id)arg1;

@end
