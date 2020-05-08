/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIButtonBar : NSObject <NSCoding, UIPointerInteractionDelegate, _UIBarButtonItemGroupOwner, _UIBarButtonItemViewOwner> {
    <_UIButtonBarAppearanceDelegate> * __appearanceDelegate;
    _UIPointerInteractionAssistant * _assistant;
    NSArray * _barButtonGroups;
    struct { 
        unsigned int isInLayoutReentrancyGuard : 1; 
        unsigned int needsAppearanceUpdate : 1; 
        unsigned int plainAppearanceChanged : 1; 
        unsigned int doneAppearanceChanged : 1; 
        unsigned int needsUpdateHitRects : 1; 
        unsigned int denyPointerInteractions : 1; 
    }  _buttonBarFlags;
    UIView * _centeredView;
    NSLayoutConstraint * _centeringConstraint;
    bool  _compact;
    id /* block */  _defaultActionFilter;
    <_UIButtonBarDelegate> * _delegate;
    _UIBarButtonItemData * _doneItemAppearance;
    NSMutableArray * _effectiveLayout;
    NSLayoutDimension * _flexibleSpaceEqualSizeAnchor;
    NSMapTable * _groupLayoutMap;
    NSMutableArray * _groupLayouts;
    bool  _itemsInGroupUseSameSize;
    NSMutableArray * _layoutActiveConstraints;
    NSMutableArray * _layoutGuides;
    _UIButtonBarLayoutMetrics * _layoutMetrics;
    NSMutableArray * _layoutViews;
    double  _minimumInterGroupSpace;
    NSLayoutDimension * _minimumInterGroupSpaceAnchor;
    NSLayoutConstraint * _minimumInterGroupSpaceConstraint;
    double  _minimumInterItemSpace;
    NSLayoutDimension * _minimumInterItemSpaceAnchor;
    NSLayoutConstraint * _minimumInterItemSpaceConstraint;
    _UIBarButtonItemData * _plainItemAppearance;
    NSMapTable * _senderActionMap;
    _UIButtonBarStackView * _stackView;
    _UIButtonBarButtonVisualProvider * _visualProvider;
}

@property (nonatomic) <_UIButtonBarAppearanceDelegate> *_appearanceDelegate;
@property (nonatomic) bool allowsViewWrappers;
@property (nonatomic, retain) _UIPointerInteractionAssistant *assistant;
@property (nonatomic, readonly) UIView<UIPointerInteractionDelegate> *assistantView;
@property (nonatomic, copy) NSArray *barButtonGroups;
@property (getter=_compact, setter=_setCompact:, nonatomic) bool compact;
@property (nonatomic) bool createsPopoverLayoutGuides;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ defaultActionFilter;
@property (nonatomic) <_UIButtonBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIBarButtonItemData *doneItemAppearance;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hitTestDirectionalInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestInsets;
@property (nonatomic) long long itemDistribution;
@property (getter=_itemsInGroupUseSameSize, setter=_setItemsInGroupUseSameSize:, nonatomic) bool itemsInGroupUseSameSize;
@property (getter=_layoutWidth, nonatomic, readonly) double layoutWidth;
@property (getter=_minimumInterGroupSpace, setter=_setMinimumInterGroupSpace:, nonatomic) double minimumInterGroupSpace;
@property (nonatomic) double minimumInterItemSpace;
@property (nonatomic, retain) _UIBarButtonItemData *plainItemAppearance;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIBarButtonItem *ultimateFallbackItem;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, copy) _UIButtonBarButtonVisualProvider *visualProvider;

+ (float)optionalConstraintsPriority;

- (void).cxx_destruct;
- (void)_appearanceChanged;
- (id)_appearanceDelegate;
- (bool)_compact;
- (void)_disablePointerInteractions;
- (void)_enablePointerInteractions;
- (double)_estimatedWidth;
- (void)_groupDidChangeGeometry:(id)arg1;
- (void)_groupDidChangePriority:(id)arg1;
- (void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2;
- (void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2;
- (void)_groupDidUpdateVisibility:(id)arg1;
- (void)_invalidateAssistant:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSecondaryActionState:(id)arg1;
- (void)_itemDidChangeSecondaryActions:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (bool)_itemsInGroupUseSameSize;
- (void)_layoutBar;
- (id)_layoutForGroup:(id)arg1;
- (double)_layoutWidth;
- (double)_minimumInterGroupSpace;
- (id)_newGroupLayout:(id)arg1;
- (void)_reloadBarButtonGroups;
- (void)_setCompact:(bool)arg1;
- (void)_setItemsInGroupUseSameSize:(bool)arg1;
- (void)_setMinimumInterGroupSpace:(double)arg1;
- (void)_setNeedsVisualUpdate;
- (void)_setNeedsVisualUpdateAndNotify:(bool)arg1;
- (void)_setVisualProvider:(id)arg1;
- (id)_targetActionForBarButtonItem:(id)arg1;
- (void)_updateForTraitCollectionChange:(id)arg1;
- (void)_updateHitRects;
- (void)_updateToFitInWidth:(double)arg1;
- (id)_updatedViewForBarButtonItem:(id)arg1 withView:(id)arg2;
- (void)_validateAllItems;
- (bool)allowsViewWrappers;
- (id)assistant;
- (id)assistantView;
- (id)barButtonGroups;
- (bool)createsPopoverLayoutGuides;
- (void)dealloc;
- (id /* block */)defaultActionFilter;
- (id)delegate;
- (id)description;
- (id)doneItemAppearance;
- (void)doneItemAppearanceChanged;
- (void)encodeWithCoder:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hitTestDirectionalInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)itemDistribution;
- (double)minimumInterItemSpace;
- (id)plainItemAppearance;
- (void)plainItemAppearanceChanged;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)setAllowsViewWrappers:(bool)arg1;
- (void)setAssistant:(id)arg1;
- (void)setBarButtonGroups:(id)arg1;
- (void)setCreatesPopoverLayoutGuides:(bool)arg1;
- (void)setDefaultActionFilter:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneItemAppearance:(id)arg1;
- (void)setHitTestDirectionalInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHitTestInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setItemDistribution:(long long)arg1;
- (void)setMinimumInterItemSpace:(double)arg1;
- (void)setPlainItemAppearance:(id)arg1;
- (void)setVisualProvider:(id)arg1;
- (void)set_appearanceDelegate:(id)arg1;
- (id)ultimateFallbackItem;
- (id)view;
- (id)visualProvider;

@end