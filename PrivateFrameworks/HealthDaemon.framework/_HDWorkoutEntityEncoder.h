/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDWorkoutEntityEncoder : HDEntityEncoder {
    bool  _includeCondenserInfo;
    HDSQLiteStatement * _workoutEntryLookupStatement;
}

+ (long long)estimatedEncodedSize;

- (void).cxx_destruct;
- (bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow { }*)arg3 error:(id*)arg4;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow { }*)arg2 error:(id*)arg3;
- (id)createBareObject;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(id /* block */)arg6;
- (id)orderedProperties;

@end