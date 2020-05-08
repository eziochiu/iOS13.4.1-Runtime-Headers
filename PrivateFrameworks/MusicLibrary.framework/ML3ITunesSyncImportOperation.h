/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ITunesSyncImportOperation : ML3ImportOperation {
    NSMutableDictionary * _cachedPIDToFilePathMap;
    NSMutableDictionary * _cachedPIDToLocationPropertyMap;
    NSMutableDictionary * _cachedSyncIDsToPIDsMap;
    long long  _devicePrimaryContainer;
    NSMutableSet * _importedPlaylists;
    bool  _resetSync;
    bool  _sagaIsEnabled;
}

- (void).cxx_destruct;
- (void)_archiveSyncPlistFiles;
- (id)_dbInfoValuesForStep:(id)arg1;
- (bool)_performImportFromPlistFiles:(id)arg1 withTransaction:(id)arg2;
- (bool)_performImportOfTrackData:(id)arg1 WithTransaction:(id)arg2;
- (bool)_performImportWithTransaction:(id)arg1;
- (bool)_processDeletePlaylistOperation:(id)arg1 withImportSession:(struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; int (*x6)(); void *x7; id x8; id x9; id x10; id x11; id x12; id x13; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; double x_14_1_5; } x14; unsigned int x15; unsigned char x16; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; }*)arg2;
- (bool)_processDeleteTrackOperation:(id)arg1 withImportSession:(struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; int (*x6)(); void *x7; id x8; id x9; id x10; id x11; id x12; id x13; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; double x_14_1_5; } x14; unsigned int x15; unsigned char x16; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; }*)arg2;
- (void)_processGeniusConfigPlist:(id)arg1;
- (bool)_processInsertPlaylistOperation:(id)arg1 withImportSession:(struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; int (*x6)(); void *x7; id x8; id x9; id x10; id x11; id x12; id x13; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; double x_14_1_5; } x14; unsigned int x15; unsigned char x16; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; }*)arg2;
- (bool)_processInsertTrackOperation:(id)arg1 withImportSession:(struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; int (*x6)(); void *x7; id x8; id x9; id x10; id x11; id x12; id x13; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; double x_14_1_5; } x14; unsigned int x15; unsigned char x16; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; }*)arg2;
- (bool)_processSyncOperation:(id)arg1 withImportSession:(struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; int (*x6)(); void *x7; id x8; id x9; id x10; id x11; id x12; id x13; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; double x_14_1_5; } x14; unsigned int x15; unsigned char x16; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; }*)arg2;
- (bool)_processUpdateDBInfoOperation:(id)arg1 withImportSession:(struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; int (*x6)(); void *x7; id x8; id x9; id x10; id x11; id x12; id x13; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; double x_14_1_5; } x14; unsigned int x15; unsigned char x16; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; }*)arg2;
- (bool)_processUpdatePlaylistOperation:(id)arg1 withImportSession:(struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; int (*x6)(); void *x7; id x8; id x9; id x10; id x11; id x12; id x13; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; double x_14_1_5; } x14; unsigned int x15; unsigned char x16; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; }*)arg2;
- (bool)_processUpdateTrackOperation:(id)arg1 withImportSession:(struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; int (*x6)(); void *x7; id x8; id x9; id x10; id x11; id x12; id x13; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; double x_14_1_5; } x14; unsigned int x15; unsigned char x16; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; }*)arg2;
- (void)_recoverExistingAsset:(id)arg1 forTrackId:(long long)arg2;
- (id)_syncOperationsFromPlistFile:(id)arg1;
- (id)_syncPlistFilesFromDirectory:(id)arg1;
- (unsigned long long)importSource;
- (void)main;

@end