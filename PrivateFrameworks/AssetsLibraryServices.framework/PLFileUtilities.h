/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLFileUtilities : NSObject

+ (bool)URLIsInTrash:(id)arg1;
+ (bool)_isFileExistsError:(id)arg1;
+ (id)_mobileOwnerAttributes;
+ (id)_relocateLibraryPath;
+ (bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2;
+ (bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3;
+ (bool)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
+ (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (bool)createDirectoryAtPath:(id)arg1 error:(id*)arg2;
+ (bool)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3;
+ (id)defaultSystemLibraryURL;
+ (id)defaultSystemPhotoDCIMDirectory;
+ (id)defaultSystemPhotoDataCPLDirectory;
+ (id)defaultSystemPhotoDataDirectory;
+ (id)defaultSystemPhotoDataMiscDirectory;
+ (id)descriptionForFileIngestionType:(long long)arg1;
+ (long long)directoryEntryCountAtURL:(id)arg1 error:(id*)arg2;
+ (long long)fileLengthForFilePath:(id)arg1;
+ (id)fileManager;
+ (bool)filePath:(id)arg1 hasPrefix:(id)arg2;
+ (bool)filePath:(id)arg1 isEqualToFilePath:(id)arg2;
+ (bool)fileURL:(id)arg1 isEqualToFileURL:(id)arg2;
+ (bool)hasDiskSpaceToCopyFileAtURL:(id)arg1;
+ (bool)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 capabilities:(id)arg5 error:(id*)arg6;
+ (id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)arg1 databaseName:(id)arg2;
+ (id)proxyLockFilePathForDatabasePath:(id)arg1;
+ (id)realPathForPath:(id)arg1 error:(id*)arg2;
+ (id)redactedDescriptionForFileURL:(id)arg1;
+ (id)redactedDescriptionForPath:(id)arg1;
+ (id)relocateLibraryIndicatorFilePath;
+ (bool)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg1 error:(id*)arg2;
+ (bool)removeFilesInDirectoryAtURL:(id)arg1 withPrefix:(id)arg2 error:(id*)arg3 progress:(id /* block */)arg4;
+ (bool)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 capabilities:(id)arg3 error:(id*)arg4;
+ (bool)setPhotoLibraryBasePath:(id)arg1;
+ (bool)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3;
+ (id)systemLibraryURL;

@end