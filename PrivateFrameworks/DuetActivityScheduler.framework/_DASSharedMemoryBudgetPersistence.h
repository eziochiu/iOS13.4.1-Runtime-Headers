/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASSharedMemoryBudgetPersistence : NSObject <_DASBudgetPersisting> {
    NSMutableDictionary * _budgetToIndex;
    struct { unsigned char x1; struct { BOOL x_2_1_1[32]; double x_2_1_2; double x_2_1_3; unsigned char x_2_1_4; } x2[32]; double x3; } * _currentData;
}

@property (nonatomic, retain) NSMutableDictionary *budgetToIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)log;
+ (id)persistence;

- (void).cxx_destruct;
- (id)budgetToIndex;
- (id)init;
- (id)lastModulationDate;
- (id)loadBudgetsWithExpectedNames:(id)arg1;
- (void)saveBudgets:(id)arg1;
- (void)saveModulationDate:(id)arg1;
- (void)setBudgetToIndex:(id)arg1;
- (void)updateBudget:(id)arg1;
- (id)validatedStringFromStoredValue:(char *)arg1 withAllowedNames:(id)arg2;

@end