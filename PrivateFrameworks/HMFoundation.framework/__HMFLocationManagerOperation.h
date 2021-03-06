/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging> {
    HMFLocationAuthorization * _authorization;
    <HMFLocking> * _lock;
    CLLocationManager * _manager;
    bool  _ready;
}

@property (readonly) HMFLocationAuthorization *authorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CLLocationManager *manager;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)authorization;
- (void)dealloc;
- (id)initWithAuthorization:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (bool)isReady;
- (void)main;
- (id)manager;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
