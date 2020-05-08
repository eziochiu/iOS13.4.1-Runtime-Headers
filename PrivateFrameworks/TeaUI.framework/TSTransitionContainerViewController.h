/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
 */

@interface TSTransitionContainerViewController : UIViewController <TSTabBarSplitViewAutoObserver> {
    void backBarButtonItem;
    void disableSidebarBarButtonItem;
    void doneBarButtonItem;
    void identifier;
    void rootViewController;
    void sidebarBarButtonItem;
    void transition;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool hidesBottomBarWhenPushed;
@property (nonatomic, readonly) NSArray *leftBarButtonItems;
@property (nonatomic, readonly) NSArray *rightBarButtonItems;
@property (nonatomic, retain) UITabBarItem *tabBarItem;

- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)description;
- (void)handleDismiss;
- (void)handleSidebarWithSender:(id)arg1;
- (bool)hidesBottomBarWhenPushed;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1 identifier:(id)arg2;
- (id)leftBarButtonItems;
- (id)rightBarButtonItems;
- (void)setHidesBottomBarWhenPushed:(bool)arg1;
- (void)setTabBarItem:(id)arg1;
- (id)tabBarItem;
- (void)tabBarSplitViewDidChangeTraitCollectionToTraitCollection:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end