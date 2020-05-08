/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
 */

@interface FKTextCandidate : NSObject {
    float  _confidence;
    NSString * _text;
}

@property (readonly) float confidence;
@property (nonatomic, readonly, copy) NSString *text;

- (float)confidence;
- (id)initWithText:(id)arg1 confidence:(float)arg2;
- (id)text;

@end