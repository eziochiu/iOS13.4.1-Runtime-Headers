/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface IMPlayerManifest : NSObject {
    NSUserActivity * _activity;
    unsigned long long  _currentIndex;
    IMPlayerItem * _currentItem;
    bool  _isLoaded;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _title;
}

@property (nonatomic, retain) NSUserActivity *activity;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic, retain) IMPlayerItem *currentItem;
@property (nonatomic) bool isLoaded;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *title;

+ (id)_activityType;
+ (id)activityTypeSuffix;
+ (void)createManifestForActivity:(id)arg1 completion:(id /* block */)arg2;
+ (void)registerManifestForRestoration:(Class)arg1;
+ (void)restoreActivity:(id)arg1 completion:(id /* block */)arg2;
+ (id)supportedActivityTypes;

- (void).cxx_destruct;
- (void)_load:(id /* block */)arg1;
- (id)activity;
- (void)assertIndexInBounds:(unsigned long long)arg1;
- (unsigned long long)count;
- (unsigned long long)currentIndex;
- (id)currentItem;
- (id)description;
- (bool)hasNext;
- (bool)hasPrevious;
- (id)init;
- (bool)isLoaded;
- (void)load:(id /* block */)arg1;
- (void)next;
- (void)nextManifest:(id /* block */)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)postManifestDidChangeNotification;
- (void)previous;
- (id)queue;
- (void)setActivity:(id)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setCurrentItem:(id)arg1;
- (void)setIsLoaded:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
