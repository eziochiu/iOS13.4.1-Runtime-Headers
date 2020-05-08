/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBCloudZoneConfiguration : HMFObject {
    bool  _shouldRebuildOnManateeKeyLoss;
    bool  _shouldSuppressDelegateCallbacksOnInitialFetch;
}

@property bool shouldRebuildOnManateeKeyLoss;
@property bool shouldSuppressDelegateCallbacksOnInitialFetch;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setShouldRebuildOnManateeKeyLoss:(bool)arg1;
- (void)setShouldSuppressDelegateCallbacksOnInitialFetch:(bool)arg1;
- (bool)shouldRebuildOnManateeKeyLoss;
- (bool)shouldSuppressDelegateCallbacksOnInitialFetch;

@end