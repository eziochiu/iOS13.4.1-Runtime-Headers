/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation {
    NSDictionary * _metadataByIdentifier;
    NSArray * _playActivityIdentifiers;
}

@property (nonatomic, readonly, copy) NSDictionary *metadataByIdentifier;
@property (nonatomic, readonly, copy) NSArray *playActivityIdentifiers;

+ (id)identifierForPlayActivityID:(id)arg1 channelID:(id)arg2 duration:(id)arg3;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (id)metadataByIdentifier;
- (id)playActivityIdentifiers;
- (void)processResponse;

@end