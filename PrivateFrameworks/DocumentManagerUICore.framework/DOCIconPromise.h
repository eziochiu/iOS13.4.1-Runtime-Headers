/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCIconPromise : NSObject <DOCThumbnail> {
    UIImage * _icon;
    DOCThumbnailRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasFinishedTryingToFetchCorrectThumbnail;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRepresentativeIcon;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImage *thumbnail;

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (bool)hasFinishedTryingToFetchCorrectThumbnail;
- (id)initWithRequest:(id)arg1;
- (bool)isLoading;
- (bool)isRepresentativeIcon;
- (bool)registerGenerationCompletionHandler:(id /* block */)arg1;
- (void)removeListener:(id)arg1;
- (void)scheduleUpdateIfNeeded;
- (id)thumbnail;

@end
