/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTextTokenEditorView : UIView <UITextFieldDelegate, UITextViewDelegate, WFVariableInsertionFieldDelegate> {
    NSSet * _allowedVariableTypes;
    long long  _autocapitalizationType;
    long long  _autocorrectionType;
    <WFTextTokenEditorViewDelegate> * _delegate;
    bool  _editable;
    UIFont * _font;
    long long  _keyboardType;
    NSString * _placeholder;
    id /* block */  _revealBlock;
    WFTextScrollView * _scrollView;
    bool  _secureTextEntry;
    long long  _smartDashesType;
    long long  _smartQuotesType;
    bool  _switching;
    unsigned long long  _syntaxHighlightingType;
    long long  _textAlignment;
    UIColor * _textColor;
    NSString * _textContentType;
    WFTextTokenTextField * _textField;
    id /* block */  _updateBlock;
    <WFVariableProvider> * _variableProvider;
    unsigned long long  _variableResultType;
    <WFVariableUIDelegate> * _variableUIDelegate;
    bool  _variablesDisabled;
}

@property (nonatomic, copy) NSSet *allowedVariableTypes;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UIView<WFTextField> *currentField;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTextTokenEditorViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) id /* block */ revealBlock;
@property (nonatomic, retain) WFTextScrollView *scrollView;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartQuotesType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long syntaxHighlightingType;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, retain) WFTextTokenTextField *textField;
@property (nonatomic, copy) id /* block */ updateBlock;
@property (nonatomic) <WFVariableProvider> *variableProvider;
@property (nonatomic) unsigned long long variableResultType;
@property (nonatomic, copy) WFVariableString *variableString;
@property (nonatomic) <WFVariableUIDelegate> *variableUIDelegate;
@property (nonatomic) bool variablesDisabled;

- (void).cxx_destruct;
- (id)allowedVariableTypes;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (bool)becomeFirstResponder;
- (void)beginEditingWithContext:(id)arg1;
- (id)currentField;
- (id)currentView;
- (void)dealloc;
- (id)delegate;
- (id)font;
- (id)init;
- (void)insertVariable:(id)arg1;
- (bool)isEditable;
- (bool)isSecureTextEntry;
- (long long)keyboardType;
- (void)layoutSubviews;
- (void)paste:(id)arg1;
- (id)placeholder;
- (void)removeTextChangeObserver;
- (bool)resignFirstResponder;
- (id /* block */)revealBlock;
- (id)scrollView;
- (void)selectRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAllowedVariableTypes:(id)arg1;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRevealBlock:(id /* block */)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSmartDashesType:(long long)arg1;
- (void)setSmartQuotesType:(long long)arg1;
- (void)setSyntaxHighlightingType:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextContentType:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void)setUsesTextView:(bool)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableResultType:(unsigned long long)arg1;
- (void)setVariableString:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)setVariablesDisabled:(bool)arg1;
- (long long)smartDashesType;
- (long long)smartQuotesType;
- (unsigned long long)syntaxHighlightingType;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)textContentType;
- (void)textDidChange;
- (id)textField;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id /* block */)updateBlock;
- (bool)usesTextView;
- (id)variableProvider;
- (unsigned long long)variableResultType;
- (id)variableString;
- (id)variableUIDelegate;
- (bool)variablesDisabled;

@end
