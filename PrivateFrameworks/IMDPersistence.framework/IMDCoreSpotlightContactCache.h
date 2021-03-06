/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDCoreSpotlightContactCache : NSObject {
    NSCache * _cache;
}

@property (nonatomic, retain) NSCache *cache;

+ (id)contactsForVCardAtPath:(id)arg1;
+ (id)sharedInstance;
+ (void)updateAttributes:(id)arg1 withAddressFromContact:(id)arg2;
+ (void)vCardCoordinateForMapURL:(id)arg1 outLatitude:(float*)arg2 outLongitude:(float*)arg3;
+ (id)vCardMapURLForContact:(id)arg1;
+ (id)vCardNameForContact:(id)arg1;

- (id)cache;
- (void)cacheContact:(id)arg1 forKey:(id)arg2;
- (id)cachedContactForKey:(id)arg1 cacheHit:(bool*)arg2;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (void)setCache:(id)arg1;

@end
