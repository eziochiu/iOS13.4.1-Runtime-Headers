/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <_UICollectionLayoutAuxillaryHosting, _UICollectionLayoutSectionSolver> {
    <NSCollectionLayoutContainer> * _container;
    unsigned long long  _containerLayoutAxis;
    long long  _frameCount;
    unsigned long long  _layoutAxis;
    bool  _layoutRTL;
    NSCollectionLayoutSection * _layoutSection;
    <NSCollectionLayoutContainer> * _memoizedSupplementaryHostContainer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _orthogonalOffset;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _orthogonalScrollingPrefetchingUnitVector;
    <_UICollectionPreferredSizes> * _preferredSizes;
    _UICollectionLayoutSupplementaryRegistrar * _sectionSupplementaryRegistrar;
    _UICollectionLayoutAuxillaryItemSolver * _sectionSupplementarySolution;
    bool  _shouldAdjustContentSizeForPartialLastGroupSolution;
    _UICollectionLayoutSolutionState * _solutionState;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) <NSCollectionLayoutContainer> *container;
@property (nonatomic) unsigned long long containerLayoutAxis;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } effectiveContentFrame;
@property (nonatomic, readonly) long long frameCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long layoutAxis;
@property (nonatomic, readonly) bool layoutRTL;
@property (nonatomic, readonly) NSCollectionLayoutSection *layoutSection;
@property (nonatomic, retain) <NSCollectionLayoutContainer> *memoizedSupplementaryHostContainer;
@property (nonatomic) struct CGPoint { double x1; double x2; } orthogonalOffset;
@property (nonatomic) struct CGVector { double x1; double x2; } orthogonalScrollingPrefetchingUnitVector;
@property (nonatomic, readonly) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic, readonly) <_UICollectionPreferredSizes> *preferredSizes;
@property (nonatomic, retain) _UICollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar;
@property (nonatomic, retain) _UICollectionLayoutAuxillaryItemSolver *sectionSupplementarySolution;
@property (nonatomic) bool shouldAdjustContentSizeForPartialLastGroupSolution;
@property (nonatomic, retain) _UICollectionLayoutSolutionState *solutionState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 bookmarks:(id)arg2;
- (void)_configureInitialOrthogonalPrefetchingUnitVector;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)arg1;
- (id)_indexesOfBookmarksAffectedByResolveItems:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 insets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 layoutAxis:(unsigned long long)arg3;
- (id)_sectionContainer;
- (void)_setOrthogonalOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_solveWithParameters:(id)arg1;
- (void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)arg1 fromBookmark:(id)arg2;
- (id)allSupplementaryKeys;
- (id)auxillaryHostAuxillaryItems;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostContainer;
- (struct CGSize { double x1; double x2; })auxillaryHostContentSize;
- (unsigned long long)auxillaryHostLayoutAxis;
- (struct CGSize { double x1; double x2; })auxillaryHostPinningContentSize;
- (id)auxillaryHostPreferredSizes;
- (bool)auxillaryHostShouldLayoutRTL;
- (id)auxillaryHostSupplementaryEnroller;
- (id)container;
- (unsigned long long)containerLayoutAxis;
- (struct CGSize { double x1; double x2; })contentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveContentFrame;
- (long long)frameCount;
- (id)frameForIndex:(long long)arg1;
- (id)initWithLayoutSection:(id)arg1;
- (unsigned long long)layoutAxis;
- (bool)layoutRTL;
- (id)layoutSection;
- (id)memoizedSupplementaryHostContainer;
- (struct CGPoint { double x1; double x2; })orthogonalOffset;
- (struct CGVector { double x1; double x2; })orthogonalScrollingPrefetchingUnitVector;
- (id)pinnedSupplementaryIndexes;
- (id)preferredSizes;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frameOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;
- (id)sectionSupplementaryFrameForIndex:(long long)arg1;
- (id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;
- (id)sectionSupplementaryRegistrar;
- (id)sectionSupplementarySolution;
- (void)setContainerLayoutAxis:(unsigned long long)arg1;
- (void)setMemoizedSupplementaryHostContainer:(id)arg1;
- (void)setOrthogonalOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOrthogonalScrollingPrefetchingUnitVector:(struct CGVector { double x1; double x2; })arg1;
- (void)setSectionSupplementaryRegistrar:(id)arg1;
- (void)setSectionSupplementarySolution:(id)arg1;
- (void)setShouldAdjustContentSizeForPartialLastGroupSolution:(bool)arg1;
- (void)setSolutionState:(id)arg1;
- (bool)shouldAdjustContentSizeForPartialLastGroupSolution;
- (id)solutionState;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(bool)arg6;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (id)supplementaryKeysAssociatedWithItemAtIndex:(long long)arg1;
- (id)traitCollection;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)visualDescription;

@end
