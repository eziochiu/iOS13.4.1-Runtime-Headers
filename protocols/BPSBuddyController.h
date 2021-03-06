/* Generated by EzioChiu.
 */

@protocol BPSBuddyController <NSObject>

@required

- (<BPSBuddyControllerDelegate> *)delegate;
- (void)setDelegate:(id <BPSBuddyControllerDelegate>)arg1;

@optional

+ (bool)controllerNeedsToRun;

- (bool)controllerAllowsNavigatingBackFrom;
- (bool)controllerAllowsNavigatingBackTo;
- (bool)holdBeforeDisplaying;
- (UIViewController *)viewController;

@end
