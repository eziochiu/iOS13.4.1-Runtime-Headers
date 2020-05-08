/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TITypingSessionLogger : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol> {
    NSMutableArray * _typingEvents;
    <TIKeyboardInteractionProtocol> * _typingSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long eventCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;
- (void)addKeyInput:(id)arg1 keyboardState:(id)arg2;
- (void)addTouchEvent:(id)arg1;
- (void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(bool)arg6 useCandidateSelection:(bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
- (void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;
- (void)contextDidChange:(id)arg1 wordDelete:(bool)arg2 cursorMoved:(bool)arg3 extendsPriorWord:(bool)arg4 inWord:(id)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypingSession:(id)arg1;
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;
- (void)sendTo:(id)arg1;
- (void)setClientID:(id)arg1 keyboardState:(id)arg2;
- (id)typingSession;

@end