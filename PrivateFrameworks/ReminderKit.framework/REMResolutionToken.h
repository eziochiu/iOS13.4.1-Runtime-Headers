/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMResolutionToken : NSObject <NSCopying, NSSecureCoding> {
    long long  _counter;
    double  _modificationTime;
    NSUUID * _replicaID;
}

@property (nonatomic) long long counter;
@property (nonatomic) double modificationTime;
@property (nonatomic, retain) NSUUID *replicaID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)counter;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCounter:(long long)arg1 modificationTime:(double)arg2 replicaID:(id)arg3;
- (id)initWithDefaultValue;
- (bool)isEqual:(id)arg1;
- (double)modificationTime;
- (id)replicaID;
- (void)setCounter:(long long)arg1;
- (void)setModificationTime:(double)arg1;
- (void)setReplicaID:(id)arg1;
- (void)update;

@end