/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphMusicSessionNode : PGGraphNode

@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) NSSet *trackNodes;

+ (id)musicSessionDateSortDescriptors;

- (void)enumerateMusicTrackNodesUsingBlock:(id /* block */)arg1;
- (id)localEndDate;
- (id)localStartDate;
- (id)momentNodes;
- (id)trackNodes;

@end
