/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUIHomeScreenAppIconView *view;

+ (bool)supportsRowModel:(id)arg1;

- (void)didEngageResult:(id)arg1;
- (void)dismissIfNecessaryForIconDrag;
- (id)setupView;
- (bool)shouldVerticallyCenter;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end