/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
 */

@interface NewsFeed.DebugInspectViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void dataSource;
    void factory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  key;
    void result;
    void tableView;
}

- (void).cxx_destruct;
- (void)doDismiss;
- (void)doOptions;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
