/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STVoiceControlStatusDomainDataDiff : NSObject <STStatusDomainDataDiff> {
    BSSettings * _changes;
}

@property (nonatomic, readonly, copy) BSSettings *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)diffFromData:(id)arg1 toData:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToMutableData:(id)arg1;
- (id)changes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingToData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithChanges:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end