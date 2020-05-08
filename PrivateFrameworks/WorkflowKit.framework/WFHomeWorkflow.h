/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFHomeWorkflow : NSObject {
    HFTriggerActionsSetsUISummary * _actionSetsSummary;
    NSData * _data;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) HFTriggerActionsSetsUISummary *actionSetsSummary;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) bool requiresDeviceUnlock;
@property (nonatomic, readonly, copy) NSArray *summaryIconDescriptors;
@property (nonatomic, readonly, copy) NSArray *summaryIconNames;
@property (nonatomic, readonly, copy) NSString *summaryString;
@property (nonatomic, retain) WFWorkflow *workflow;

+ (void)setCachedHomes:(id)arg1;

- (void).cxx_destruct;
- (id)actionSetsFromTriggerActionSetsBuilders:(id)arg1;
- (id)actionSetsSummary;
- (id)data;
- (id)debugDescription;
- (id)initWithData:(id)arg1;
- (bool)requiresDeviceUnlock;
- (void)setActionSetsSummary:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (id)summaryIconDescriptors;
- (id)summaryIconNames;
- (id)summaryString;
- (id)triggerActionSetsBuilders;
- (id)workflow;

@end