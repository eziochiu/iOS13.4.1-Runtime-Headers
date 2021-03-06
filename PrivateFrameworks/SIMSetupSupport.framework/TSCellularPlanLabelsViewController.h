/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSCellularPlanLabelsViewController : OBTableWelcomeController <TSSetupFlowItem, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _allowDismiss;
    <TSSIMSetupFlowDelegate> * _delegate;
    OBBoldTrayButton * _doneButton;
    NSLayoutConstraint * _heightAnchor;
    NSString * _iccid;
    TSCellularPlanLabelPickerViewController * _labelPickerViewController;
    NSArray * _planItemBadges;
    UITableViewCell * _sectionFooter;
    NSMutableArray * _sortedPlanItemsWithPendingLabels;
}

@property bool allowDismiss;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightAnchor;
@property (readonly) NSString *iccid;
@property (retain) TSCellularPlanLabelPickerViewController *labelPickerViewController;
@property (retain) NSArray *planItemBadges;
@property (retain) UITableViewCell *sectionFooter;
@property (retain) NSMutableArray *sortedPlanItemsWithPendingLabels;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (bool)allowDismiss;
- (bool)canBeShownFromSuspendedState;
- (id)delegate;
- (id)getPendingLabelAtIndex:(long long)arg1;
- (id)getPlanItemByIndex:(long long)arg1;
- (id)getPredefinedUserLabels;
- (id)heightAnchor;
- (id)iccid;
- (id)initWithAllowDismiss:(bool)arg1;
- (id)initWithIccid:(id)arg1 allowDismiss:(bool)arg2;
- (id)labelPickerViewController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)planItemBadges;
- (void)prepare:(id /* block */)arg1;
- (void)savePlanLabels:(id /* block */)arg1;
- (id)sectionFooter;
- (void)setAllowDismiss:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setLabelPickerViewController:(id)arg1;
- (void)setPendingLabel:(id)arg1 forPlanItem:(id)arg2;
- (void)setPlanItemBadges:(id)arg1;
- (void)setSectionFooter:(id)arg1;
- (void)setSortedPlanItemsWithPendingLabels:(id)arg1;
- (id)sortedPlanItemsWithPendingLabels;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
