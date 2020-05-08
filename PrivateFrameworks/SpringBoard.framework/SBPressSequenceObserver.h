/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBPressSequenceObserver : NSObject <SBAWDMetricDelegate, SBPressCollectorDelegate> {
    <SBPressSequenceObserverDelegate> * _delegate;
    SBPressCollector * _pressCollector;
    NSString * _pressName;
    NSUUID * _sosTriggerUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBPressSequenceObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBPressCollector *pressCollector;
@property (nonatomic, readonly) NSString *pressName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notePowerDownImminent;
- (void)_setPressCollector:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithPressName:(id)arg1;
- (void)metricDidPost:(id)arg1 data:(id)arg2;
- (void)noteDidBeginSOSWithUUID:(id)arg1;
- (id)pressCollector;
- (void)pressCollector:(id)arg1 didCollectSequence:(id)arg2;
- (id)pressName;
- (void)setDelegate:(id)arg1;

@end