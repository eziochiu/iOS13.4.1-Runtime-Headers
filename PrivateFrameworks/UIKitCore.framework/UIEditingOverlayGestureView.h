/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIEditingOverlayGestureView : UIView <_UIEventObserver> {
    UIWindow * _previousWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIWindow *previousWindow;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_gestureRecognizersForEvent:(id)arg1;
- (bool)_isTransparentFocusRegion;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)previousWindow;
- (void)setPreviousWindow:(id)arg1;
- (int)textEffectsVisibilityLevel;

@end