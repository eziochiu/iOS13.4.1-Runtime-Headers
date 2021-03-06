/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFHKSampleContentItem : WFContentItem <WFContentItemClass>

+ (id)contentCategories;
+ (id)countDescription;
+ (id)filterDescription;
+ (bool)hasLibrary;
+ (id)itemWithQuantitySample:(id)arg1;
+ (id)itemWithQuantitySample:(id)arg1 unit:(id)arg2;
+ (id)itemWithQuantitySamples:(id)arg1;
+ (id)itemWithQuantitySamples:(id)arg1 unit:(id)arg2;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (bool)canGenerateRepresentationForType:(id)arg1;
- (id)categorySample;
- (id)categorySampleValue;
- (id)duration;
- (id)endDate;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (id)quantitySample;
- (id)quantitySampleContainer;
- (id)readableTypeIdentifier;
- (id)sampleValue;
- (id)sourceName;
- (id)startDate;
- (id)unit;

@end
