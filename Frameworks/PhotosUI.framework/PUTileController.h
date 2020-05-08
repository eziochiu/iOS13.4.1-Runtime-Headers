/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileController : NSObject {
    bool  _active;
    long long  _animationCount;
    bool  _detached;
    PUTileLayoutInfo * _layoutInfo;
    bool  _reusable;
    NSString * _reuseIdentifier;
    bool  _shouldPreserveCurrentContent;
    PUTilingView * _tilingView;
    bool  _wantsVisibleRectChanges;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) long long animationCount;
@property (getter=isDetached, nonatomic) bool detached;
@property (nonatomic, readonly) bool isAnimating;
@property (nonatomic, readonly) bool isPresentationActive;
@property (nonatomic, readonly) PUTileLayoutInfo *layoutInfo;
@property (nonatomic, readonly) PUTileLayoutInfo *presentationLayoutInfo;
@property (getter=isReusable, nonatomic) bool reusable;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, readonly) bool shouldAvoidInPlaceSnapshottedFadeOut;
@property (nonatomic) bool shouldPreserveCurrentContent;
@property (nonatomic, readonly) PUTilingView *tilingView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic, readonly) bool wantsVisibleRectChanges;

- (void).cxx_destruct;
- (void)addToTilingView:(id)arg1;
- (bool)adoptAssetTransitionInfo:(id)arg1;
- (long long)animationCount;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (id)description;
- (void)didChangeActive;
- (void)didChangeAnimating;
- (void)didChangeVisibleRect;
- (void)didEndAnimation:(long long)arg1;
- (id)freeze;
- (id)generateAssetTransitionInfo;
- (id)init;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isActive;
- (bool)isAnimating;
- (bool)isDetached;
- (bool)isPresentationActive;
- (bool)isReusable;
- (id)layoutInfo;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareForReuse;
- (id)presentationLayoutInfo;
- (void)removeAllAnimations;
- (id)reuseIdentifier;
- (void)reuseIfApplicable;
- (void)setActive:(bool)arg1;
- (void)setAnimationCount:(long long)arg1;
- (void)setDetached:(bool)arg1;
- (void)setLayoutInfo:(id)arg1;
- (void)setPreloadedImage:(id)arg1;
- (void)setReusable:(bool)arg1;
- (void)setShouldPreserveCurrentContent:(bool)arg1;
- (void)setTilingView:(id)arg1;
- (bool)shouldAvoidInPlaceSnapshottedFadeOut;
- (bool)shouldPreserveCurrentContent;
- (id)tilingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (bool)wantsVisibleRectChanges;
- (long long)willBeginAnimation;

@end