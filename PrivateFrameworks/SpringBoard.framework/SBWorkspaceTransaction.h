/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBWorkspaceTransaction : SBTransaction {
    bool  _clearsCompletionAsynchronously;
    SBSceneLayoutViewController * _layoutController;
    SBLayoutStateTransitionCoordinator * _layoutStateTransitionCoordinator;
    SBSceneManager * _sceneManager;
    SBUIAnimationController * _suggestedAnimationController;
    SBWorkspaceTransitionRequest * _transitionRequest;
    SBWorkspaceTransitionRequest * _transitionRequestForPendingInterruption;
}

@property (nonatomic) bool clearsCompletionAsynchronously;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) SBSceneLayoutViewController *layoutController;
@property (nonatomic, readonly) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (nonatomic, readonly) SBSceneManager *sceneManager;
@property (nonatomic, retain) SBUIAnimationController *suggestedAnimationController;
@property (nonatomic, readonly) SBWorkspaceTransitionRequest *transitionRequest;

- (void).cxx_destruct;
- (id)_childWorkspaceTransactions;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didInterruptForTransitionRequest:(id)arg1;
- (bool)_isInterruptingForTransitionRequest;
- (void)_performDeviceCoherencyCheck;
- (id)_transitionRequestForInterruption;
- (void)_willInterruptForTransitionRequest:(id)arg1;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (bool)clearsCompletionAsynchronously;
- (id)displayConfiguration;
- (id)displayIdentity;
- (id)init;
- (id)initWithTransitionRequest:(id)arg1;
- (void)interruptForTransitionRequest:(id)arg1;
- (void)keepAliveForAsyncBlock:(id /* block */)arg1;
- (id)layoutController;
- (id)layoutStateTransitionCoordinator;
- (id)sceneManager;
- (void)setClearsCompletionAsynchronously:(bool)arg1;
- (void)setSuggestedAnimationController:(id)arg1;
- (id)suggestedAnimationController;
- (id)transitionRequest;

@end