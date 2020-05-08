/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListController : UIViewController <PXNavigationListDataSectionManagerObserver, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  __needsUpdateRowHeight;
    <PXNavigationListContainer> * _container;
    PXNavigationListDataSection * _dataSection;
    PXNavigationListDataSectionManager * _dataSectionManager;
    bool  _isTableViewUpdating;
    double  _rowHeight;
    NSUserActivity * _siriActionActivity;
    UITableView * _tableView;
}

@property (setter=_setNeedsUpdateRowHeight:, nonatomic) bool _needsUpdateRowHeight;
@property (nonatomic) bool allowsNavigation;
@property (nonatomic) <PXNavigationListContainer> *container;
@property (nonatomic, readonly) double contentHeight;
@property (nonatomic, retain) PXNavigationListDataSection *dataSection;
@property (nonatomic, readonly) PXNavigationListDataSectionManager *dataSectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTableViewUpdating;
@property (nonatomic) double rowHeight;
@property (nonatomic, retain) NSUserActivity *siriActionActivity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

+ (id)navigateToListItem:(id)arg1 sourceViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (id)_navigateTolistItem:(id)arg1 animated:(bool)arg2;
- (bool)_needsUpdateRowHeight;
- (void)_preferredContentSizeChanged:(id)arg1;
- (double)_rowHeightForCurrentFont;
- (void)_setNeedsUpdateRowHeight:(bool)arg1;
- (void)_updateCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateCellSeparatorStyle:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)_updateTableView;
- (bool)allowsNavigation;
- (id)container;
- (double)contentHeight;
- (id)dataSection;
- (id)dataSectionManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataSectionManager:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isTableViewUpdating;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)rowHeight;
- (void)setAllowsNavigation:(bool)arg1;
- (void)setContainer:(id)arg1;
- (void)setDataSection:(id)arg1;
- (void)setIsTableViewUpdating:(bool)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSiriActionActivity:(id)arg1;
- (id)siriActionActivity;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewContentSizeDidChange;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end