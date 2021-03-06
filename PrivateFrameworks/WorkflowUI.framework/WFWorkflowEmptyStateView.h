/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFWorkflowEmptyStateView : UIView {
    UIButton * _addButton;
    NSLayoutConstraint * _addButtonHeightConstraint;
    <WFWorkflowEmptyStateViewDelegate> * _delegate;
    UILabel * _instructionLabel;
    WFWorkflowSettingsLayoutMetrics * _layoutMetrics;
    UIButton * _tourButton;
    WFWorkflow * _workflow;
}

@property (nonatomic, readonly) UIButton *addButton;
@property (nonatomic, readonly) NSLayoutConstraint *addButtonHeightConstraint;
@property (nonatomic) <WFWorkflowEmptyStateViewDelegate> *delegate;
@property (nonatomic, readonly) UILabel *instructionLabel;
@property (nonatomic, copy) NSAttributedString *instructionText;
@property (nonatomic, readonly) WFWorkflowSettingsLayoutMetrics *layoutMetrics;
@property (nonatomic, readonly) UIButton *tourButton;
@property (nonatomic, readonly) WFWorkflow *workflow;

- (void).cxx_destruct;
- (id)addButton;
- (id)addButtonHeightConstraint;
- (void)adoptTraitCollection:(id)arg1;
- (id)delegate;
- (id)initWithWorkflow:(id)arg1 forNewWorkflow:(bool)arg2;
- (id)instructionLabel;
- (id)instructionText;
- (id)layoutMetrics;
- (void)setDelegate:(id)arg1;
- (void)setInstructionText:(id)arg1;
- (void)showDrawer;
- (void)showTutorial;
- (void)tintColorDidChange;
- (id)tourButton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateColors;
- (void)updateFontSizes;
- (id)workflow;

@end
