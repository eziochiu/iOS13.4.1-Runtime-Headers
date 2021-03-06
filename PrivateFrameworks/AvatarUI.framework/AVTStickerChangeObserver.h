/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTStickerChangeObserver : NSObject {
    AVTCoreEnvironment * _environment;
    AVTImageStore * _imageStore;
    <AVTStickerBackend> * _stickerBackend;
}

@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (nonatomic, readonly) AVTImageStore *imageStore;
@property (nonatomic, readonly) <AVTStickerBackend> *stickerBackend;

- (void).cxx_destruct;
- (id)environment;
- (id)imageStore;
- (id)initWithStickerBackend:(id)arg1 environment:(id)arg2;
- (id)initWithStickerBackend:(id)arg1 imageStore:(id)arg2 environment:(id)arg3;
- (void)processChangesForChangeTracker:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)stickerBackend;

@end
