/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLIndirectComputeCommand : NSObject <MTLIndirectComputeCommandSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clearBarrier;
- (void)concurrentDispatchThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)concurrentDispatchThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (id)dispatchThreadgroupsArguments;
- (id)dispatchThreadsArguments;
- (unsigned long long)getCommandType;
- (void*)getKernelBufferAtIndex:(unsigned long long)arg1;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })getStageInRegion;
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
- (bool)hasBarrier;
- (void)reset;
- (void)setBarrier;
- (void)setComputePipelineState:(id)arg1;
- (void)setKernelArgument:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setStageInRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;

@end
