/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFCoreDataRunEvent *runEvents;
@property (nonatomic) bool shouldPrompt;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *triggerData;
@property (nonatomic, copy) NSString *triggerID;
@property (nonatomic, retain) WFCoreDataWorkflow *workflow;
@property (nonatomic, retain) NSString *workflowID;

+ (id)fetchRequest;

- (id)descriptor;
- (void)setWorkflowID:(id)arg1;
- (id)trigger;
- (id)workflowID;

@end
