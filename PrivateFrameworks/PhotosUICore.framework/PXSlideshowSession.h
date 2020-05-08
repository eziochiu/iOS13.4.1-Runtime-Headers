/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSlideshowSession : NSObject <OKPresentationViewControllerDelegate> {
    PHAssetCollection * _assetCollection;
    <PXSlideshowSessionDelegate> * _delegate;
    OKPresentationViewController * _presentationViewController;
    long long  _startIndex;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSlideshowSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *slideshowView;
@property (nonatomic, readonly) OKPresentationViewController *slideshowViewController;
@property (nonatomic, readonly) long long startIndex;
@property (readonly) Class superclass;

+ (void*)_loadSlideshowFrameworkIfNeeded;
+ (void)initialize;
+ (void)preloadSlideshowFrameworkIfNeeded;

- (void).cxx_destruct;
- (void)_initPresentationViewController;
- (id)_presentationGuidelines;
- (id)assetCollection;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 startIndex:(long long)arg2;
- (void)presentationViewControllerDidPrepare:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)slideshowView;
- (id)slideshowViewController;
- (long long)startIndex;

@end