/* Generated by EzioChiu.
 */

@protocol SRSensorWriterDelegate <NSObject>

@optional

- (Class)classForSensorIdentifier:(NSString *)arg1;
- (NSString *)classNameForSensorIdentifier:(NSString *)arg1;
- (NSString *)exportingClassNameForSensor:(NSString *)arg1;
- (void)sensorWriterDidStopMonitoring:(SRSensorWriter *)arg1;
- (void)sensorWriterWillStartMonitoring:(SRSensorWriter *)arg1;

@end
