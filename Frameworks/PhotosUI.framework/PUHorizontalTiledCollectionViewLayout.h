/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout {
    PUCollectionViewData * _data;
    <PUHorizontalTiledCollectionViewLayoutDelegate> * _delegate;
    UICollectionViewLayoutAttributes * _dummyAttrs;
    double  _interitemSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _itemsContentInset;
}

@property (nonatomic) <PUHorizontalTiledCollectionViewLayoutDelegate> *delegate;
@property (nonatomic, readonly) bool hasReferenceIndexPath;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } itemsContentInset;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (void)_ensureIndexPath:(id)arg1 inData:(id)arg2;
- (void)_ensureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inData:(id)arg2 outDeltaOriginX:(double*)arg3;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_updateLayoutData:(id)arg1 inDirection:(long long)arg2 outDeltaOriginX:(double*)arg3;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)delegate;
- (bool)hasReferenceIndexPath;
- (id)init;
- (double)interitemSpacing;
- (void)invalidateCachedLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })itemsContentInset;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (void)setDelegate:(id)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setItemsContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end