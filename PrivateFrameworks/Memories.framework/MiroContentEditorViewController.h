/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroContentEditorViewController : UIViewController <MiroApplicationTestingEditorControlling, MiroAssetSuggestionsCollectionViewControllerDelegate, MiroEditorClipCellDelegate, MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate, PMClipCollectionProviderDelegate, PMClipProviderDelegate, PMTrimmerDelegate, UINavigationBarDelegate> {
    UIBarButtonItem * _addBarButtonItem;
    MiroAssetSuggestionsCollectionViewController * _addRemoveCollectionPickerView;
    NSString * _assetIdentifierToSnapToAfterAutoEdit;
    UIVisualEffectView * _bottomBlurEffectView;
    NSLayoutConstraint * _bottomBlurEffectViewHeightConstraint;
    UIBarButtonItem * _bottomPlayPauseBarButtonItem;
    UIToolbar * _bottomToolbar;
    UIBarButtonItem * _cancelBarButtonItem;
    PMClipCollectionProvider * _clipCollectionProvider;
    int  _clipMidTimeToSnapToAfterAutoEdit;
    id /* block */  _commitUserAssetChangesBlock;
    NSSet * _currentAssetIDs;
    UIBarButtonItem * _debugAutoEditBarButtonItem;
    UILabel * _debugEditStyleDescriptionLabel;
    UILabel * _debugFilterDescriptionLabel;
    UILabel * _debugSongDescriptionLabel;
    UILabel * _debugTitleDescriptionLabel;
    <MiroContentEditorViewControllerDelegate> * _delegate;
    bool  _didCenterInitialClipOnFirstAppearance;
    bool  _didMakeEdits;
    bool  _didTrim;
    UIBarButtonItem * _dislikeBarButtonItem;
    UIBarButtonItem * _doneBarButtonItem;
    UIBarButtonItem * _durationBarButtonItem;
    MiroEditorClipCollectionViewController * _editorViewController;
    PHCachingImageManager * _imageManager;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _initialStartTime;
    bool  _isPerformingInteractiveMovement;
    CALayer * _maskLayerCompact;
    CALayer * _maskLayerRegular;
    UIVisualEffectView * _navBarBlurEffectView;
    PMClipCollectionProvider * _previousClipCollectionProvider;
    VEKProduction * _production;
    PMiOSProgressViewController * _progressViewController;
    long long  _removeClipEnteredCount;
    id /* block */  _revertUserAssetChangesBlock;
    bool  _shouldCancelDownload;
    bool  _shouldNoteUserChangedAudioLevelForClip;
    double  _shouldNoteUserTrimmedClipWithPreviousDuration;
    UITapGestureRecognizer * _thumbnailTapGR;
    NSLayoutConstraint * _timelineBottomConstraint;
    NSLayoutConstraint * _timelineHeightConstraint;
    NSLayoutConstraint * _timelineLeftConstraint;
    UIView * _timelineMaskView;
    NSLayoutConstraint * _timelineRightConstraint;
    MiroTimelineClipCollectionViewController * _timelineViewController;
    UILabel * _toolbarDurationLabel;
    NSLayoutConstraint * _toolbarHeightConstraint;
    NSLayoutConstraint * _topBlurEffectViewTrimmerConstraint;
    UINavigationBar * _topToolbar;
    PMTrimmerViewController * _trimmer;
    UIVisualEffectView * _trimmerBlurEffectView;
    UIView * _trimmerContainerView;
    NSLayoutConstraint * _trimmerLeadingConstraint;
    NSLayoutConstraint * _trimmerTopConstraint;
    NSLayoutConstraint * _trimmerTrailingConstraint;
    MiroEditorClipCell * _trimmingCell;
}

@property (nonatomic) UIBarButtonItem *addBarButtonItem;
@property (nonatomic, retain) MiroAssetSuggestionsCollectionViewController *addRemoveCollectionPickerView;
@property (nonatomic, copy) NSString *assetIdentifierToSnapToAfterAutoEdit;
@property (nonatomic, retain) UIVisualEffectView *bottomBlurEffectView;
@property (nonatomic, retain) NSLayoutConstraint *bottomBlurEffectViewHeightConstraint;
@property (nonatomic, retain) UIBarButtonItem *bottomPlayPauseBarButtonItem;
@property (nonatomic) UIToolbar *bottomToolbar;
@property (nonatomic, retain) UIBarButtonItem *cancelBarButtonItem;
@property (nonatomic, retain) PMClipCollectionProvider *clipCollectionProvider;
@property (nonatomic) int clipMidTimeToSnapToAfterAutoEdit;
@property (nonatomic, copy) id /* block */ commitUserAssetChangesBlock;
@property (nonatomic, retain) NSSet *currentAssetIDs;
@property (nonatomic, retain) UIBarButtonItem *debugAutoEditBarButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UILabel *debugEditStyleDescriptionLabel;
@property (nonatomic) UILabel *debugFilterDescriptionLabel;
@property (nonatomic) UILabel *debugSongDescriptionLabel;
@property (nonatomic) UILabel *debugTitleDescriptionLabel;
@property (nonatomic) <MiroContentEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didCenterInitialClipOnFirstAppearance;
@property (nonatomic) bool didMakeEdits;
@property (nonatomic) bool didTrim;
@property (nonatomic) UIBarButtonItem *dislikeBarButtonItem;
@property (nonatomic, retain) UIBarButtonItem *doneBarButtonItem;
@property (nonatomic, retain) UIBarButtonItem *durationBarButtonItem;
@property (nonatomic) MiroEditorClipCollectionViewController *editorViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHCachingImageManager *imageManager;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } initialStartTime;
@property (nonatomic) bool isPerformingInteractiveMovement;
@property (nonatomic, retain) CALayer *maskLayerCompact;
@property (nonatomic, retain) CALayer *maskLayerRegular;
@property (nonatomic, retain) UIVisualEffectView *navBarBlurEffectView;
@property (nonatomic, retain) PMClipCollectionProvider *previousClipCollectionProvider;
@property (nonatomic, retain) VEKProduction *production;
@property (nonatomic, retain) PMiOSProgressViewController *progressViewController;
@property (nonatomic) long long removeClipEnteredCount;
@property (nonatomic, copy) id /* block */ revertUserAssetChangesBlock;
@property (nonatomic) bool shouldCancelDownload;
@property (nonatomic) bool shouldNoteUserChangedAudioLevelForClip;
@property (nonatomic) double shouldNoteUserTrimmedClipWithPreviousDuration;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *thumbnailTapGR;
@property (nonatomic) NSLayoutConstraint *timelineBottomConstraint;
@property (nonatomic) NSLayoutConstraint *timelineHeightConstraint;
@property (nonatomic) NSLayoutConstraint *timelineLeftConstraint;
@property (nonatomic) UIView *timelineMaskView;
@property (nonatomic) NSLayoutConstraint *timelineRightConstraint;
@property (nonatomic) MiroTimelineClipCollectionViewController *timelineViewController;
@property (nonatomic) UILabel *toolbarDurationLabel;
@property (nonatomic, retain) NSLayoutConstraint *toolbarHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *topBlurEffectViewTrimmerConstraint;
@property (nonatomic) UINavigationBar *topToolbar;
@property (nonatomic, retain) PMTrimmerViewController *trimmer;
@property (nonatomic, retain) UIVisualEffectView *trimmerBlurEffectView;
@property (nonatomic) UIView *trimmerContainerView;
@property (nonatomic, retain) NSLayoutConstraint *trimmerLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trimmerTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trimmerTrailingConstraint;
@property (nonatomic) MiroEditorClipCell *trimmingCell;

- (void).cxx_destruct;
- (void)_addAssets:(id)arg1 removeAssets:(id)arg2;
- (void)_adjustSnappedClipWhenSplitScreenClosesWorkaround;
- (void)_alertSomeAssetsFailed:(unsigned long long)arg1 unsupported:(unsigned long long)arg2;
- (void)_alertSomeAssetsFailedToDownload:(unsigned long long)arg1;
- (void)_alertSomeAssetsFailedWithTitle:(id)arg1 message:(id)arg2 okActionBlock:(id /* block */)arg3;
- (id)_assetsToAddToUsedAssetsForNewSelectedAssets:(id)arg1;
- (id)_assetsToRemoveFromUsedAssetsForNewSelectedAssets:(id)arg1;
- (void)_cancelProgress;
- (void)_commitEditChangesAndRefreshDebugOverlays:(id)arg1;
- (void)_configureBottomToolbarForTraitCollection:(id)arg1;
- (void)_configureClipControlBarMinimumSpacingForCells:(id)arg1;
- (void)_configureFadeMaskLayerForTraitCollection:(id)arg1;
- (void)_configureToolbarsForTraitCollection:(id)arg1;
- (void)_configureTopToolbarForTraitCollection:(id)arg1;
- (id)_debugBarButtonItems;
- (void)_didEndEditingForClipProvider:(id)arg1;
- (id)_editorCellForIndexPath:(id)arg1;
- (id)_maskLayerWithFadeWidth:(double)arg1;
- (int)_middleFrameTimeForClipProvider:(id)arg1;
- (unsigned long long)_nearestClipIndexForAssetID:(id)arg1 andClipMidTime:(int)arg2;
- (void)_prepareForDismissalWithAggD:(bool)arg1;
- (void)_reloadCollectionViewsWithHintSnapToIndex:(unsigned long long)arg1;
- (void)_scrollTimelineToTrackEditorContentOffset;
- (void)_setupEditorCollectionViewController:(id)arg1;
- (void)_setupNavigationBarAppearanceForContentEditor:(id)arg1;
- (void)_setupTimelineCollectionViewController:(id)arg1;
- (void)_setupToolbars;
- (void)_setupTransparentBackgroundForNavigationBar:(id)arg1;
- (void)_setupTransparentBackgroundForToolbar:(id)arg1;
- (void)_setupTrimmerInContainerView:(id)arg1;
- (void)_updateBottomBarConstraintsForTraitCollection:(id)arg1;
- (void)_updateControlVisibilityOnCells:(id)arg1;
- (void)_updateDebugLabelForClipCell:(id)arg1;
- (void)_updateDebugLabelsForVisibleTimelineClips;
- (void)_updateDurationLabel:(double)arg1;
- (void)_updateDurationLabelVisibilityAnimated:(bool)arg1;
- (void)_updateInterfaceElementVisibilityForCell:(id)arg1;
- (void)_updateItemNumberLabelForIndexPath:(id)arg1;
- (void)_updatePlayPauseButtonForCell:(id)arg1;
- (void)_updateThumbnailForCell:(id)arg1 indexPath:(id)arg2 startTime:(int)arg3;
- (void)_updateTopToolbarVisibilityForCell:(id)arg1 atIndexPath:(id)arg2 animated:(bool)arg3;
- (void)_updateTrimmerClipForCell:(id)arg1;
- (void)_updateTrimmerPlayerForCell:(id)arg1;
- (id)addBarButtonItem;
- (void)addButtonTouchUpInside:(id)arg1;
- (id)addRemoveCollectionPickerView;
- (void)addWithCompletion:(id /* block */)arg1;
- (id)assetIdentifierToSnapToAfterAutoEdit;
- (unsigned long long)assetSuggestionsController:(id)arg1 clipCountForAsset:(id)arg2;
- (id)assetSuggestionsController:(id)arg1 debugMetadataForAsset:(id)arg2;
- (void)assetSuggestionsController:(id)arg1 didFinishPickingAssets:(id)arg2;
- (void)assetSuggestionsControllerDidDismiss:(id)arg1;
- (id)bottomBlurEffectView;
- (id)bottomBlurEffectViewHeightConstraint;
- (id)bottomPlayPauseBarButtonItem;
- (id)bottomToolbar;
- (id)cancelBarButtonItem;
- (void)cancelButtonTouchUpInside:(id)arg1;
- (id)clipCollection:(id)arg1 clipProviderAtIndex:(long long)arg2;
- (void)clipCollection:(id)arg1 didBeginDisplayingCell:(id)arg2 indexPath:(id)arg3;
- (void)clipCollection:(id)arg1 didCancelInteractiveMovementForItemAtIndexPath:(id)arg2;
- (void)clipCollection:(id)arg1 didEndDisplayingCell:(id)arg2 indexPath:(id)arg3;
- (void)clipCollection:(id)arg1 didEndInteractiveMovementForItemAtIndexPath:(id)arg2;
- (void)clipCollection:(id)arg1 didSelectIndexPath:(id)arg2;
- (void)clipCollection:(id)arg1 didSetClipOnCell:(id)arg2 indexPath:(id)arg3;
- (void)clipCollection:(id)arg1 didSnapToIndexPath:(id)arg2;
- (void)clipCollection:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)clipCollection:(id)arg1 willBeginInteractiveMovementForItemAtIndexPath:(id)arg2;
- (id)clipCollection:(id)arg1 willSetClipProvider:(id)arg2 onCell:(id)arg3 indexPath:(id)arg4;
- (long long)clipCollectionClipCount:(id)arg1;
- (void)clipCollectionDidScroll:(id)arg1;
- (id)clipCollectionProvider;
- (void)clipCollectionProviderDidUpdateResults:(id)arg1 error:(id)arg2;
- (void)clipCollectionProviderWillUpdateResults:(id)arg1;
- (int)clipMidTimeToSnapToAfterAutoEdit;
- (id /* block */)commitUserAssetChangesBlock;
- (id)currentAssetIDs;
- (void)dealloc;
- (id)debugAutoEditBarButtonItem;
- (void)debugAutoEditButtonTouchUpInside:(id)arg1;
- (id)debugEditStyleDescriptionLabel;
- (id)debugFilterDescriptionLabel;
- (id)debugSongDescriptionLabel;
- (id)debugTitleDescriptionLabel;
- (id)delegate;
- (bool)didCenterInitialClipOnFirstAppearance;
- (bool)didMakeEdits;
- (void)didReceiveMemoryWarning;
- (bool)didTrim;
- (id)dislikeBarButtonItem;
- (void)dislikeButtonTouchUpInside:(id)arg1;
- (id)doneBarButtonItem;
- (void)doneButtonTouchUpInside:(id)arg1;
- (id)durationBarButtonItem;
- (void)editorClipCellDidChangeAudioLevel:(id)arg1;
- (void)editorClipCellDidChangeSpecialTreatment:(id)arg1;
- (void)editorClipCellDidStartPlaying:(id)arg1;
- (void)editorClipCellDidStopPlaying:(id)arg1;
- (bool)editorClipCellShouldShowCircularPlayButton:(id)arg1;
- (void)editorClipCellWillStartPlaying:(id)arg1;
- (id)editorViewController;
- (void)handleChangedProgress:(double)arg1 taskDescription:(id)arg2;
- (void)handleTapOnSnappedClip:(id)arg1;
- (id)imageManager;
- (id)initWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })initialStartTime;
- (bool)isPerformingInteractiveMovement;
- (id)maskLayerCompact;
- (id)maskLayerRegular;
- (id)navBarBlurEffectView;
- (bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)pickListSplitDistanceForAsset:(id)arg1;
- (bool)pickedLocallyAvailableScenesContainAsset:(id)arg1;
- (void)playCurrentCellIfPossible;
- (void)playPauseButtonTouchUpInside:(id)arg1;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (id)previousClipCollectionProvider;
- (id)production;
- (id)progressViewController;
- (void)removeClipAtIndexPath:(id)arg1;
- (long long)removeClipEnteredCount;
- (id /* block */)revertUserAssetChangesBlock;
- (void)setAddBarButtonItem:(id)arg1;
- (void)setAddRemoveCollectionPickerView:(id)arg1;
- (void)setAssetIdentifierToSnapToAfterAutoEdit:(id)arg1;
- (void)setBottomBlurEffectView:(id)arg1;
- (void)setBottomBlurEffectViewHeightConstraint:(id)arg1;
- (void)setBottomPlayPauseBarButtonItem:(id)arg1;
- (void)setBottomToolbar:(id)arg1;
- (void)setCancelBarButtonItem:(id)arg1;
- (void)setClipCollectionProvider:(id)arg1;
- (void)setClipMidTimeToSnapToAfterAutoEdit:(int)arg1;
- (void)setCommitUserAssetChangesBlock:(id /* block */)arg1;
- (void)setCurrentAssetIDs:(id)arg1;
- (void)setDebugAutoEditBarButtonItem:(id)arg1;
- (void)setDebugEditStyleDescriptionLabel:(id)arg1;
- (void)setDebugFilterDescriptionLabel:(id)arg1;
- (void)setDebugSongDescriptionLabel:(id)arg1;
- (void)setDebugTitleDescriptionLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidCenterInitialClipOnFirstAppearance:(bool)arg1;
- (void)setDidMakeEdits:(bool)arg1;
- (void)setDidTrim:(bool)arg1;
- (void)setDislikeBarButtonItem:(id)arg1;
- (void)setDoneBarButtonItem:(id)arg1;
- (void)setDurationBarButtonItem:(id)arg1;
- (void)setEditorViewController:(id)arg1;
- (void)setImageManager:(id)arg1;
- (void)setInitialStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIsPerformingInteractiveMovement:(bool)arg1;
- (void)setMaskLayerCompact:(id)arg1;
- (void)setMaskLayerRegular:(id)arg1;
- (void)setNavBarBlurEffectView:(id)arg1;
- (void)setPreviousClipCollectionProvider:(id)arg1;
- (void)setProduction:(id)arg1;
- (void)setProgressViewController:(id)arg1;
- (void)setRemoveClipEnteredCount:(long long)arg1;
- (void)setRevertUserAssetChangesBlock:(id /* block */)arg1;
- (void)setShouldCancelDownload:(bool)arg1;
- (void)setShouldNoteUserChangedAudioLevelForClip:(bool)arg1;
- (void)setShouldNoteUserTrimmedClipWithPreviousDuration:(double)arg1;
- (void)setThumbnailTapGR:(id)arg1;
- (void)setTimelineBottomConstraint:(id)arg1;
- (void)setTimelineHeightConstraint:(id)arg1;
- (void)setTimelineLeftConstraint:(id)arg1;
- (void)setTimelineMaskView:(id)arg1;
- (void)setTimelineRightConstraint:(id)arg1;
- (void)setTimelineViewController:(id)arg1;
- (void)setToolbarDurationLabel:(id)arg1;
- (void)setToolbarHeightConstraint:(id)arg1;
- (void)setTopBlurEffectViewTrimmerConstraint:(id)arg1;
- (void)setTopToolbar:(id)arg1;
- (void)setTrimmer:(id)arg1;
- (void)setTrimmerBlurEffectView:(id)arg1;
- (void)setTrimmerContainerView:(id)arg1;
- (void)setTrimmerLeadingConstraint:(id)arg1;
- (void)setTrimmerTopConstraint:(id)arg1;
- (void)setTrimmerTrailingConstraint:(id)arg1;
- (void)setTrimmingCell:(id)arg1;
- (void)setupWithProduction:(id)arg1 andResult:(id)arg2;
- (bool)shouldCancelDownload;
- (bool)shouldNoteUserChangedAudioLevelForClip;
- (double)shouldNoteUserTrimmedClipWithPreviousDuration;
- (id)thumbnailTapGR;
- (id)timelineBottomConstraint;
- (id)timelineHeightConstraint;
- (id)timelineLeftConstraint;
- (id)timelineMaskView;
- (id)timelineRightConstraint;
- (id)timelineViewController;
- (id)toolbarDurationLabel;
- (id)toolbarHeightConstraint;
- (id)topBlurEffectViewTrimmerConstraint;
- (id)topToolbar;
- (id)trimmer;
- (void)trimmer:(id)arg1 didContinueTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
- (void)trimmer:(id)arg1 didEndTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
- (bool)trimmer:(id)arg1 shouldContinueTrimmingWithClipProvider:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
- (void)trimmer:(id)arg1 willStartTrimmingWithClipProvider:(id)arg2;
- (id)trimmerBlurEffectView;
- (id)trimmerContainerView;
- (id)trimmerLeadingConstraint;
- (id)trimmerTopConstraint;
- (id)trimmerTrailingConstraint;
- (id)trimmingCell;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end