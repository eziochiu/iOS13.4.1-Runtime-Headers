/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface NSCollectionLayoutSection : NSObject <NSCopying> {
    NSArray * _boundarySupplementaryItems;
    <_UICollectionLayoutSectionCallback> * _callback;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSArray * _decorationItems;
    NSDictionary * _decorationItemsDict;
    NSDictionary * _decorationItemssDict;
    NSCollectionLayoutGroup * _group;
    bool  _hasBackgroundDecorationItem;
    double  _interGroupSpacing;
    bool  _isEmptySection;
    long long  _orthogonalScrollingBehavior;
    NSIndexSet * _pinnedBoundarySupplementaryItemIndexes;
    NSIndexSet * _pinnedSupplementaryItemIndexes;
    bool  _prefersListSolver;
    bool  _supplementariesFollowContentInsets;
    NSArray * _supplementaryItems;
    NSDictionary * _supplementaryItemsDict;
    id /* block */  _visibleItemsInvalidationHandler;
}

@property (nonatomic, copy) NSArray *boundarySupplementaryItems;
@property (getter=_callback, nonatomic, readonly) <_UICollectionLayoutSectionCallback> *callback;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, copy) NSArray *decorationItems;
@property (nonatomic, readonly) NSDictionary *decorationItemssDict;
@property (nonatomic, copy) NSCollectionLayoutGroup *group;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (nonatomic, copy) NSIndexSet *pinnedSupplementaryItemIndexes;
@property (nonatomic) bool prefersListSolver;
@property (nonatomic) bool supplementariesFollowContentInsets;
@property (nonatomic, copy) NSArray *supplementaryItems;
@property (nonatomic, readonly) NSDictionary *supplementaryItemsDict;
@property (nonatomic, copy) id /* block */ visibleItemsInvalidationHandler;

+ (id)_emptySection;
+ (id)sectionWithGroup:(id)arg1;

- (void).cxx_destruct;
- (id)_auxillaryItemForElementKind:(id)arg1 category:(unsigned long long)arg2;
- (id)_callback;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (bool)_containsBackgroundDecorationItem:(id)arg1;
- (bool)_containsEstimatedSizeElement;
- (bool)_hasBackgroundDecorationItem;
- (bool)_hasVisibleItemsHandler;
- (bool)_isEmptySection;
- (bool)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1;
- (id)boundarySupplementaryItems;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decorationItems;
- (id)decorationItemsDict;
- (id)decorationItemssDict;
- (id)group;
- (id)initWithGroup:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 supplementaryItems:(id)arg3 boundarySupplementartItems:(id)arg4 pinnedSupplementaryItemIndexes:(id)arg5 interGroupSpacing:(double)arg6 visibleItemsInvalidationHandler:(id /* block */)arg7 supplementariesFollowInsets:(bool)arg8 decorationItems:(id)arg9 orthogonalScrollingBehavior:(long long)arg10 isEmptySection:(bool)arg11 prefersListSolver:(bool)arg12;
- (id)initWithLayoutGroup:(id)arg1;
- (double)interGroupSpacing;
- (bool)isEqual:(id)arg1;
- (long long)orthogonalScrollingBehavior;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (id)pinnedSupplementaryItemIndexes;
- (bool)prefersListSolver;
- (bool)scrollsOrthogonally;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (void)setContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDecorationItems:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setInterGroupSpacing:(double)arg1;
- (void)setOrthogonalScrollingBehavior:(long long)arg1;
- (void)setPinnedSupplementaryItemIndexes:(id)arg1;
- (void)setPrefersListSolver:(bool)arg1;
- (void)setSupplementariesFollowContentInsets:(bool)arg1;
- (void)setSupplementaryItems:(id)arg1;
- (void)setVisibleItemsInvalidationHandler:(id /* block */)arg1;
- (bool)supplementariesFollowContentInsets;
- (id)supplementaryItems;
- (id)supplementaryItemsDict;
- (id /* block */)visibleItemsInvalidationHandler;

@end
