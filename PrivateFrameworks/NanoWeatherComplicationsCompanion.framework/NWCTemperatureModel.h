/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

@interface NWCTemperatureModel : NSObject {
    double  _fraction;
    NSString * _localizedTemperatureCurrent;
    NSString * _localizedTemperatureHigh;
    NSString * _localizedTemperatureLow;
    NSArray * _spectrum;
    NSArray * _spectrumTicks;
    UIColor * _tintColorHigh;
    UIColor * _tintColorLow;
}

@property (nonatomic, readonly) double fraction;
@property (nonatomic, readonly) NSString *localizedTemperatureCurrent;
@property (nonatomic, readonly) NSString *localizedTemperatureHigh;
@property (nonatomic, readonly) NSString *localizedTemperatureLow;
@property (nonatomic, readonly) NSArray *spectrum;
@property (nonatomic, readonly) NSArray *spectrumTicks;
@property (nonatomic, readonly) UIColor *tintColorHigh;
@property (nonatomic, readonly) UIColor *tintColorLow;

+ (id)temperatureModelForCurrentObservation:(id)arg1 dailyForecastedConditions:(id)arg2 temperatureFormatter:(id)arg3 shouldUseNoUnitCurrentTemperature:(bool)arg4;

- (void).cxx_destruct;
- (double)fraction;
- (id)localizedTemperatureCurrent;
- (id)localizedTemperatureHigh;
- (id)localizedTemperatureLow;
- (id)spectrum;
- (id)spectrumTicks;
- (id)tintColorHigh;
- (id)tintColorLow;

@end
