/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFRemoteServerAccessResource : WFGranularAccessResource {
    NSArray * _requestedURLs;
}

@property (nonatomic, copy) NSArray *requestedURLs;

+ (bool)isSystemResource;
+ (Class)perWorkflowStateClass;

- (void).cxx_destruct;
- (unsigned long long)globalLevelStatus;
- (id)icon;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)name;
- (id)requestedEntries;
- (id)requestedURLs;
- (void)setRequestedURLs:(id)arg1;

@end
