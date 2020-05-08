/* Generated by EzioChiu.
 */

@protocol GPURawCounterSourceGroup <NSObject>

@required

- (unsigned long long)availableCounterTriggers;
- (NSString *)name;
- (unsigned long long)sampleMarker;
- (unsigned long long)samplingPeriodInMicroseconds;
- (unsigned long long)samplingTriggers;
- (void)setSamplingPeriodInMicroseconds:(unsigned long long)arg1;
- (void)setSamplingTriggers:(unsigned long long)arg1;
- (void)setVendorOptions:(NSDictionary *)arg1;
- (NSArray *)sourceList;
- (bool)startSampling;
- (bool)stopSampling;
- (NSDictionary *)vendorOptions;

@end