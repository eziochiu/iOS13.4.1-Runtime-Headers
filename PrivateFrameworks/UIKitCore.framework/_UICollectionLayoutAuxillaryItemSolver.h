/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutAuxillaryItemSolver : NSObject {
    <_UICollectionLayoutAuxillaryHosting> * _auxillaryHost;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSSet * _elementKinds;
    NSDictionary * _enrolledSupplementaryFramesDict;
    NSArray * _frames;
    bool  _hasEstimatedSizes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _hostContentOffset;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _hostContentSizeInsets;
    NSArray * _memoizedAuxillaryItems;
    long long  _memoizedSupplementaryKind;
    NSIndexSet * _pinnedSupplementaryIndexes;
    _UICollectionLayoutAuxillaryOffsets * _supplementariesThatCanAffectContentSize;
    NSDictionary * _supplementaryFramesKeyedByKindIndex;
    _UIRTree * _supplementaryItemGeometricIndexer;
}

@property (nonatomic) <_UICollectionLayoutAuxillaryHosting> *auxillaryHost;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) bool contentSizeDiffersFromHostContentSize;
@property (nonatomic, readonly) NSSet *elementKinds;
@property (nonatomic, retain) NSDictionary *enrolledSupplementaryFramesDict;
@property (nonatomic, retain) NSArray *frames;
@property (nonatomic) bool hasEstimatedSizes;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } hostContentOffset;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hostContentSizeInsets;
@property (nonatomic, readonly) NSArray *memoizedSupplementaryItems;
@property (nonatomic, readonly) long long memoizedSupplementaryKind;
@property (nonatomic, retain) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic, retain) _UICollectionLayoutAuxillaryOffsets *supplementariesThatCanAffectContentSize;
@property (nonatomic, readonly) NSArray *supplementaryFrames;
@property (nonatomic, retain) NSDictionary *supplementaryFramesKeyedByKindIndex;
@property (nonatomic, retain) _UIRTree *supplementaryItemGeometricIndexer;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_computeContentSizeForEmptyHostContentSizeForContainer:(id)arg1 hostContentSize:(struct CGSize { double x1; double x2; })arg2 layoutAxis:(unsigned long long)arg3 supplementaryFrames:(id)arg4 preferredSizes:(id)arg5 layoutRTL:(bool)arg6 supplementaryKind:(long long)arg7;
- (id)_effectiveBoundarySupplementrayItem:(id)arg1 forLayoutAxis:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSupplementaryItem:(id)arg1 container:(id)arg2 contentSize:(struct CGSize { double x1; double x2; })arg3 frameOffset:(struct CGPoint { double x1; double x2; })arg4 applyPinning:(bool)arg5 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 preferredSizes:(id)arg7 preferredIndex:(long long)arg8 layoutRTL:(bool)arg9;
- (struct CGSize { double x1; double x2; })_largestPossibleHostContentSizeForContainerSize:(struct CGSize { double x1; double x2; })arg1 layoutAxis:(unsigned long long)arg2;
- (id)_normalizedFramesAlongLayoutAxisForFrames:(id)arg1 layoutAxis:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })_offsetForContentSizeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frameOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_rearrangeSupplementaryItems:(id)arg1 byUpdatingPinning:(bool)arg2 forVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 frameOffset:(struct CGPoint { double x1; double x2; })arg4;
- (id)_rearrangedFramesForFrames:(id)arg1 container:(id)arg2 contentSize:(struct CGSize { double x1; double x2; })arg3 applyPinning:(bool)arg4 frameOffset:(struct CGPoint { double x1; double x2; })arg5 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 preferredSizes:(id)arg7 layoutRTL:(bool)arg8 supplementaryKind:(long long)arg9;
- (struct CGSize { double x1; double x2; })_requiredContentSizeForSupplementaryFrames:(id)arg1 forLayoutAxis:(unsigned long long)arg2 containerSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_solveForPinning:(bool)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateGeometricIndexer;
- (id)auxillaryHost;
- (struct CGSize { double x1; double x2; })contentSize;
- (bool)contentSizeDiffersFromHostContentSize;
- (id)elementKinds;
- (id)enrolledSupplementaryFramesDict;
- (id)frames;
- (bool)hasEstimatedSizes;
- (struct CGPoint { double x1; double x2; })hostContentOffset;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hostContentSizeInsets;
- (id)initWithAuxillaryHost:(id)arg1;
- (id)memoizedSupplementaryItems;
- (long long)memoizedSupplementaryKind;
- (id)pinnedSupplementaryIndexes;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frameOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)resolve;
- (void)resolveSupplementaryItemsForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAuxillaryHost:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEnrolledSupplementaryFramesDict:(id)arg1;
- (void)setFrames:(id)arg1;
- (void)setHasEstimatedSizes:(bool)arg1;
- (void)setHostContentSizeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPinnedSupplementaryIndexes:(id)arg1;
- (void)setSupplementariesThatCanAffectContentSize:(id)arg1;
- (void)setSupplementaryFramesKeyedByKindIndex:(id)arg1;
- (void)setSupplementaryItemGeometricIndexer:(id)arg1;
- (id)supplementariesThatCanAffectContentSize;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(struct CGPoint { double x1; double x2; })arg3;
- (id)supplementaryFrames;
- (id)supplementaryFramesKeyedByKindIndex;
- (id)supplementaryFramesWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)supplementaryItemGeometricIndexer;
- (id)visualDescription;

@end
