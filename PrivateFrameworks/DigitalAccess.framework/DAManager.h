/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
 */

@interface DAManager : NSObject {
    NSMutableSet * _activeSessions;
    NSXPCConnection * _clientConnection;
}

@property (nonatomic, retain) NSXPCConnection *clientConnection;

+ (bool)isSupported;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)clientConnection;
- (id)connection;
- (id)createManagementSessionWithDelegate:(id)arg1;
- (id)createPairingSessionWithDelegate:(id)arg1;
- (id)createSharingSessionWithDelegate:(id)arg1;
- (void)establishXpcConnection;
- (id)init;
- (void)invalidateSessions;
- (void)registerFriendSideSharingTestCompletion:(id /* block */)arg1;
- (void)registerFriendSideSharingTestCompletionHandler:(id /* block */)arg1;
- (void)registerFriendSideSharingTestInvitationHandler:(id /* block */)arg1;
- (void)registerFriendSideSharingTestInvitationUUIDHandler:(id /* block */)arg1;
- (void)registerOwnerSideInvitationRequestHandler:(id /* block */)arg1;
- (void)registerOwnerSideSharingTestCompletionHandler:(id /* block */)arg1;
- (void)registerOwnerSideSharingTestInvitations:(id)arg1 callback:(id /* block */)arg2;
- (void)registerSession:(id)arg1;
- (void)releaseConnection;
- (void)setClientConnection:(id)arg1;
- (void)tearDownXpcConnection;
- (void)unregisterSession:(id)arg1;
- (void)unregisterSharingTestHandlers;

@end