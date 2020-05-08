/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
 */

@interface DEConditionExpression : DEConditionEntry

@property struct shared_ptr<siri::dialogengine::ConditionExpression> { struct ConditionExpression {} *x1; struct __shared_weak_count {} *x2; } This;
@property NSString *name;
@property NSString *op;
@property NSString *value;

- (bool)evaluate:(id)arg1;
- (id)init;
- (id)name;
- (id)op;
- (void)setName:(id)arg1;
- (void)setOp:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)validate:(id)arg1;
- (id)value;

@end