/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface KPersistentMovieInfo : NSObject

+ (void)addURL:(id)arg1 withDate:(id)arg2;
+ (long long)cacheCount;
+ (id)cachedCreationDateForURL:(id)arg1;
+ (void)createOrLoadPersistentDict;
+ (void)ensureCacheDirectoryExists;
+ (id)infoCachePath;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)nukeCaches;
+ (void)reallySaveDict:(id)arg1;
+ (void)savePersistentDict;

@end
