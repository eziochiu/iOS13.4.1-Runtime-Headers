/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface MTManagedObjectContext : NSManagedObjectContext {
    long long  _type;
}

@property (nonatomic) long long type;

- (bool)_isInternalCoreDataQueue;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)deleteObject:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (bool)handleError:(id*)arg1 withCallback:(id /* block */)arg2;
- (void)insertObject:(id)arg1;
- (id)objectRegisteredForID:(id)arg1;
- (id)objectWithID:(id)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)reset;
- (void)seedCacheWithObjectsInArray:(id)arg1 forUUIDKey:(id)arg2 entityName:(id)arg3;
- (void)seedCacheWithObjectsInEntity:(id)arg1 predicate:(id)arg2;
- (void)seedCacheWithObjectsInEntity:(id)arg1 predicateFormat:(id)arg2;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)validateConcurencyType;

@end