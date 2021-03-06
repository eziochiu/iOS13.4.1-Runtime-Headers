/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCurationJunkClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSString * _junkClassificationName;
    double  _junkClassificationThreshold;
    NSDictionary * _junkConfidenceByAssetUUID;
    double  _maximumValue;
    double  _minimumValue;
    bool  _showsVideos;
    UIPickerView * _sortPickerView;
    bool  _sortsAscending;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;
- (void)_doneEditingSettings:(id)arg1;
- (void)_editSettings:(id)arg1;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (void)_presentTapToRadar;
- (void)_setMaximum:(id)arg1;
- (void)_setMinimum:(id)arg1;
- (void)_setShowsVideos:(id)arg1;
- (void)_update;
- (bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (id)newToolbarItems;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)setJunkConfidenceByAssetUUID:(id)arg1 withJunkClassificationName:(id)arg2 threshold:(double)arg3;
- (bool)shouldShowToolbar;
- (void)viewDidLoad;

@end
