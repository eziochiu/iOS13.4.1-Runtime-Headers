/* Generated by EzioChiu.
 */

@protocol CKTransactionalComponentDataSourceListener

@required

- (void)transactionalComponentDataSource:(CKTransactionalComponentDataSource *)arg1 didModifyPreviousState:(CKTransactionalComponentDataSourceState *)arg2 byApplyingChanges:(CKTransactionalComponentDataSourceAppliedChanges *)arg3;

@end