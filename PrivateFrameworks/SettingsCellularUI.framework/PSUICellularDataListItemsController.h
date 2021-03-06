/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate> {
    RadiosPreferences * _radioPreferences;
}

@property (nonatomic, retain) RadiosPreferences *radioPreferences;

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)dealloc;
- (id)init;
- (id)radioPreferences;
- (void)reloadCache;
- (void)setRadioPreferences:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
