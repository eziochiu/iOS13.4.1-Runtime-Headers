/* Generated by EzioChiu.
 */

@protocol MTToggleAlarmIntentHandling <NSObject>

@required

- (void)handleToggleAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTToggleAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTToggleAlarmIntentResponse *, void*
- (void)provideAlarmOptionsForToggleAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: MTToggleAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)resolveAlarmForToggleAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTToggleAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTIntentAlarmResolutionResult *, void*
- (void)resolveOperationForToggleAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTToggleAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTAlarmOperationResolutionResult *, void*
- (void)resolveStateForToggleAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTToggleAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTAlarmStateResolutionResult *, void*

@optional

- (void)confirmToggleAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTToggleAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTToggleAlarmIntentResponse *, void*
- (MTIntentAlarm *)defaultAlarmForToggleAlarm:(MTToggleAlarmIntent *)arg1;

@end