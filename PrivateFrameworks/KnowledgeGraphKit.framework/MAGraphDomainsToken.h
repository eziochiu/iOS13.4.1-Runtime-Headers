/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MAGraphDomainsToken : NSObject {
    bool  _deregistered;
    NSArray * _domains;
    MAGraph * _graph;
}

@property (nonatomic) bool deregistered;
@property (nonatomic, readonly) NSArray *domains;
@property (nonatomic, retain) MAGraph *graph;

- (void).cxx_destruct;
- (void)dealloc;
- (void)deregister;
- (bool)deregistered;
- (id)domains;
- (id)graph;
- (unsigned long long)hash;
- (id)initWithDomains:(id)arg1 graph:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGraphDomainToken:(id)arg1;
- (void)setDeregistered:(bool)arg1;
- (void)setGraph:(id)arg1;

@end
