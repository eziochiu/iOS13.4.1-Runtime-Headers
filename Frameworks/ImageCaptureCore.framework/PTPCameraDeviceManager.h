/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface PTPCameraDeviceManager : ICDeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSNetServiceBrowser * _netServiceBrowser;
    NSMutableArray * _netServices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(bool)arg3;
- (long long)checkFile:(id)arg1 andDevice:(id)arg2;
- (void)dealloc;
- (void)deleteFileImp:(id)arg1;
- (id)deviceManagerConnection;
- (void)downloadFileImp:(id)arg1;
- (void)ejectImp:(id)arg1;
- (void)executeCompletionBlockWithErrorCode:(long long)arg1 info:(id)arg2 file:(id)arg3 completionDict:(id)arg4 completionBlk:(id /* block */)arg5;
- (void)getFileDataImp:(id)arg1;
- (void)getFileMetadataImp:(id)arg1;
- (void)getFileThumbnailImp:(id)arg1;
- (long long)handleEvent:(id)arg1 onDevice:(id)arg2 contextInfo:(void*)arg3;
- (void)handleEventImp:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (id)init;
- (void)notifyAddedItems:(id)arg1;
- (void)notifyContentCatalogPercentCompleted:(id)arg1;
- (void)notifyPTPEvent:(id)arg1;
- (void)registerDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2;
- (void)sendDevicePTPCommandImp:(id)arg1;
- (void)startDeviceWithHandle:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)unregisterDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2;
- (void)updateCameraFile:(id)arg1 withInfo:(id)arg2;
- (void)updateCameraFile:(id)arg1 withKeywords:(id)arg2;
- (void)updateCameraFolder:(id)arg1 withInfo:(id)arg2;

@end