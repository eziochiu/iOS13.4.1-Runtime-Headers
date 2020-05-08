/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFGalleryImportViewController : UIViewController <UIAdaptivePresentationControllerDelegate, VCUIShortcutViewControllerDelegate, WFImportQuestionContainerViewControllerDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    unsigned long long  _currentImportQuestionIndex;
    <WFGalleryImportViewControllerDelegate> * _delegate;
    WFGalleryWorkflow * _galleryWorkflow;
    WFWorkflowIcon * _icon;
    WFImportQuestionContainerViewController * _importQuestionViewController;
    bool  _importingSharedShortcut;
    NSString * _loggingContext;
    NSString * _name;
    bool  _previewingFor3DTouch;
    UIBarButtonItem * _rightButtonItem;
    WFSharedShortcut * _sharedShortcut;
    VCUIShortcutViewController * _shortcutViewController;
    bool  _showSharingManagement;
    bool  _skipServicesConfirmation;
    WFWorkflow * _workflow;
    WFWorkflowRecord * _workflowRecord;
}

@property (nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) unsigned long long currentImportQuestionIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFGalleryImportViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFGalleryWorkflow *galleryWorkflow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWorkflowIcon *icon;
@property (nonatomic) WFImportQuestionContainerViewController *importQuestionViewController;
@property (nonatomic) bool importingSharedShortcut;
@property (nonatomic, readonly) NSString *loggingContext;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool previewingFor3DTouch;
@property (nonatomic) UIBarButtonItem *rightButtonItem;
@property (nonatomic, readonly) WFSharedShortcut *sharedShortcut;
@property (nonatomic) VCUIShortcutViewController *shortcutViewController;
@property (nonatomic) bool showSharingManagement;
@property (nonatomic, readonly) bool skipServicesConfirmation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) WFWorkflowRecord *workflowRecord;

- (void).cxx_destruct;
- (id)activityIndicator;
- (unsigned long long)currentImportQuestionIndex;
- (id)delegate;
- (void)didFinish;
- (void)didTapCancel;
- (void)didTapManageSharing;
- (void)didTapShare;
- (int)eventSourceForShortcut;
- (id)galleryWorkflow;
- (id)icon;
- (id)importQuestionViewController;
- (void)importQuestionViewControllerDidSelectBack:(id)arg1;
- (void)importQuestionViewControllerDidSelectCancel:(id)arg1;
- (void)importQuestionViewControllerDidSelectNext:(id)arg1;
- (void)importQuestionViewControllerDidSelectSkip:(id)arg1;
- (bool)importingSharedShortcut;
- (id)initWithGalleryWorkflow:(id)arg1 loggingContext:(id)arg2;
- (id)initWithSharedShortcut:(id)arg1 loggingContext:(id)arg2;
- (id)initWithWorkflowRecord:(id)arg1 loggingContext:(id)arg2 skipServicesConfirmation:(bool)arg3;
- (void)loadView;
- (void)loadWorkflowIfNeeded;
- (id)localizedStopSharingString;
- (void)logEvent:(id)arg1 withObjects:(id)arg2;
- (id)loggingContext;
- (id)name;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (bool)previewingFor3DTouch;
- (id)rightButtonItem;
- (void)setActivityIndicator:(id)arg1;
- (void)setCurrentImportQuestionIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImportQuestionViewController:(id)arg1;
- (void)setImportingSharedShortcut:(bool)arg1;
- (void)setPreviewingFor3DTouch:(bool)arg1;
- (void)setRightButtonItem:(id)arg1;
- (void)setShortcutViewController:(id)arg1;
- (void)setShowSharingManagement:(bool)arg1;
- (id)sharedShortcut;
- (id)shortcutViewController;
- (void)shortcutViewController:(id)arg1 didFinishWithName:(id)arg2;
- (void)shortcutViewControllerDidCancel:(id)arg1;
- (void)showNextImportQuestion;
- (void)showNextImportQuestionAnimated:(bool)arg1 backButtonHidden:(bool)arg2;
- (bool)showSharingManagement;
- (bool)skipServicesConfirmation;
- (void)trackAddEvent;
- (void)unshareSharedShortcut;
- (void)updateBarButtonItems;
- (void)updateView;
- (void)viewWillAppear:(bool)arg1;
- (id)workflow;
- (id)workflowRecord;

@end