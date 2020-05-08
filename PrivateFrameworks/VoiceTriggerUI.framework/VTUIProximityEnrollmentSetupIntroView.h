/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIProximityEnrollmentSetupIntroView : VTUIProximityView <UITextViewDelegate> {
    VTUIProximityContainerView * _containerView;
    UIButton * _dismissButton;
    UIImageView * _imageView;
    UIView * _imageViewContainer;
    NSString * _languageCode;
    VTUIButton * _notNowButton;
    VTUIButton * _setupButton;
    <VTUIEnrollmentSetupIntroViewDelegate> * _stateViewDelegate;
    UILabel * _subtitleLabel;
    UITextView * _termsAndConds;
    UILabel * _titleLabel;
    NSArray * _viewConstraints;
    CSVoiceProfileManager * _voiceProfileMgr;
    VTUIStyle * _vtStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VTUIButton *notNowButton;
@property (nonatomic, readonly) VTUIButton *setupButton;
@property (nonatomic) <VTUIEnrollmentSetupIntroViewDelegate> *stateViewDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewConstraints;

- (void).cxx_destruct;
- (void)_setImage:(id)arg1;
- (void)_setupConstraintsToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupContent;
- (void)_setupImage;
- (void)_setupPhoneLandscapeConstraints;
- (void)_setupPortraitConstraints;
- (void)_setupTermsAndConditions;
- (id)dismissButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)notNowButton;
- (void)setDismissButton:(id)arg1;
- (void)setStateViewDelegate:(id)arg1;
- (void)setViewConstraints:(id)arg1;
- (id)setupButton;
- (id)stateViewDelegate;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)viewConstraints;

@end