/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIDetailedView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIAccessoryViewDelegate, TLKDetailsViewDelegate> {
    NSMutableArray * _accessoryViewControllers;
    <SearchUIDetailedViewDelegate> * _buttonDelegate;
    SearchUIAccessoryViewController * _currentAccessoryViewController;
    SearchUILeadingViewController * _currentLeadingViewController;
    TLKDetailsView * _detailsView;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    TLKStackView * _innerContainer;
    bool  _isVerticalAlignment;
    NSMutableArray * _leadingViewControllers;
    SearchUIDetailedRowModel * _rowModel;
}

@property (nonatomic, retain) NSMutableArray *accessoryViewControllers;
@property (nonatomic) <SearchUIDetailedViewDelegate> *buttonDelegate;
@property (nonatomic, retain) SearchUIAccessoryViewController *currentAccessoryViewController;
@property (nonatomic, retain) SearchUILeadingViewController *currentLeadingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TLKDetailsView *detailsView;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKStackView *innerContainer;
@property (nonatomic) bool isVerticalAlignment;
@property (nonatomic, retain) NSMutableArray *leadingViewControllers;
@property (nonatomic, retain) SearchUIDetailedRowModel *rowModel;
@property (readonly) Class superclass;

+ (void)addViewIfNecessary:(id)arg1 toStackView:(id)arg2 removeFromStackView:(id)arg3;

- (void).cxx_destruct;
- (id)accessoryViewControllers;
- (bool)arrangedViewMustCenter:(id)arg1;
- (id)buttonDelegate;
- (id)currentAccessoryViewController;
- (id)currentLeadingViewController;
- (id)detailsView;
- (id)feedbackDelegate;
- (void)footnoteButtonPressed;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFeedbackDelegate:(id)arg1;
- (id)innerContainer;
- (bool)isVerticalAlignment;
- (id)leadingViewControllers;
- (id)rowModel;
- (void)setAccessoryViewControllers:(id)arg1;
- (void)setButtonDelegate:(id)arg1;
- (void)setCurrentAccessoryViewController:(id)arg1;
- (void)setCurrentLeadingViewController:(id)arg1;
- (void)setDetailsView:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setInnerContainer:(id)arg1;
- (void)setIsVerticalAlignment:(bool)arg1;
- (void)setLeadingViewControllers:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)updateWithRowModel:(id)arg1;

@end