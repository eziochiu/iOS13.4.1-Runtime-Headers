/* Generated by EzioChiu.
 */

@protocol MAPersistentStoreProtocol <NSObject>

@required

+ (bool)copyFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
+ (void)deleteClosedDatabaseFilesAtBaseURL:(NSURL *)arg1;
+ (void)deleteMarkerAtURL:(NSURL *)arg1;
+ (bool)destroyAtURL:(NSURL *)arg1 error:(id*)arg2;
+ (bool)hasMarker:(NSURL *)arg1;
+ (bool)migrateFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
+ (NSString *)persistentStoreFileExtension;
+ (bool)setMarkerAtURL:(NSURL *)arg1;

- (void)addEdge:(MAEdge *)arg1 requiresTesting:(bool)arg2;
- (void)addNode:(MANode *)arg1 requiresTesting:(bool)arg2;
- (void)closePersistentStore;
- (void)deleteMarker;
- (bool)doesCascadeEdgeDelete;
- (void)enterBatch;
- (void)enumerateModelEdgesForDomains:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 13: NSIndexSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, short, NSString *, float, int, int, bool*, void*
- (void)enumerateModelEdgesForIdentifiers:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 13: NSIndexSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, short, NSString *, float, int, int, bool*, void*
- (void)enumerateModelEdgesForLabels:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 13: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, short, NSString *, float, int, int, bool*, void*
- (void)enumerateModelEdgesPropertiesWithBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDictionary *, bool*, void*
- (void)enumerateModelEdgesWithBlock:(void *)arg1; // needs 1 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, short, NSString *, float, int, int, bool*, void*
- (void)enumerateModelNodesForDomains:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 11: NSIndexSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, short, NSString *, float, bool*, void*
- (void)enumerateModelNodesForIdentifiers:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 11: NSIndexSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, short, NSString *, float, bool*, void*
- (void)enumerateModelNodesForLabels:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 11: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, short, NSString *, float, bool*, void*
- (void)enumerateModelNodesPropertiesWithBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDictionary *, bool*, void*
- (void)enumerateModelNodesWithBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, short, NSString *, float, bool*, void*
- (NSURL *)fileURL;
- (NSUUID *)graphIdentifier;
- (unsigned long long)graphVersion;
- (bool)hasMarker;
- (id)initWithFileURL:(NSURL *)arg1 options:(long long)arg2;
- (void)invalidateMemoryCaches;
- (void)invalidatePersistentStores;
- (void)leaveBatch;
- (bool)migrateToURL:(NSURL *)arg1 error:(id*)arg2;
- (void)removeModelEdgeForIdentifier:(unsigned long long)arg1;
- (void)removeModelEdgePropertiesForIdentifier:(long long)arg1;
- (void)removeModelEdgePropertyForKey:(NSString *)arg1 andIdentifier:(long long)arg2;
- (void)removeModelEdgesForIdentifiers:(NSSet *)arg1;
- (void)removeModelEdgesPropertiesForIdentifiers:(NSSet *)arg1;
- (void)removeModelNodeForIdentifier:(unsigned long long)arg1;
- (void)removeModelNodePropertiesForIdentifier:(long long)arg1;
- (void)removeModelNodePropertyForKey:(NSString *)arg1 andIdentifier:(long long)arg2;
- (void)removeModelNodesForIdentifiers:(NSSet *)arg1;
- (void)removeModelNodesPropertiesForIdentifiers:(NSSet *)arg1;
- (void)save:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setGraphVersion:(unsigned long long)arg1;
- (void)setMarker;
- (void)setModelEdgeProperties:(NSDictionary *)arg1 forIdentifier:(long long)arg2 clobberExisting:(bool)arg3;
- (void)setModelEdgePropertyValue:(id <MAPropertyTypeProtocol>)arg1 forKey:(NSString *)arg2 andIdentifier:(long long)arg3;
- (void)setModelNodeProperties:(NSDictionary *)arg1 forIdentifier:(long long)arg2 clobberExisting:(bool)arg3;
- (void)setModelNodePropertyValue:(id <MAPropertyTypeProtocol>)arg1 forKey:(NSString *)arg2 andIdentifier:(long long)arg3;

@end
