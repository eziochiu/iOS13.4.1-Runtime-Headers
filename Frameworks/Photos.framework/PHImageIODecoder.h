/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageIODecoder : PHImageDecoder {
    NSObject<OS_dispatch_queue> * _activeRequestQueue;
    NSObject<OS_dispatch_semaphore> * _concurrentRequestSemaphore;
    NSObject<OS_dispatch_queue> * _pendingRequestQueue;
}

+ (long long)maxConcurrentDecodeCount;
+ (void)setMaxConcurrentDecodeCount:(long long)arg1;
+ (id)sharedDecoder;

- (void).cxx_destruct;
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(bool)arg5 optimizeForDrawing:(bool)arg6 highPriority:(bool)arg7 waitUntilComplete:(bool)arg8 completion:(id /* block */)arg9;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(bool)arg5 optimizeForDrawing:(bool)arg6 highPriority:(bool)arg7 waitUntilComplete:(bool)arg8 existingRequestHandle:(id)arg9 completion:(id /* block */)arg10;
- (id)init;

@end