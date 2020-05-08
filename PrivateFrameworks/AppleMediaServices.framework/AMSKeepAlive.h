/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSKeepAlive : NSObject {
    NSString * _logKey;
    NSString * _name;
    long long  _style;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long style;

+ (void)_accessAssertionCache:(id /* block */)arg1;
+ (void)_handleAssertionExpiration;
+ (id)keepAliveWithFormat:(id)arg1;
+ (id)keepAliveWithName:(id)arg1;
+ (id)keepAliveWithName:(id)arg1 style:(long long)arg2;
+ (void)keepAliveWithName:(id)arg1 style:(long long)arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_assertionName;
- (id)_cacheKey;
- (void)_removeOSTransaction;
- (void)_removeProcessAssertion;
- (void)_startLogTimer;
- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 style:(long long)arg2;
- (void)invalidate;
- (id)name;
- (long long)style;

@end