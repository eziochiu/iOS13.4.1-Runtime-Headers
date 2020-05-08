/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTColorPreset : NSObject {
    long long  _category;
    NSArray * _colors;
    NSDictionary * _derivedColors;
    NSArray * _materials;
    NSString * _name;
    UIColor * _previewAccentColorMax;
    UIColor * _previewAccentColorMid;
    UIColor * _previewAccentColorMin;
    unsigned long long  _previewAccentType;
    UIColor * _previewColorMax;
    UIColor * _previewColorMid;
    UIColor * _previewColorMin;
    float  _variation;
}

@property (readonly) long long category;
@property (readonly) bool isNatural;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *name;
@property (readonly) UIImage *thumbnail;
@property (readonly) float variation;

+ (id)colorPresetWithName:(id)arg1 category:(long long)arg2;
+ (id)colorPresetWithName:(id)arg1 category:(long long)arg2 colorIndex:(unsigned long long)arg3 variation:(float)arg4;
+ (id)colorPresetWithName:(id)arg1 category:(long long)arg2 variation:(float)arg3;
+ (id)secondaryColorPresetWithName:(id)arg1 category:(long long)arg2 variation:(float)arg3;

- (void).cxx_destruct;
- (long long)category;
- (id)colorPresetWithVariation:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedCategoriesNames;
- (id)derivedColor;
- (id)derivedColorNameForPresetCategory:(long long)arg1;
- (id)description;
- (void)didMutate;
- (id)gradientLayerForNaturalColorWithSkinColor:(id)arg1;
- (id)gradientLayerWithRangeMin:(float)arg1 max:(float)arg2;
- (id)gradientLayerWithRangeMin:(float)arg1 max:(float)arg2 withSkinColor:(id)arg3;
- (id)initWithCategory:(long long)arg1 description:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isNatural;
- (id)localizedName;
- (id)materialAtIndex:(unsigned long long)arg1;
- (unsigned long long)materialCount;
- (id)name;
- (id)previewAccentColor;
- (id)previewColor;
- (void)renderColorIntoCALayer:(id)arg1;
- (void)renderColorIntoCALayer:(id)arg1 withSkinColor:(id)arg2;
- (void)renderNaturalSkinColorIntoCALayer:(id)arg1 withSkinColor:(id)arg2;
- (void)setDerivedColors:(id)arg1;
- (bool)shouldBlendWithSkinColor;
- (id)thumbnail;
- (void)updateMaterialsIfNeeded;
- (float)variation;

@end