/* Generated by EzioChiu
   Image: /usr/lib/libprequelite.dylib
 */

@interface PQLStatement : NSObject {
    NSMutableArray * _aliveBinds;
    bool  _inUse;
    bool  _isTraced;
    PQLStatement * _next;
    id /* block */  _profilingHook;
    short  _specLength;
    union { 
        unsigned char inlined[8]; 
        unsigned char *ptr; 
    }  _specUnion;
    struct sqlite3_stmt { } * _stmt;
}

@property (nonatomic, readonly) bool isTraced;

- (void).cxx_destruct;
- (bool)_prepare:(const char *)arg1 withDB:(id)arg2;
- (void)bindArguments:(char *)arg1 db:(id)arg2;
- (void)bindFromArray:(id)arg1 db:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2 db:(id)arg3 cache:(struct cache_s { }*)arg4;
- (id)initWithQueryBuilder:(id /* block */)arg1 db:(id)arg2 cache:(struct cache_s { }*)arg3;
- (id)initWithStatement:(id)arg1 forDB:(id)arg2;
- (void)invalidate;
- (bool)isTraced;
- (void)keepBindAlive:(id)arg1;
- (id)translate:(id)arg1 hasInjections:(bool*)arg2 arguments:(char *)arg3;
- (id)translate:(id)arg1 withBuilder:(id)arg2;
- (void)unbindForDB:(id)arg1 returnedRows:(unsigned long long)arg2;

@end