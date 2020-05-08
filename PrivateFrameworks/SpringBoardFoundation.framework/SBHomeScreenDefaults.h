/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBHomeScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isLayoutLowDensity, nonatomic) bool layoutLowDensity;
@property (nonatomic) bool shouldFudgeShortcutsToCauseMaximumPain;
@property (nonatomic) bool shouldShowWidgetsTeachingView;
@property (getter=hasSidebarEverBeenVisible, nonatomic) bool sidebarEverBeenVisible;
@property (nonatomic, copy) NSDate *sidebarLearningCadenceCommenceDate;
@property (nonatomic) long long sidebarLearningCadenceEpoch;
@property (getter=isSidebarPinned, nonatomic) bool sidebarPinned;
@property (getter=isSidebarVisible, nonatomic) bool sidebarVisible;
@property (nonatomic) bool usesAutomaticHomeScreenEnvironment;

- (void)_bindAndRegisterDefaults;

@end