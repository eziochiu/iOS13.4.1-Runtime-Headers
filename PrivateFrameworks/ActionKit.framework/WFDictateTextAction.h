/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFDictateTextAction : WFAction <AFDictationDelegate> {
    <WFDictateTextActionRunningDelegate> * _delegate;
    AFDictationConnection * _dictationConnection;
    NSString * _latestTranscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDictateTextActionRunningDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AFDictationConnection *dictationConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *latestTranscription;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)dictationConnection;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (id)latestTranscription;
- (id)recognitionError;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDictationConnection:(id)arg1;
- (void)setLatestTranscription:(id)arg1;
- (void)stopListening;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (id)keyCommands;

@end
