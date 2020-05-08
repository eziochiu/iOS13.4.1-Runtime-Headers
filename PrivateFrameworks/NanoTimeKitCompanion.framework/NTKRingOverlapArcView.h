/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRingOverlapArcView : NTKColoringView {
    double  _fillFraction;
    double  _overlapWidth;
    double  _radius;
    double  _ringWidth;
}

@property (nonatomic) double fillFraction;
@property (nonatomic, readonly) double overlapWidth;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double ringWidth;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)fillFraction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(double)arg2 ringWidth:(double)arg3 overlapWidth:(double)arg4;
- (double)overlapWidth;
- (double)radius;
- (double)ringWidth;
- (void)setFillFraction:(double)arg1;

@end