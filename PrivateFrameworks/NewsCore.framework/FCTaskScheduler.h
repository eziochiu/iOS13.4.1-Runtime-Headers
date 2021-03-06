/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTaskScheduler : NSObject

+ (void)disableOptionalPrefetching;
+ (void)executeOptionalPrefetchBlock:(id /* block */)arg1;
+ (id)lowPriorityOperationQueue;
+ (id)lowPriorityQueue;
+ (void)popHighPriorityTaskInFlight;
+ (void)pushHighPriorityTaskInFlight;
+ (void)scheduleLowPriorityBlock:(id /* block */)arg1;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)arg1;
+ (void)scheduleLowPriorityOperation:(id)arg1;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)arg1;

@end
