/* Generated by EzioChiu.
 */

@protocol SBIdleTimer <NSObject, NSCopying, BSDescriptionProviding>

@required

- (void)addIdleTimerObserver:(id <SBIdleTimerObserving>)arg1;
- (bool)isDisabled;
- (void)removeAllIdleTimerObservers;
- (void)removeIdleTimerObserver:(id <SBIdleTimerObserving>)arg1;
- (void)reset;

@end
