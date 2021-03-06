/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

@interface SWDatastoreManager : NSObject <SWDatastoreManager> {
    SWDatastore * _datastore;
    <SWLogger> * _logger;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) SWDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)datastore;
- (id)initWithDatastore:(id)arg1 logger:(id)arg2;
- (id)logger;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)updateDatastore:(id)arg1 originatingSession:(id)arg2;

@end
