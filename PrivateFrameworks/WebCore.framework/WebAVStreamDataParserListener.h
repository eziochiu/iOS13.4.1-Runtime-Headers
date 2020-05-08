/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVStreamDataParserListener : NSObject <AVStreamDataParserOutputHandling> {
    struct Box<WTF::Semaphore> { 
        struct RefPtr<WTF::Box<WTF::Semaphore>::Data, WTF::DumbPtrTraits<WTF::Box<WTF::Semaphore>::Data> > { 
            struct Data {} *m_ptr; 
        } m_data; 
    }  _abortSemaphore;
    struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC> { 
        struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
            struct WeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _parent;
    AVStreamDataParser * _parser;
}

@property /* Warning: unhandled struct encoding: '{Box<WTF::Semaphore>={RefPtr<WTF::Box<WTF::Semaphore>::Data' */ struct  abortSemaphore; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::Box<WTF::Semaphore>::Data> >=^{Data}}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property /* Warning: unhandled struct encoding: '{WeakPtr<WebCore::SourceBufferPrivateAVFObjC>={RefPtr<WTF::WeakPtrImpl' */ struct  parent; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::WeakPtrImpl> >=^{WeakPtrImpl}}} */
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Box<WTF::Semaphore> { struct RefPtr<WTF::Box<WTF::Semaphore>::Data, WTF::DumbPtrTraits<WTF::Box<WTF::Semaphore>::Data> > { struct Data {} *x_1_1_1; } x1; })abortSemaphore;
- (void)dealloc;
- (id)initWithParser:(id)arg1 parent:(struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_1_1; } x1; })arg2;
- (void)invalidate;
- (struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_1_1; } x1; })parent;
- (void)setAbortSemaphore:(struct Box<WTF::Semaphore> { struct RefPtr<WTF::Box<WTF::Semaphore>::Data, WTF::DumbPtrTraits<WTF::Box<WTF::Semaphore>::Data> > { struct Data {} *x_1_1_1; } x1; })arg1;
- (void)setParent:(struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_1_1; } x1; })arg1;
- (void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2;
- (void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2;
- (void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(bool)arg3;
- (void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3;
- (void)streamDataParser:(id)arg1 didProvideMediaData:(struct opaqueCMSampleBuffer { }*)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5;
- (void)streamDataParser:(id)arg1 didReachEndOfTrackWithTrackID:(int)arg2 mediaType:(id)arg3;
- (void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2;

@end