/* Generated by EzioChiu.
 */

@protocol CSSiriClientBehaviorMonitorDelegate <NSObject>

@required

- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 successfully:(bool)arg3 option:(CSAudioStartStreamOption *)arg4;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2;

@end