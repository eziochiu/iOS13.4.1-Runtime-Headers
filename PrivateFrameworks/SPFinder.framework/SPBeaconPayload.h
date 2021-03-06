/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

@interface SPBeaconPayload : NSObject <NSSecureCoding> {
    SPAdvertisement * _advertisement;
    SPEstimatedLocation * _location;
    long long  _observationValue;
}

@property (nonatomic, retain) SPAdvertisement *advertisement;
@property (nonatomic, copy) SPEstimatedLocation *location;
@property (nonatomic) long long observationValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisement;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisement:(id)arg1 location:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (long long)observationValue;
- (void)setAdvertisement:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setObservationValue:(long long)arg1;

@end
