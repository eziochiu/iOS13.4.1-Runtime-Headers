/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SSRankingFeedbackHandler : NSObject {
    NSObject<OS_dispatch_queue> * _countQueue;
    NSMutableDictionary * _mapProtectionClassToBundleIdToItem;
    NSMutableArray * _sectionCSItems;
}

@property (retain) NSObject<OS_dispatch_queue> *countQueue;
@property (retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem;
@property (retain) NSMutableArray *sectionCSItems;

+ (id)copyRenderEngagementCounts;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_indexItemWithIdentifier:(id)arg1 bundleID:(id)arg2 startDate:(id)arg3 pc:(id)arg4;
- (id)countQueue;
- (void)didEngageResultWithRankingItem:(id)arg1 startDate:(id)arg2 protectionClass:(id)arg3;
- (void)fetchBundleRenderAndEngagementInfo;
- (void)fetchBundleRenderAndEngagementInfo:(id)arg1;
- (id)fetchResults;
- (id)getSyntheticTestRankingItem;
- (id)getSyntheticTestRankingItemsForStressTest;
- (id)init;
- (id)mapProtectionClassToBundleIdToItem;
- (void)resetResultWithRankingItems:(id)arg1;
- (void)resultsWithRankingItemsDidBecomeVisible:(id)arg1 date:(id)arg2 protectionClassMapping:(id)arg3;
- (id)sectionCSItems;
- (void)setCountQueue:(id)arg1;
- (void)setMapProtectionClassToBundleIdToItem:(id)arg1;
- (void)setSectionCSItems:(id)arg1;
- (void)stressTestCounts;
- (void)testCountsAfterCoupleYears;
- (void)testCountsAfterYear;
- (void)testCountsForRegularEngagement;
- (void)testCountsMovingCoupleOfYearsInPast;
- (void)testCountsMovingDaysInPast;
- (void)testCountsMovingYearInPast;
- (void)testCountsUptoHalfYear;
- (void)testCountsUptoMonth;
- (void)testCountsUptoOneDay;
- (void)testCountsUptoQuarter;
- (void)testCountsUptoWeek;
- (void)testCountsUptoYear;
- (void)testForDummyEntry;
- (void)testForDurationWithIntervals:(int*)arg1 maxIndex:(int)arg2 duration:(long long)arg3 counts:(id)arg4;
- (void)writeRenderAndEngagementInfo;

@end