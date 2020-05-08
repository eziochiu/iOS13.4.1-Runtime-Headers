/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
 */

@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider {
    NSObject<STRootViewModelCoordinator> * _coordinator;
    STUsageDetailsViewModel * _usageDetailsViewModel;
}

@property (nonatomic, readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (nonatomic, readonly) STUsageDetailsViewModel *usageDetailsViewModel;

- (void).cxx_destruct;
- (id)coordinator;
- (id)initWithCategoryUsageItem:(id)arg1 coordinator:(id)arg2;
- (void)showMostUsedDetailListController:(id)arg1;
- (id)totalUsageDescription:(id)arg1;
- (id)usageDetailsViewModel;

@end