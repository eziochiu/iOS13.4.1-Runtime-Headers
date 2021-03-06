/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFAutomationSelectTypeViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {
    <WFAutomationSelectTypeViewControllerDelegate> * _delegate;
    NSArray * _tableContent;
    WFTriggerManager * _triggerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAutomationSelectTypeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tableContent;
@property (nonatomic, readonly) WFTriggerManager *triggerManager;

+ (id)allKnownTriggersSortedAsInUI;
+ (id)allTriggersByGroupIdentifier;
+ (id)buildTableContent;
+ (id)sortedTriggerGroupIdentifiers;
+ (id)triggerGroupTitleForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithTriggerManager:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)triggerManager;
- (Class)triggerSourceClassForIndexPath:(id)arg1;
- (void)viewDidLoad;

@end
