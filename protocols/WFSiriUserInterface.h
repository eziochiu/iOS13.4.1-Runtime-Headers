/* Generated by EzioChiu.
 */

@protocol WFSiriUserInterface <WFUserInterface>

@required

- (NSArray *)airPlayRouteIDs;
- (void)configureIntent:(INIntent *)arg1;
- (bool)executeIntent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INInteraction *, NSError *, void*
- (long long)executionContext;
- (void)openInteractionInApp:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: INInteraction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)openUserActivity:(void *)arg1 bundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSUserActivity *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)showInteractionIfNeeded:(void *)arg1 requiringConfirmation:(void *)arg2 requiringAuthentication:(void *)arg3 executionStage:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: INInteraction *, bool, bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)speakText:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
