/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion> {
    TIKeyboardCandidate * _autoConfirmationCandidate;
}

@property (nonatomic, retain) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (bool)acceptInputString:(id)arg1;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (id)autoConfirmationCandidate;
- (void)checkAutocorrectionDictionaries;
- (bool)closeCandidateGenerationContextWithResults:(id)arg1;
- (id)deleteFromInput:(unsigned long long*)arg1;
- (id)formattedSearchString;
- (int)inputMethodType;
- (id)inputsToReject;
- (bool)isWubi:(id)arg1;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)arg1;
- (void)setAutoConfirmationCandidate:(id)arg1;
- (void)setInSplitKeyboardMode:(bool)arg1;
- (bool)shouldAddModifierSymbolsToWordCharacters;
- (bool)supportsPairedPunctutationInput;
- (bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(bool)arg2;

@end