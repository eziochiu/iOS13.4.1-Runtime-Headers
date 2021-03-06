/* Generated by EzioChiu.
 */

@protocol RBProcessManaging <NSObject>

@required

- (void)applySystemState:(RBSystemState *)arg1;
- (NSSet *)busyExtensionInstancesFromSet:(NSSet *)arg1;
- (void)didUpdateProcessStates:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: RBProcessStateChangeSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (RBSProcessHandle *)executeLaunchRequest:(RBSLaunchRequest *)arg1 withError:(out id*)arg2;
- (bool)executeTerminateRequest:(RBSTerminateRequest *)arg1 withError:(out id*)arg2;
- (bool)isActiveProcess:(RBProcess *)arg1;
- (RBProcess *)processForAuditToken:(BSAuditToken *)arg1;
- (RBProcess *)processForIdentifier:(id <RBSProcessIdentifier>)arg1;
- (RBProcess *)processForIdentity:(RBSProcessIdentity *)arg1;
- (RBProcess *)processForInstance:(RBSProcessInstance *)arg1;
- (NSSet *)processesMatchingPredicate:(RBSProcessPredicate *)arg1;
- (void)removeStateForProcessIdentity:(RBSProcessIdentity *)arg1;

@end
