/* Generated by EzioChiu.
 */

@protocol BSXPCServiceConnectionConfiguring

@required

- (void)encodeInitiatingContext:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BSXPCEncoding> *, void*
- (void)setActivationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSXPCServiceConnection *, void*
- (void)setConnectionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSXPCServiceConnection *, BSXPCServiceConnection *, void*
- (void)setContext:(id)arg1;
- (void)setErrorHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BSInvalidatable> *, NSError *, void*
- (void)setInterface:(BSServiceInterface *)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterruptionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSXPCServiceConnection *, void*
- (void)setInvalidationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSXPCServiceConnection *, void*
- (void)setMessageHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BSInvalidatable> *, <BSXPCServiceConnectionMessage> *, void*
- (void)setName:(NSString *)arg1;
- (void)setNoMoreChildrenHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSXPCServiceConnection *, void*
- (void)setNonLaunchingAware;
- (void)setServiceQuality:(BSServiceQuality *)arg1;
- (void)setTargetDispatchingQueue:(id <BSServiceDispatchingQueue>)arg1;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end