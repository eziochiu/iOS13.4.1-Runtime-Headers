/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFNoteContentItem : WFContentItem

@property (nonatomic, readonly) INNote *note;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)defaultSourceForRepresentation:(id)arg1;
+ (bool)hasLibrary;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)typeDescription;

- (id)body;
- (id)creationDate;
- (id)fullText;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)modificationDate;
- (id)note;

@end