/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMEditorMenuViewController : PMEditorBasePlayerViewController <UITableViewDataSource, UITableViewDelegate> {
    <PMEditorMenuViewControllerDelegate> * _menuDelegate;
    VEKProduction * _production;
    NSIndexPath * _selectedIndexPath;
    bool  _showingActivityIndicatorForContentEditor;
    UITableView * _tableView;
    PMTitleEditorProvider * _titleProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PMEditorMenuViewControllerDelegate> *menuDelegate;
@property (nonatomic, retain) VEKProduction *production;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (nonatomic) bool showingActivityIndicatorForContentEditor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) PMTitleEditorProvider *titleProvider;

- (void).cxx_destruct;
- (id)_getTimeStringFromSeconds:(double)arg1;
- (id)_normalizedIndexPathForRow:(long long)arg1 inSection:(long long)arg2;
- (void)_updateFonts;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)menuDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popFromNavigationController;
- (id)production;
- (id)selectedIndexPath;
- (void)setMenuDelegate:(id)arg1;
- (void)setProduction:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setShowingActivityIndicatorForContentEditor:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleProvider:(id)arg1;
- (bool)showingActivityIndicatorForContentEditor;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)titleProvider;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end