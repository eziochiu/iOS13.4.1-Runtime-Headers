/* Generated by EzioChiu.
 */

@protocol GKTournamentExtensionInterface <GKSocialGamingExtensionInterface>

@required

- (oneway void)initializeWithLocalPlayer:(void *)arg1 hostPID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: GKLocalPlayer *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)setupWithViewRequest:(GKTournamentViewRequest *)arg1;
- (GKTournamentViewRequest *)viewRequest;

@end
