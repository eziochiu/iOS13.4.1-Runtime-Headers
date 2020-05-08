/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLPositionalImageTable : NSObject <PLThumbPersistenceManager> {
    int  _descriptor;
    long long  _entryCapacity;
    unsigned long long  _entryLength;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _expansionLock;
    bool  _flushAfterWrite;
    PLImageFormat * _format;
    bool  _formatIsCropped;
    int  _formatSideLen;
    bool  _isReadOnly;
    NSString * _path;
    struct tagPLImageTableMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; int x3; void *x4; void *x5; unsigned long long x6; } * _pool;
    bool  _readOnly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int descriptor;
@property (nonatomic) long long entryCapacity;
@property (nonatomic) unsigned long long entryLength;
@property (nonatomic) bool flushAfterWrite;
@property (nonatomic, readonly) PLImageFormat *format;
@property (nonatomic) bool formatIsCropped;
@property (nonatomic) int formatSideLen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) NSString *path;
@property (getter=isReadOnly, nonatomic, readonly) bool readOnly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_debugDescription;
- (bool)_increaseEntryCapacityIfNeededToStoreIndex:(long long)arg1;
- (bool)_setEntryCapacity:(long long)arg1;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (struct CGImage { }*)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3;
- (void)dealloc;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (int)descriptor;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (long long)entryCapacity;
- (unsigned long long)entryLength;
- (long long)fileLength;
- (void)flush;
- (bool)flushAfterWrite;
- (id)format;
- (bool)formatIsCropped;
- (int)formatSideLen;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (id)initWithPath:(id)arg1 readOnly:(bool)arg2 format:(id)arg3;
- (bool)isReadOnly;
- (bool)isReadOnly;
- (id)path;
- (void)preheatDataForThumbnailIndexes:(id)arg1;
- (void)setDescriptor:(int)arg1;
- (void)setEntryCapacity:(long long)arg1;
- (void)setEntryLength:(unsigned long long)arg1;
- (void)setFlushAfterWrite:(bool)arg1;
- (void)setFormatIsCropped:(bool)arg1;
- (void)setFormatSideLen:(int)arg1;
- (void)touchEntriesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)usesThumbIdentifiers;
- (bool)validateData:(id)arg1 withToken:(id)arg2;
- (bool)writeEntryData:(id)arg1 toIndex:(unsigned long long)arg2;

@end