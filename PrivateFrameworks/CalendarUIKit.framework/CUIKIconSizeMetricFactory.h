/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKIconSizeMetricFactory : NSObject

+ (id)_interpolatedSizeMetricsWithUpperBound:(id)arg1 lowerBound:(id)arg2 sideLength:(double)arg3;
+ (bool)_interpolationRequired:(double)arg1;
+ (id)_sizeMetricsForSideLength:(double)arg1 returnLowerBound:(bool)arg2;
+ (double)extrapolatedYValueWithFirstPoint:(struct CGPoint { double x1; double x2; })arg1 secondPoint:(struct CGPoint { double x1; double x2; })arg2 xValue:(double)arg3;
+ (id)heroSizeMetricsLargeToSmall;
+ (double)scaledValueWithUpperBound:(double)arg1 lowerBound:(double)arg2 scaleFactor:(double)arg3;
+ (id)sizeMetricsForIconSize:(struct CGSize { double x1; double x2; })arg1;

@end
