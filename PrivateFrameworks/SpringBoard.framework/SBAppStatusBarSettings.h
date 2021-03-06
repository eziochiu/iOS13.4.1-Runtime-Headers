/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAppStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying> {
    BSMutableSettings * _settings;
}

@property (getter=_BSSettings, nonatomic, readonly) BSSettings *BSSettings;
@property (nonatomic, readonly) NSNumber *alpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) int styleOverridesToCancel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_BSSettings;
- (id)_initWithBSSettings:(id)arg1;
- (id)alpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)legibilitySettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)style;
- (int)styleOverridesToCancel;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
