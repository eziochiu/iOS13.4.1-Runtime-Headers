/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTextTokenTextField : UITextField <WFTextField> {
    NSSet * _allowedVariableTypes;
    id /* block */  _customButtonBlock;
    NSString * _customButtonTitle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    unsigned long long  _syntaxHighlightingType;
    id /* block */  _variableBlock;
    WFVariableInputCoordinator * _variableCoordinator;
    <WFVariableInsertionFieldDelegate> * _variableInsertionDelegate;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
    bool  _variablesDisabled;
}

@property (nonatomic, copy) NSSet *allowedVariableTypes;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic, copy) id /* block */ customButtonBlock;
@property (nonatomic, copy) NSString *customButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long syntaxHighlightingType;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) id /* block */ variableBlock;
@property (nonatomic, retain) WFVariableInputCoordinator *variableCoordinator;
@property (nonatomic) <WFVariableInsertionFieldDelegate> *variableInsertionDelegate;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;
@property (nonatomic) bool variablesDisabled;

- (void).cxx_destruct;
- (id)allowedVariableTypes;
- (bool)becomeFirstResponder;
- (void)convertNonbreakingSpacesInClipboardIfNecessary;
- (void)copy:(id)arg1;
- (id /* block */)customButtonBlock;
- (id)customButtonTitle;
- (void)cut:(id)arg1;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditable;
- (void)paste:(id)arg1;
- (bool)resignFirstResponder;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)setCustomButtonBlock:(id /* block */)arg1;
- (void)setCustomButtonTitle:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEditable:(bool)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSyntaxHighlightingType:(unsigned long long)arg1;
- (void)setVariableBlock:(id /* block */)arg1;
- (void)setVariableCoordinator:(id)arg1;
- (void)setVariableInsertionDelegate:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)setVariablesDisabled:(bool)arg1;
- (bool)shouldChangeCharactersWithNonbreakingSpacesIfNecessaryInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2;
- (unsigned long long)syntaxHighlightingType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textWithRegularSpaces;
- (void)tintColorDidChange;
- (void)updateAllowedVariableTypes;
- (void)updateDoneButtonPresence;
- (void)updateVariableBlock;
- (bool)usesNonbreakingSpaces;
- (id /* block */)variableBlock;
- (id)variableCoordinator;
- (id)variableInsertionDelegate;
- (id)variableProvider;
- (id)variableUIDelegate;
- (bool)variablesDisabled;

@end