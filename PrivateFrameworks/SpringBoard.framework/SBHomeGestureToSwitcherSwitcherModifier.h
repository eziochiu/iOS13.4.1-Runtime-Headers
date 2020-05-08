/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _appLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftOffTranslation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftOffVelocity;
    SBSwitcherModifier * _multitaskingModifier;
    long long  _startingEnvironmentMode;
}

- (void).cxx_destruct;
- (id)_appLayoutToScrollToDuringTransition;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)containerStatusBarAnimationDuration;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fullSizeSnapshotsRange;
- (id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3 startingEnvironmentMode:(long long)arg4 liftOfVelocity:(struct CGPoint { double x1; double x2; })arg5 liftOffTranslation:(struct CGPoint { double x1; double x2; })arg6;
- (bool)isHomeScreenContentRequired;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (id)layoutSettings;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (id)transitionWillBegin;
- (long long)wallpaperStyle;

@end