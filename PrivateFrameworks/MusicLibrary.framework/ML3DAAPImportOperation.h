/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DAAPImportOperation : ML3ImportOperation {
    struct shared_ptr<DAAPParserDelegate> { 
        struct DAAPParserDelegate {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _delegate;
    NSError * _importError;
    struct ML3ImportSession { int (**x1)(); id x2; id x3; id x4; int x5; int (*x6)(); void *x7; id x8; id x9; id x10; id x11; id x12; id x13; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_14_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_14_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_14_1_3; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_14_1_4; double x_14_1_5; } x14; unsigned int x15; unsigned char x16; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_18_1_1; struct __shared_weak_count {} *x_18_1_2; } x18; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_19_1_1; struct __shared_weak_count {} *x_19_1_2; } x19; struct shared_ptr<ML3DatabaseImportDataSource> { struct ML3DatabaseImportDataSource {} *x_20_1_1; struct __shared_weak_count {} *x_20_1_2; } x20; } * _importSession;
    bool  _importSessionStarted;
    long long  _processedContainerCount;
    long long  _processedTrackCount;
    int  _sourceType;
    long long  _totalContainerCount;
    long long  _totalTrackCount;
    unsigned char  _updateType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_finishParsingWithError:(id)arg1;
- (bool)_importDAAPPayloadFromFile:(id)arg1 shouldProcessPlaylists:(bool)arg2;
- (bool)_processContainerElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1 withTrackIds:(struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; })arg2 trackPersonIdentifiers:(struct vector<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > { struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > {} *x1; struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > {} *x2; struct __compressed_pair<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > *, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > { struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > {} *x_3_1_1; } x3; })arg3;
- (bool)_processContainerItemCount:(int)arg1;
- (bool)_processDeletedContainerId:(long long)arg1;
- (bool)_processDeletedTrackId:(long long)arg1;
- (bool)_processPersonElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)_processTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)_processTrackItemCount:(int)arg1;
- (bool)_processUpdateType:(unsigned char)arg1;
- (bool)_startImportSessionIfNeeded;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1 withTrackIds:(struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; })arg2 trackPersonIdentifiers:(struct vector<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > { struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > {} *x1; struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > {} *x2; struct __compressed_pair<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > *, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > > { struct unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > {} *x_3_1_1; } x3; })arg3;
- (void)dealloc;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)performImportOfSourceType:(int)arg1 usingConnection:(id)arg2;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })personImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)updateImportProgress:(float)arg1;

@end
