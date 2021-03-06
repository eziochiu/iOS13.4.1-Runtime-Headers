/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter {
    NSArray * _possibleStates;
    HKQuantityType * _quantityType;
}

@property (nonatomic, retain) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (bool)isHidden;
- (id)localizedLabel;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)quantityType;
- (void)setQuantityType:(id)arg1;
- (bool)supportsImportQuestions;
- (void)updatePossibleStates;

@end
