/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICBackup : NSObject

+ (id)allObjectsToSaveInContext:(id)arg1;
+ (id)backupNameForDate:(id)arg1;
+ (id)backupsParentDirectoryURL;
+ (id)createArchive:(id*)arg1 obfuscate:(bool)arg2;
+ (id)createArchive:(id*)arg1 toParentDirectory:(id)arg2 asName:(id)arg3 obfuscate:(bool)arg4;
+ (bool)createDirectoryAtURL:(id)arg1;
+ (id)dictionaryFromCloudObject:(id)arg1 savingAssetsToDirectory:(id)arg2 obfuscator:(id)arg3;
+ (bool)hardLinkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2;
+ (bool)isValidBackupURL:(id)arg1;
+ (bool)loadArchive:(id)arg1 error:(id*)arg2;
+ (bool)loadBackupFromURL:(id)arg1;
+ (void)loadBackupWithObjectDictionaries:(id)arg1 assetsDirectoryURL:(id)arg2;
+ (id)nameFromBackupAtURL:(id)arg1;
+ (void)purgeOldBackups;
+ (id)recordFromObjectDictionary:(id)arg1 assetsDirectoryURL:(id)arg2;
+ (void)sanitizeAndCopyAssetsForSavingFromRecord:(id)arg1 toAssetsDirectoryURL:(id)arg2;
+ (id)sanitizeAssetsForLoadingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2;
+ (void)sanitizeAssetsForSavingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2 prefix:(id)arg3;
+ (id)saveBackupToParentDirectoryURL:(id)arg1 asName:(id)arg2 atomically:(bool)arg3 obfuscate:(bool)arg4;
+ (id)unarchiverAllowedClasses;

@end
