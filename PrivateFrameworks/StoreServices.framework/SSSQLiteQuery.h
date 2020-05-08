/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteQuery : NSObject {
    SSSQLiteDatabase * _database;
    SSSQLiteQueryDescriptor * _descriptor;
}

@property (readonly) long long countOfEntities;
@property (readonly) SSSQLiteDatabase *database;
@property (readonly) SSSQLiteQueryDescriptor *queryDescriptor;

- (id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned long long)arg2;
- (void)bindToSelectStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyEntityIdentifiers;
- (id)copySelectSQLWithProperties:(const id*)arg1 count:(unsigned long long)arg2;
- (long long)countOfEntities;
- (bool)createTemporaryTableWithName:(id)arg1 properties:(const id*)arg2 count:(unsigned long long)arg3;
- (id)database;
- (void)dealloc;
- (bool)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:(id /* block */)arg1;
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersistentIDsAndProperties:(const id*)arg1 count:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;
- (id)queryDescriptor;

@end