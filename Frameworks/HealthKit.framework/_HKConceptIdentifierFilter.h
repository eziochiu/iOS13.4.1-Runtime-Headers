/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKConceptIdentifierFilter : _HKFilter {
    HKConceptIdentifier * _conceptIdentifier;
    NSString * _keyPath;
    unsigned long long  _operatorType;
}

@property (nonatomic, readonly, copy) HKConceptIdentifier *conceptIdentifier;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) unsigned long long operatorType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 keyPath:(id)arg2 conceptIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptsDataObject:(id)arg1;
- (id)conceptIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (unsigned long long)operatorType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
