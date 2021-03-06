/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject {
    FigVideoCaptureConnectionConfiguration * _movieFileVideoConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
}

@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;

- (void)dealloc;
- (id)initWithStillImageConnectionConfiguration:(id)arg1 movieFileVideoConnectionConfiguration:(id)arg2;
- (id)movieFileVideoConnectionConfiguration;
- (id)stillImageConnectionConfiguration;

@end
