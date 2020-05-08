/* Generated by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface AdQueue : NSObject {
    NSMutableArray * _array;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
}

@property (nonatomic, retain) NSMutableArray *array;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrentQueue;

- (void).cxx_destruct;
- (id)array;
- (id)concurrentQueue;
- (unsigned long long)count;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;
- (void)setArray:(id)arg1;
- (void)setConcurrentQueue:(id)arg1;

@end