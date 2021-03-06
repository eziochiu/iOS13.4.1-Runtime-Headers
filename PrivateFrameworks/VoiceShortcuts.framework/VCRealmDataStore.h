/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCRealmDataStore : NSObject {
    WFDatabase * _database;
}

@property (nonatomic, readonly) WFDatabase *database;

- (void).cxx_destruct;
- (void)createVoiceShortcut:(id)arg1 phrase:(id)arg2 accessSpecifier:(id)arg3 completion:(id /* block */)arg4;
- (id)database;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getSpeakableStringsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDatabase:(id)arg1;
- (bool)isPhraseUsable:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 accessSpecifier:(id)arg4 completion:(id /* block */)arg5;
- (void)validatePhrases:(id)arg1 completion:(id /* block */)arg2;

@end
