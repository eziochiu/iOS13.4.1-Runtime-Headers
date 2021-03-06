/* Generated by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAppChannelsFilter : NSObject {
    NSArray * _allChannelMappings;
    NSSet * _genericAppAdamIDs;
    NSSet * _personalAppAdamIDs;
    NSSet * _personalChannelIDs;
}

@property (nonatomic, copy) NSArray *allChannelMappings;
@property (nonatomic, copy) NSSet *genericAppAdamIDs;
@property (nonatomic, copy) NSSet *personalAppAdamIDs;
@property (nonatomic, copy) NSSet *personalChannelIDs;

- (void).cxx_destruct;
- (void)_updateAdamIDs;
- (id)allChannelMappings;
- (id)genericAppAdamIDs;
- (id)init;
- (id)personalAppAdamIDs;
- (id)personalChannelIDs;
- (void)setAllChannelMappings:(id)arg1;
- (void)setGenericAppAdamIDs:(id)arg1;
- (void)setPersonalAppAdamIDs:(id)arg1;
- (void)setPersonalChannelIDs:(id)arg1;

@end
