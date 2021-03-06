/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface _REMNSPersistentHistoryChangeStorage : NSObject <NSSecureCoding> {
    long long  _changeID;
    long long  _changeType;
    REMObjectID * _changedObjectID;
    REMNSPersistentHistoryChangeTombstone * _tombstone;
    NSSet * _updatedProperties;
}

@property (nonatomic) long long changeID;
@property (nonatomic) long long changeType;
@property (nonatomic, copy) REMObjectID *changedObjectID;
@property (nonatomic, copy) REMNSPersistentHistoryChangeTombstone *tombstone;
@property (nonatomic, copy) NSSet *updatedProperties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)changeID;
- (long long)changeType;
- (id)changedObjectID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setChangeID:(long long)arg1;
- (void)setChangeType:(long long)arg1;
- (void)setChangedObjectID:(id)arg1;
- (void)setTombstone:(id)arg1;
- (void)setUpdatedProperties:(id)arg1;
- (id)tombstone;
- (id)updatedProperties;

@end
