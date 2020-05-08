/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphIngestBabyProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_babiesInGraph:(id)arg1;
- (void)_removeAllBabyNodesInGraph:(id)arg1;
- (id)babySceneNodeInGraph:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end