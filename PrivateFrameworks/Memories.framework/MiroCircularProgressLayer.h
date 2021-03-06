/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroCircularProgressLayer : CALayer {
    double  _animationDuration;
    double  _arcLineWidth;
    double  _circleLineWidth;
    float  _progress;
    UIColor * _progressColor;
}

@property (nonatomic) double animationDuration;
@property (nonatomic) double arcLineWidth;
@property (nonatomic) double circleLineWidth;
@property (nonatomic) float progress;
@property (nonatomic, retain) UIColor *progressColor;

+ (bool)needsDisplayForKey:(id)arg1;

- (void).cxx_destruct;
- (double)animationDuration;
- (double)arcLineWidth;
- (double)circleLineWidth;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (float)progress;
- (id)progressColor;
- (void)setAnimationDuration:(double)arg1;
- (void)setArcLineWidth:(double)arg1;
- (void)setCircleLineWidth:(double)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressColor:(id)arg1;

@end
