/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantityType : HKSampleType {
    HKUnit * _canonicalUnit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _canonicalUnitLock;
}

@property (readonly) long long aggregationStyle;
@property (nonatomic, readonly) HKUnit *canonicalUnit;
@property (nonatomic, readonly) _HKDimension *dimension;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_quantityTypeWithCode:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithCode:(long long)arg1;
- (bool)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3;
- (long long)aggregationStyle;
- (id)canonicalUnit;
- (id)dimension;
- (bool)isCompatibleWithUnit:(id)arg1;
- (void)validateUnit:(id)arg1;
- (void)validateUnitFromString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (long long)associatedSampleAggregationStyle;

@end