/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUICelebrationsMap : NSObject <ARUICelebrationsMapStore> {
    unsigned long long  _celebrationCount;
    NSMapTable * _sparksCelebrationMap;
    NSMapTable * _wavesCelebrationMap;
}

@property (nonatomic, readonly) unsigned long long celebrationCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)celebrationCount;
- (id)initWithRingGroupControllers:(id)arg1;
- (void)setRingGroupControllers:(id)arg1;
- (id)sparksCelebrationMap;
- (void)storeSparksCelebration:(id)arg1 withRing:(id)arg2;
- (void)storeWavesCelebration:(id)arg1 withRing:(id)arg2;
- (id)wavesCelebrationMap;

@end