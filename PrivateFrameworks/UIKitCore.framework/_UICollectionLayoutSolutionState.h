/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutSolutionState : NSObject {
    NSDictionary * _auxillaryRangeIndexerKindDict;
    NSArray * _bookmarks;
    _UIRTree * _geometricIndexer;
    _UIOrderedRangeIndexer * _itemRangeIndexer;
    _UICollectionLayoutSectionGeometryTranslator * _sectionGeometryTranslator;
}

@property (nonatomic, readonly) NSDictionary *auxillaryRangeIndexerKindDict;
@property (nonatomic, readonly) NSArray *bookmarks;
@property (nonatomic, readonly) _UIRTree *geometricIndexer;
@property (nonatomic, readonly) _UIOrderedRangeIndexer *itemRangeIndexer;
@property (nonatomic, readonly) _UICollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator;

- (void).cxx_destruct;
- (id)auxillaryRangeIndexerKindDict;
- (id)bookmarks;
- (id)copyWithGeometryConverter:(id)arg1;
- (id)description;
- (id)geometricIndexer;
- (id)initWithGeometryTranslator:(id)arg1 bookmarks:(id)arg2 geometricIndexer:(id)arg3 itemRangeIndexer:(id)arg4 auxillaryRangeIndexerDict:(id)arg5;
- (id)itemRangeIndexer;
- (id)sectionGeometryTranslator;

@end