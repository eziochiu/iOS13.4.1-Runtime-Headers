/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXPredictiveTypingModel : NSObject {
    void * _wordModel;
}

- (id)_completionPredictionsForPrefix:(id)arg1 entireText:(id)arg2 desiredNumber:(unsigned long long)arg3;
- (id)_lastPartialWordForText:(id)arg1 orEndOfSentence:(bool*)arg2;
- (unsigned int*)_newContextForText:(id)arg1 includeLastToken:(bool)arg2 length:(long long*)arg3;
- (id)_nextWordPredictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2;
- (void)dealloc;
- (void)enumerateTokensForText:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)predictionsForText:(id)arg1;
- (id)predictionsForText:(id)arg1 desiredNumber:(unsigned long long)arg2;

@end