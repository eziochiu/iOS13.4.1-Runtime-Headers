/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAccessoryViewController : NSObject <SearchUIDetailedRowComponent> {
    <SearchUIAccessoryViewDelegate> * _delegate;
    <SearchUIFeedbackDelegate> * feedbackDelegate;
    SearchUIDetailedRowModel * rowModel;
    UIView * view;
}

@property (readonly, copy) NSString *debugDescription;
@property <SearchUIAccessoryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SearchUIDetailedRowModel *rowModel;
@property (readonly) Class superclass;
@property (readonly) unsigned long long type;
@property (nonatomic, retain) UIView *view;

+ (Class)accessoryViewClassForRowModel:(id)arg1;
+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (void)buttonPressed;
- (id)controlInView:(id)arg1;
- (id)delegate;
- (void)didEngageAction:(unsigned long long)arg1 destination:(unsigned long long)arg2;
- (id)feedbackDelegate;
- (void)hide;
- (id)init;
- (id)rowModel;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)setView:(id)arg1;
- (id)setupView;
- (bool)shouldTopAlignForAccessibilityContentSizes;
- (bool)shouldVerticallyCenter;
- (unsigned long long)type;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)view;

@end
