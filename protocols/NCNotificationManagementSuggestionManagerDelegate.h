/* Generated by EzioChiu.
 */

@protocol NCNotificationManagementSuggestionManagerDelegate <NSObject>

@required

- (void)notificationManagementSuggestionManager:(NCNotificationManagementSuggestionManager *)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withPresentingView:(UIView *)arg4;
- (NCNotificationSectionSettings *)notificationManagementSuggestionManager:(NCNotificationManagementSuggestionManager *)arg1 requestsSectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationManagementSuggestionManager:(NCNotificationManagementSuggestionManager *)arg1 requestsUpdatingContentForNotificationRequest:(NCNotificationRequest *)arg2;

@end
