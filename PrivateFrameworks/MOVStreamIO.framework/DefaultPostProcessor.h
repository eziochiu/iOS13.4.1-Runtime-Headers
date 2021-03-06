/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface DefaultPostProcessor : NSObject <MOVStreamPostProcessor> {
    MOVStreamFrameConverter * _converter;
    unsigned long long  exactBytesPerRow;
    bool  removePadding;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long exactBytesPerRow;
@property (readonly) unsigned long long hash;
@property bool removePadding;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)exactBytesPerRow;
- (unsigned long long)minimumBytesPerRowForPixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)pixelBufferWithExactByterPerRow:(unsigned long long)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (struct __CVBuffer { }*)pixelBufferWithoutPaddingFromPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)processedPixelBufferFrom:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 reader:(id)arg3 error:(id*)arg4;
- (bool)removePadding;
- (void)setExactBytesPerRow:(unsigned long long)arg1;
- (void)setRemovePadding:(bool)arg1;
- (bool)shouldChangeBytesPerRowOfPixelBuffer:(struct __CVBuffer { }*)arg1;
- (bool)shouldRemovePaddingOfPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2;

@end
