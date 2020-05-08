/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFImportQuestionViewController : UITableViewController <WFActionEventObserver, WFParameterEditorHostingCellDelegate> {
    <WFImportQuestionViewControllerDelegate> * _delegate;
    WFWorkflowImportQuestion * _importQuestion;
    WFParameterEditorHostingCell * _parameterEditorCell;
    WFParameterEditorModel * _parameterEditorModel;
    struct CGSize { 
        double width; 
        double height; 
    }  _parameterEditorSize;
    UIViewController * _presenter;
    WFGradient * _workflowGradient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFImportQuestionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWorkflowImportQuestion *importQuestion;
@property (nonatomic) WFParameterEditorHostingCell *parameterEditorCell;
@property (nonatomic, retain) WFParameterEditorModel *parameterEditorModel;
@property (nonatomic) struct CGSize { double x1; double x2; } parameterEditorSize;
@property (nonatomic) UIViewController *presenter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFGradient *workflowGradient;

- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)importQuestion;
- (id)initWithImportQuestion:(id)arg1 workflowGradient:(id)arg2;
- (void)loadView;
- (id)parameterEditorCell;
- (void)parameterEditorCell:(id)arg1 didUpdateParameterState:(id)arg2;
- (void)parameterEditorCellDidInvalidateSize:(id)arg1;
- (id)parameterEditorModel;
- (struct CGSize { double x1; double x2; })parameterEditorSize;
- (id)presenter;
- (void)reflowParameterEditor;
- (void)setDelegate:(id)arg1;
- (void)setParameterEditorCell:(id)arg1;
- (void)setParameterEditorModel:(id)arg1;
- (void)setParameterEditorSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresenter:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateParameterEditorModel;
- (void)viewDidLayoutSubviews;
- (id)workflowGradient;

@end