/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSOperationQueue * _coordinationQueue;
    NSMutableSet * _currentlyAccessedURLs;
    FPDExtensionManager * _extensionManager;
    NSFileCoordinator * _fileCoordinator;
}

@property (nonatomic, readonly) FPDExtensionManager *extensionManager;

- (void).cxx_destruct;
- (id)_readingIntentWithURL:(id)arg1 materializeOption:(unsigned long long)arg2;
- (void)cancel;
- (void)coordinateAtURL:(id)arg1 recursively:(bool)arg2 handler:(id /* block */)arg3;
- (void)coordinateForCopyingFromURL:(id)arg1 toURL:(id)arg2 handler:(id /* block */)arg3;
- (void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 handler:(id /* block */)arg3;
- (void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 toTargetFolderURL:(id)arg3 targetMaterializeOption:(unsigned long long)arg4 sourceMaterializeOption:(unsigned long long)arg5 handler:(id /* block */)arg6;
- (void)dealloc;
- (id)extensionManager;
- (id)initWithExtensionManager:(id)arg1 callbackQueue:(id)arg2;
- (void)resolveItem:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveItem:(id)arg1 recursively:(bool)arg2 andCoordinateWithHandler:(id /* block */)arg3;
- (void)resolveItemOrURL:(id)arg1 recursively:(bool)arg2 andCoordinateWithHandler:(id /* block */)arg3;
- (void)resolveItemOrURL:(id)arg1 recursively:(bool)arg2 coordinateIfExport:(bool)arg3 handler:(id /* block */)arg4;
- (void)startAccessingURLForAtomDuration:(id)arg1;
- (void)stopAccessingAllURLs;
- (void)stopAccessingURL:(id)arg1;

@end
