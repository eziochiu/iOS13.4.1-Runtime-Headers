/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoControlVisibilityItem : NSObject <SVVideoControlVisibilityItem> {
    bool  _hideable;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)hide:(bool)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hideable;
- (id)initWithView:(id)arg1;
- (bool)isVisible;
- (void)setHideable:(bool)arg1;
- (id)view;

@end