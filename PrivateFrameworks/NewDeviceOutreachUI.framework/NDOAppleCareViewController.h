/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
 */

@interface NDOAppleCareViewController : UIViewController <NDOAppleCareAMSUIViewPresenterProtocol, NDOAppleCareWebViewPresenterProtocol> {
    UIStackView * _buttonStackView;
    UIButton * _continueButton;
    UILabel * _detailsTextView;
    UINavigationBar * _navBar;
    UINavigationItem * _navBarItem;
    UIButton * _notNowButton;
    unsigned long long  _presentationType;
    <NDOAppleCareFlowDelegate> * _presentor;
    NSString * _serialNumber;
    NDOWarranty * _warranty;
}

@property (nonatomic) UIStackView *buttonStackView;
@property (nonatomic) UIButton *continueButton;
@property (nonatomic) UILabel *detailsTextView;
@property (nonatomic) UINavigationBar *navBar;
@property (nonatomic) UINavigationItem *navBarItem;
@property (nonatomic) UIButton *notNowButton;
@property unsigned long long presentationType;
@property <NDOAppleCareFlowDelegate> *presentor;
@property (retain) NSString *serialNumber;
@property (retain) NDOWarranty *warranty;

- (void).cxx_destruct;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)arg1;
- (id)buttonStackView;
- (void)cancelPressed:(id)arg1;
- (void)completeWithStatus:(unsigned long long)arg1;
- (id)continueButton;
- (id)detailsTextView;
- (void)getAppleCarePressed:(id)arg1;
- (id)initWithWarranty:(id)arg1;
- (id)initWithWarranty:(id)arg1 presentationType:(unsigned long long)arg2;
- (id)initWithWarranty:(id)arg1 presentationType:(unsigned long long)arg2 serialNumber:(id)arg3;
- (void)loadView;
- (id)navBar;
- (id)navBarItem;
- (id)notNowButton;
- (void)notNowPressed:(id)arg1;
- (void)okButtonPressed;
- (unsigned long long)presentationType;
- (id)presentor;
- (id)serialNumber;
- (void)setButtonStackView:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDetailsTextView:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setNavBarItem:(id)arg1;
- (void)setNotNowButton:(id)arg1;
- (void)setPresentationType:(unsigned long long)arg1;
- (void)setPresentor:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setWarranty:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)warranty;
- (void)webviewFinishedWithCompletion:(unsigned long long)arg1;

@end