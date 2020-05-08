/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIFavoniusTypingSessionAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSessionAligned * _lastAlignmentAnalyzed;
    TITypingSession * _lastSessionAnalyzed;
    <TIUserModeling> * _userModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TITypingSessionAligned *lastAlignmentAnalyzed;
@property (nonatomic, retain) TITypingSession *lastSessionAnalyzed;
@property (readonly) Class superclass;
@property (nonatomic, retain) <TIUserModeling> *userModel;

- (void).cxx_destruct;
- (void)addToTransientCounter:(int)arg1 forKey:(id)arg2 andContext:(id)arg3 andCandidateString:(id)arg4;
- (bool)analyze:(id)arg1 alignedSession:(id)arg2;
- (unsigned long long)canAnalyze:(id)arg1 alignedSession:(id)arg2;
- (id)deleteLengthMetrics:(id)arg1 nextWordEntryCandText:(id)arg2;
- (bool)handleDeleteWord:(id)arg1 nextAction:(id)arg2 withConfidence:(unsigned long long)arg3;
- (bool)handlePath:(id)arg1;
- (bool)handleWordEntry:(id)arg1 withConfidence:(unsigned long long)arg2;
- (void)incrementTransientCounterForKey:(id)arg1 andContext:(id)arg2 andCandidateString:(id)arg3;
- (id)initWithUserModel:(id)arg1;
- (bool)isPathable:(id)arg1 context:(id)arg2;
- (id)lastAlignmentAnalyzed;
- (id)lastSessionAnalyzed;
- (void)logPathedCandidate:(id)arg1 forKey:(id)arg2 withConfidence:(unsigned long long)arg3 isCompletion:(bool)arg4;
- (void)setLastAlignmentAnalyzed:(id)arg1;
- (void)setLastSessionAnalyzed:(id)arg1;
- (void)setUserModel:(id)arg1;
- (void)updateDurationCounterForWord:(id)arg1 forTypingContext:(id)arg2;
- (id)userModel;

@end