/* Generated by EzioChiu.
 */

@protocol TVRCXPCRequestProtocol <NSObject>

@required

- (void)beginDeviceQuery;
- (void)cancelAuthChallengeForDeviceWithIdentifier:(NSString *)arg1;
- (void)closeConnectionToDeviceWithIdentifier:(NSString *)arg1 withType:(unsigned long long)arg2;
- (void)endDeviceQuery;
- (void)fetchActiveMREndpointUIDWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)fulfillAuthChallengeForDeviceWithIdentifier:(NSString *)arg1 withLocallyEnteredCode:(NSString *)arg2;
- (void)openConnectionToDeviceWithIdentifier:(NSString *)arg1;
- (void)sendButtonEvent:(TVRCButtonEvent *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendEvent:(void *)arg1 toDeviceWithIdentifier:(void *)arg2 options:(void *)arg3 response:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (void)sendGameControllerEvent:(TVRCGameControllerEvent *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendInputReturnKeyToDeviceWithIdentifier:(NSString *)arg1;
- (void)sendInputText:(NSString *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendInputTextPayload:(RTIDataPayload *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendTouchEvent:(TVRCTouchEvent *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)setVoiceRecorderAutomaticRecording:(bool)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)startVoiceRecordingForDeviceWithIdentifier:(NSString *)arg1;
- (void)stopVoiceRecordingForDeviceWithIdentifier:(NSString *)arg1;

@end