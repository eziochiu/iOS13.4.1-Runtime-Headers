/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFModuleModel : NSObject <WFModuleParameterStateWriter> {
    WFAction * _action;
    NSArray * _allParameters;
    WFModuleAppearance * _appearance;
    Class  _customConfigurationClass;
    <WFModuleDelegate> * _delegate;
    NSString * _firstResponderParameterKey;
    unsigned long long  _headerTextStyle;
    UIImage * _icon;
    unsigned long long  _indentationLevel;
    bool  _isDimmed;
    bool  _isDiscontinued;
    bool  _isDraggingIntoWorkflow;
    bool  _isEditable;
    bool  _isMissing;
    bool  _isPlaceholder;
    bool  _isProcessing;
    bool  _isRemovable;
    bool  _isSelectingParameter;
    bool  _isWorkflowRunning;
    UIImage * _keyImage;
    NSAttributedString * _localizedFooter;
    NSString * _localizedName;
    NSString * _localizedParameterSummaryFormatString;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    unsigned long long  _parameterCollapsingBehavior;
    struct CKTypedComponentAction<WFAction *, WFParameter *> { 
        unsigned long long _variant; 
        id _target; 
        CKComponentScopeHandle *_scopeHandle; 
        SEL _selector; 
    }  _parameterSelectionAction;
    <WFModuleParameterStateWriter> * _parameterStateWriter;
    NSDictionary * _parameterStates;
    NSArray * _parametersExcludedFromSelection;
    NSArray * _parametersInListing;
    struct CKTypedComponentAction<> { 
        unsigned long long _variant; 
        id _target; 
        CKComponentScopeHandle *_scopeHandle; 
        SEL _selector; 
    }  _processingCancelAction;
    struct CKTypedComponentAction<> { 
        unsigned long long _variant; 
        id _target; 
        CKComponentScopeHandle *_scopeHandle; 
        SEL _selector; 
    }  _processingDoneAction;
    NSArray * _processingParameters;
    NSError * _resourceError;
    unsigned long long  _runningActionIndex;
    bool  _showHandoffRequired;
    bool  _showResourceErrors;
    bool  _showSettings;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
    NSArray * _workflowTypes;
}

@property (nonatomic, readonly) WFAction *action;
@property (nonatomic, readonly) NSArray *allParameters;
@property (nonatomic, readonly) WFModuleAppearance *appearance;
@property (nonatomic, readonly) Class customConfigurationClass;
@property (nonatomic, readonly) <WFModuleDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *firstResponderParameterKey;
@property (nonatomic, readonly) unsigned long long headerTextStyle;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) unsigned long long indentationLevel;
@property (nonatomic, readonly) bool isDimmed;
@property (nonatomic, readonly) bool isDiscontinued;
@property (nonatomic, readonly) bool isDraggingIntoWorkflow;
@property (nonatomic, readonly) bool isEditable;
@property (nonatomic, readonly) bool isMissing;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) bool isProcessing;
@property (nonatomic, readonly) bool isRemovable;
@property (nonatomic, readonly) bool isSelectingParameter;
@property (nonatomic, readonly) bool isWorkflowRunning;
@property (nonatomic, readonly) UIImage *keyImage;
@property (nonatomic, readonly, copy) NSAttributedString *localizedFooter;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *localizedParameterSummaryFormatString;
@property (nonatomic, readonly, copy) NSString *localizedSubtitle;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long parameterCollapsingBehavior;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{CKTypedComponentAction<WFAction *' */ struct  parameterSelectionAction; /* unknown property attribute:  WFParameter *>=Q@@:} */
@property (nonatomic, readonly) <WFModuleParameterStateWriter> *parameterStateWriter;
@property (nonatomic, readonly) NSDictionary *parameterStates;
@property (nonatomic, readonly) NSArray *parametersExcludedFromSelection;
@property (nonatomic, readonly) NSArray *parametersInListing;
@property (nonatomic, readonly) struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; } processingCancelAction;
@property (nonatomic, readonly) struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; } processingDoneAction;
@property (nonatomic, readonly) NSArray *processingParameters;
@property (nonatomic, readonly) NSError *resourceError;
@property (nonatomic, readonly) unsigned long long runningActionIndex;
@property (nonatomic, readonly) bool showHandoffRequired;
@property (nonatomic, readonly) bool showResourceErrors;
@property (nonatomic, readonly) bool showSettings;
@property (nonatomic, readonly) <WFVariableProvider> *variableProvider;
@property (nonatomic, readonly) <WFVariableUIDelegate> *variableUIDelegate;
@property (nonatomic, readonly) NSArray *workflowTypes;

+ (id)modelForEditingAction:(id)arg1 withWorkflowTypes:(id)arg2 draggingIntoWorkflow:(bool)arg3 customConfigurationClass:(Class)arg4 variableUIDelegate:(id)arg5 delegate:(id)arg6;
+ (id)modelForPlaceholder;
+ (id)modelForProcessingAction:(id)arg1 withParameters:(id)arg2 cancelAction:(struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; })arg3 doneAction:(struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; })arg4;
+ (id)modelForSelectingParameterOfAction:(id)arg1 excludingParameters:(id)arg2 selectionAction:(struct CKTypedComponentAction<WFAction *, WFParameter *> { unsigned long long x1; id x2; id x3; SEL x4; })arg3 delegate:(id)arg4;
+ (id)modelForViewingAction:(id)arg1 whileWorkflowRunning:(bool)arg2 withWorkflowTypes:(id)arg3 appearance:(id)arg4 showResourceErrors:(bool)arg5 dimmed:(bool)arg6 customConfigurationClass:(Class)arg7 delegate:(id)arg8;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)action;
- (id)allParameters;
- (id)appearance;
- (Class)customConfigurationClass;
- (id)delegate;
- (id)firstResponderParameterKey;
- (unsigned long long)hash;
- (unsigned long long)headerTextStyle;
- (id)icon;
- (unsigned long long)indentationLevel;
- (id)initWithAction:(id)arg1 processingParameters:(id)arg2 workflowTypes:(id)arg3 editable:(bool)arg4 processing:(bool)arg5 workflowRunning:(bool)arg6 appearance:(id)arg7 dimmed:(bool)arg8 draggingIntoWorkflow:(bool)arg9 customConfigurationClass:(Class)arg10 showResourceErrors:(bool)arg11 variableUIDelegate:(id)arg12 delegate:(id)arg13 cancelAction:(struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; })arg14 doneAction:(struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; })arg15 parameterSelectionAction:(struct CKTypedComponentAction<WFAction *, WFParameter *> { unsigned long long x1; id x2; id x3; SEL x4; })arg16 parameterSelectionExclusions:(id)arg17 placeholder:(bool)arg18;
- (bool)isDimmed;
- (bool)isDiscontinued;
- (bool)isDraggingIntoWorkflow;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (bool)isMissing;
- (bool)isPlaceholder;
- (bool)isProcessing;
- (bool)isRemovable;
- (bool)isSelectingParameter;
- (bool)isWorkflowRunning;
- (id)keyImage;
- (id)localizedFooter;
- (id)localizedName;
- (id)localizedParameterSummaryFormatString;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (unsigned long long)parameterCollapsingBehavior;
- (struct CKTypedComponentAction<WFAction *, WFParameter *> { unsigned long long x1; id x2; id x3; SEL x4; })parameterSelectionAction;
- (id)parameterStateWriter;
- (id)parameterStates;
- (id)parametersExcludedFromSelection;
- (id)parametersInListing;
- (struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; })processingCancelAction;
- (struct CKTypedComponentAction<> { unsigned long long x1; id x2; id x3; SEL x4; })processingDoneAction;
- (id)processingParameters;
- (id)resourceError;
- (unsigned long long)runningActionIndex;
- (bool)setState:(id)arg1 ofParameter:(id)arg2;
- (bool)showHandoffRequired;
- (bool)showResourceErrors;
- (bool)showSettings;
- (id)updatedModel;
- (id)variableProvider;
- (id)variableUIDelegate;
- (id)workflowTypes;

@end
