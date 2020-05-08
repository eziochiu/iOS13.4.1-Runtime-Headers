/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider {
    NSSet * _cameraProfiles;
    NSMutableSet * _items;
    unsigned long long  _settingsContext;
}

@property (nonatomic, readonly, copy) NSSet *cameraProfiles;
@property (nonatomic, readonly) NSMutableSet *items;
@property (nonatomic, readonly) unsigned long long settingsContext;

- (void).cxx_destruct;
- (id)cameraProfiles;
- (id)init;
- (id)initWithCameraProfiles:(id)arg1 settingsContext:(unsigned long long)arg2;
- (id)items;
- (id)reloadItems;
- (unsigned long long)settingsContext;

@end