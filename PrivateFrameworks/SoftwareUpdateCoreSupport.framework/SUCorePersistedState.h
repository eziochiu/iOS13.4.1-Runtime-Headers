/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

@interface SUCorePersistedState : NSObject {
    NSMutableDictionary * _persistedState;
    NSObject<OS_dispatch_queue> * _persistedStateQueue;
    NSString * _persistencePath;
    NSString * _versionPolicyLayer;
    NSString * _versionSUCore;
}

@property (nonatomic, retain) NSMutableDictionary *persistedState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *persistedStateQueue;
@property (nonatomic, retain) NSString *persistencePath;
@property (nonatomic, retain) NSString *versionPolicyLayer;
@property (nonatomic, retain) NSString *versionSUCore;

- (void).cxx_destruct;
- (id)_createEmptyPersistedState;
- (void)_writePersistedState;
- (bool)booleanForKey:(id)arg1;
- (bool)booleanForKey:(id)arg1 forType:(int)arg2;
- (id)dataForKey:(id)arg1;
- (id)dataForKey:(id)arg1 forType:(int)arg2;
- (id)dateForKey:(id)arg1;
- (id)dateForKey:(id)arg1 forType:(int)arg2;
- (id)description;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1 forType:(int)arg2;
- (id)initWithDispatchQueue:(id)arg1 withPersistencePath:(id)arg2 forPolicyVersion:(id)arg3;
- (bool)isPersistedStateLoaded;
- (bool)loadPersistedState;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 forType:(int)arg3;
- (void)persistBoolean:(bool)arg1 forKey:(id)arg2;
- (void)persistBoolean:(bool)arg1 forKey:(id)arg2 forType:(int)arg3;
- (void)persistData:(id)arg1 forKey:(id)arg2;
- (void)persistData:(id)arg1 forKey:(id)arg2 forType:(int)arg3;
- (void)persistDate:(id)arg1 forKey:(id)arg2;
- (void)persistDate:(id)arg1 forKey:(id)arg2 forType:(int)arg3;
- (void)persistDictionary:(id)arg1 forKey:(id)arg2;
- (void)persistDictionary:(id)arg1 forKey:(id)arg2 forType:(int)arg3;
- (void)persistObject:(id)arg1 forKey:(id)arg2;
- (void)persistObject:(id)arg1 forKey:(id)arg2 forType:(int)arg3;
- (void)persistString:(id)arg1 forKey:(id)arg2;
- (void)persistString:(id)arg1 forKey:(id)arg2 forType:(int)arg3;
- (void)persistULL:(unsigned long long)arg1 forKey:(id)arg2;
- (void)persistULL:(unsigned long long)arg1 forKey:(id)arg2 forType:(int)arg3;
- (id)persistedContentsType;
- (id)persistedCoreVersion;
- (id)persistedPolicyVersion;
- (id)persistedState;
- (id)persistedStateQueue;
- (id)persistencePath;
- (void)removePersistedState;
- (void)setPersistedState:(id)arg1;
- (void)setPersistencePath:(id)arg1;
- (void)setVersionPolicyLayer:(id)arg1;
- (void)setVersionSUCore:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)stringForKey:(id)arg1 forType:(int)arg2;
- (id)summary;
- (unsigned long long)ullForKey:(id)arg1;
- (unsigned long long)ullForKey:(id)arg1 forType:(int)arg2;
- (id)versionPolicyLayer;
- (id)versionSUCore;

@end