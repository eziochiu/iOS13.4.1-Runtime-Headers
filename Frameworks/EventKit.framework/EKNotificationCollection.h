/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKNotificationCollection : EKObject

@property (nonatomic, copy) NSSet *notifications;
@property (nonatomic, readonly) EKSource *source;

+ (Class)frozenClass;
+ (bool)isWeakRelationship;
+ (id)knownRelationshipMultiValueKeys;

- (unsigned int)_flags;
- (bool)_hasNotificationsCollectionFlag;
- (void)_setExternalID:(id)arg1;
- (void)_setExternalIDTag:(id)arg1;
- (void)_setFlags:(unsigned int)arg1;
- (void)_setNotificationsCollectionFlag;
- (void)_setSource:(id)arg1;
- (void)addNotification:(id)arg1;
- (bool)commit:(id*)arg1;
- (id)initWithOptions:(id)arg1;
- (id)notifications;
- (void)removeNotification:(id)arg1;
- (void)setNotifications:(id)arg1;
- (id)source;
- (bool)validate:(id*)arg1;

@end