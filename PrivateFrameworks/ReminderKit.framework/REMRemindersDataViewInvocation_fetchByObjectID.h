/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMRemindersDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding> {
    NSArray * _objectIDs;
    bool  _showMarkedForDeleteObjects;
}

@property (nonatomic, readonly) NSArray *objectIDs;
@property (nonatomic) bool showMarkedForDeleteObjects;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIDs;
- (void)setShowMarkedForDeleteObjects:(bool)arg1;
- (bool)showMarkedForDeleteObjects;

@end
