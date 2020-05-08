/* Generated by EzioChiu.
 */

@protocol NCNotificationListCoalescingControlsViewDelegate <NSObject>

@optional

- (UIView *)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsView:(NCNotificationListCoalescingControlsView *)arg1 didTransitionToClearState:(bool)arg2;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsClear:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsRestack:(NCNotificationListCoalescingControlsView *)arg1;

@end