/* Generated by EzioChiu.
 */

@protocol PMLTrainingProtocol <NSObject>

@required

- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 label:(long long)arg2 sessionDescriptor:(PMLSessionDescriptor *)arg3 spotlightReference:(PMLSpotlightReference *)arg4 isInternal:(bool)arg5;
- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 source:(NSData *)arg2 label:(long long)arg3 sessionDescriptor:(PMLSessionDescriptor *)arg4 spotlightReference:(PMLSpotlightReference *)arg5 isInternal:(bool)arg6;
- (void)deleteSessionsWithBundleID:(NSString *)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSessionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (_PASTuple2 *)lastTrainingFeaturizationForModelName:(NSString *)arg1 andLocale:(NSString *)arg2;
- (NSDictionary *)planReceivedWithPayload:(NSData *)arg1 error:(id*)arg2;
- (void)setSourceRecoverer:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, NSData *, void*
- (void)trimDb;
- (void)updateLastTrainingFeaturizationForModel:(PMLSessionDescriptor *)arg1 andData:(NSData *)arg2;
- (void)updateSessionsAndLabelForModel:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 16: PMLSessionDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSData *, id /* block */, void*, void, id /* block */, long long, PMLSparseVector *, PMLSessionDescriptor *, void*, void*

@end
