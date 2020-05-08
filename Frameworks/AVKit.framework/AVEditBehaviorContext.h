/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVEditBehaviorContext : NSObject <AVBehaviorContext, AVBehaviorContextInternal, AVEditViewDataSource, AVEditViewDelegate, AVPlayerViewControllerBehaviorContext> {
    AVEditBehavior * _behavior;
    UIBarButtonItem * _cancelButton;
    UIView * _containerView;
    unsigned long long  _currentRotation;
    UIBarButtonItem * _doneButton;
    AVEditView * _editView;
    bool  _editing;
    UIBarButtonItem * _flexibleSpaceItem;
    AVAssetImageGenerator * _imageGenerator;
    AVObservationController * _observationController;
    AVEditBehaviorParameters * _parameters;
    UIBarButtonItem * _pauseButton;
    NSMutableArray * _pendingImageRequests;
    UIBarButtonItem * _playButton;
    AVPlayerController * _playerController;
    id  _playerTimeObserver;
    AVPlayerViewController * _playerViewController;
    NSMutableDictionary * _requestedImageTimeToCMTimeMap;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _rotationTransform;
    UIToolbar * _toolbar;
    AVZoomingBehavior * _zoomingBehavior;
}

@property (nonatomic) AVEditBehavior *behavior;
@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) unsigned long long currentRotation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (nonatomic, retain) AVEditView *editView;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, retain) UIBarButtonItem *flexibleSpaceItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVAssetImageGenerator *imageGenerator;
@property (nonatomic, retain) AVObservationController *observationController;
@property (nonatomic, readonly, copy) AVEditBehaviorParameters *parameters;
@property (nonatomic, retain) UIBarButtonItem *pauseButton;
@property (nonatomic, readonly) NSMutableArray *pendingImageRequests;
@property (nonatomic, retain) UIBarButtonItem *playButton;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic, retain) id playerTimeObserver;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (nonatomic, readonly) NSMutableDictionary *requestedImageTimeToCMTimeMap;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } rotationTransform;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIToolbar *toolbar;
@property (nonatomic, retain) AVZoomingBehavior *zoomingBehavior;

- (void).cxx_destruct;
- (void)_generateThumbnails;
- (id)_makeBarButtonItems;
- (id)behavior;
- (void)cancel:(id)arg1;
- (id)cancelButton;
- (id)containerView;
- (void)contentViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withCoordinator:(id)arg2;
- (unsigned long long)currentRotation;
- (void)dealloc;
- (void)didAddBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (void)done:(id)arg1;
- (id)doneButton;
- (id)editView;
- (void)editView:(id)arg1 currentTimeDidChange:(double)arg2;
- (void)editView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (void)editView:(id)arg1 trimEndTimeDidChange:(double)arg2;
- (void)editView:(id)arg1 trimStartTimeDidChange:(double)arg2;
- (void)editViewDidBeginScrubbing:(id)arg1;
- (void)editViewDidEndScrubbing:(id)arg1;
- (void)editViewDidFinishRequestingThumbnails:(id)arg1;
- (double)editViewDuration:(id)arg1;
- (double)editViewThumbnailAspectRatio:(id)arg1;
- (void)editViewWillBeginRequestingThumbnails:(id)arg1;
- (void)endEditing;
- (id)flexibleSpaceItem;
- (id)imageGenerator;
- (id)initWithAVKitOwner:(id)arg1;
- (bool)isEditing;
- (id)observationController;
- (id)parameters;
- (void)pause:(id)arg1;
- (id)pauseButton;
- (id)pendingImageRequests;
- (void)play:(id)arg1;
- (id)playButton;
- (id)playerController;
- (id)playerTimeObserver;
- (id)playerViewController;
- (id)requestedImageTimeToCMTimeMap;
- (void)rotateClockwise;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransform;
- (void)setBehavior:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setCurrentRotation:(unsigned long long)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEditView:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setFlexibleSpaceItem:(id)arg1;
- (void)setImageGenerator:(id)arg1;
- (void)setObservationController:(id)arg1;
- (void)setPauseButton:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPlayerTimeObserver:(id)arg1;
- (void)setRotationTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setToolbar:(id)arg1;
- (void)setZoomingBehavior:(id)arg1;
- (void)startEditing;
- (id)toolbar;
- (id)videoCompostitionRotatingAsset:(id)arg1;
- (void)willAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;
- (id)zoomingBehavior;

@end