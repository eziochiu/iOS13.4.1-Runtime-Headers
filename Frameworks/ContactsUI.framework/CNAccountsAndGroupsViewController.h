/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsViewController : UITableViewController <UITableViewDelegate> {
    CNContactListStyleApplier * _contactListStyleApplier;
    CNAccountsAndGroupsDataSource * _dataSource;
    <CNAccountsAndGroupsViewControllerDelegate> * _delegate;
    bool  _needsReload;
    bool  _tableViewNeedsReloadAfterResume;
}

@property (nonatomic, retain) CNContactListStyleApplier *contactListStyleApplier;
@property (nonatomic, retain) CNAccountsAndGroupsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAccountsAndGroupsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsReload;
@property (readonly) Class superclass;
@property (nonatomic) bool tableViewNeedsReloadAfterResume;

- (void).cxx_destruct;
- (void)applicationDidResume;
- (void)applyStyle;
- (id)contactListStyleApplier;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (bool)needsReload;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)setContactListStyleApplier:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsReload:(bool)arg1;
- (void)setTableViewNeedsReloadAfterResume:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (bool)tableViewNeedsReloadAfterResume;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
