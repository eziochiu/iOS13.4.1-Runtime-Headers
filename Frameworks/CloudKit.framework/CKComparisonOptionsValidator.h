/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKComparisonOptionsValidator : CKPredicateValidatorInstance {
    unsigned long long  _options;
}

@property (nonatomic) unsigned long long options;

- (id)CKPropertiesDescription;
- (id)initWithOptions:(unsigned long long)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end