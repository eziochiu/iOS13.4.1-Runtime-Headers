/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigStillImageSharedProcessingResources : NSObject {
    int  _resourceAllocationError;
    bool  _resourcesAllocated;
    <MTLBuffer> * _sharedMetalBuffer;
    unsigned long long  _sharedMetalBufferLengthInMB;
    FigWiredMemory * _sharedRegWarpBuffer;
    unsigned long long  _sharedRegWarpBufferLengthInMB;
}

@property (nonatomic, readonly) <MTLBuffer> *sharedMetalBuffer;
@property (nonatomic, readonly) unsigned long long sharedMetalBufferLengthInMB;
@property (nonatomic, readonly) FigWiredMemory *sharedRegWarpBuffer;
@property (nonatomic, readonly) unsigned long long sharedRegWarpBufferLengthInMB;

+ (void)initialize;

- (int)_allocateSharedMetalBufferWithSizeInMB:(unsigned long long)arg1;
- (void)dealloc;
- (int)ensureAllocatedSync;
- (id)initWithSharedMetalBufferLengthInMB:(unsigned long long)arg1 sharedRegWarpBufferLengthInMB:(unsigned long long)arg2;
- (id)sharedMetalBuffer;
- (unsigned long long)sharedMetalBufferLengthInMB;
- (id)sharedRegWarpBuffer;
- (unsigned long long)sharedRegWarpBufferLengthInMB;

@end