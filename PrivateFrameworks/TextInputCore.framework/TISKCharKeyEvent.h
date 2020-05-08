/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TISKCharKeyEvent : TISKInputEvent {
    bool  _isShortWord;
    long long  _wordPosition;
}

@property (nonatomic) bool isShortWord;
@property (nonatomic) long long wordPosition;

- (long long)_metricWordKeyPostion:(long long)arg1;
- (id)description;
- (id)init:(id)arg1 order:(long long)arg2;
- (bool)isShortWord;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;
- (void)setIsShortWord:(bool)arg1;
- (void)setWordPosition:(long long)arg1;
- (long long)wordPosition;

@end