/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRUITouchpadViewController : UIViewController <TVRUIRemoteViewProvider, _TVRUIEventDelegate, _UICursorInteractionDelegate> {
    UIView * _backgroundView;
    _TVRUIDirectionalControlView * _directionalControlView;
    <_TVRUIEventDelegate> * _eventDelegate;
    bool  _mediaControlsAreVisible;
    <TVRUIDevice> * _remoteDevice;
    <TVRUIStyleProvider> * _styleProvider;
    <TVRUITouchProcessor> * _touchProcessor;
    long long  _touchpadMode;
    _TVRUITouchpadView * _touchpadView;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _TVRUIDirectionalControlView *directionalControlView;
@property (nonatomic) <_TVRUIEventDelegate> *eventDelegate;
@property (readonly) unsigned long long hash;
@property (getter=areMediaControlsVisible, nonatomic) bool mediaControlsAreVisible;
@property (nonatomic, retain) <TVRUIDevice> *remoteDevice;
@property (getter=isShowingControls, nonatomic) bool showControls;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) <TVRUITouchProcessor> *touchProcessor;
@property (nonatomic) long long touchpadMode;
@property (nonatomic, retain) _TVRUITouchpadView *touchpadView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_setupDirectionalArrowView;
- (void)_setupTouchpadView;
- (void)_simpleRemoteGesturesEnabled:(id)arg1;
- (void)_toggleControlScale;
- (void)_transitionToAppropriateView;
- (void)_transitionToDirectionalControlView;
- (void)_transitionToTouchpadView;
- (bool)areMediaControlsVisible;
- (id)backgroundView;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint { double x1; double x2; })arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2;
- (id)directionalControlView;
- (id)eventDelegate;
- (bool)isShowingControls;
- (id)remoteDevice;
- (void)setBackgroundView:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDirectionalControlView:(id)arg1;
- (void)setEventDelegate:(id)arg1;
- (void)setMediaControlsAreVisible:(bool)arg1;
- (void)setRemoteDevice:(id)arg1;
- (void)setShowControls:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTouchProcessor:(id)arg1;
- (void)setTouchpadMode:(long long)arg1;
- (void)setTouchpadView:(id)arg1;
- (id)styleProvider;
- (id)touchProcessor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (long long)touchpadMode;
- (id)touchpadView;
- (void)transitonToViewForDeviceType:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
