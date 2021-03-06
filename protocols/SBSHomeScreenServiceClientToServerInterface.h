/* Generated by EzioChiu.
 */

@protocol SBSHomeScreenServiceClientToServerInterface

@required

- (void)addWidgetToTodayViewWithBundleIdentifier:(NSString *)arg1;
- (NSArray *)folderPathToIconWithBundleIdentifier:(NSString *)arg1;
- (NSNumber *)lowDensityIconLayoutEnabledValue;
- (oneway void)requestSuggestedApplicationWithBundleIdentifier:(void *)arg1 assertionPort:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, BSMachPortSendRight *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)resetHomeScreenLayoutWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setLowDensityIconLayoutEnabledValue:(NSNumber *)arg1;

@end
