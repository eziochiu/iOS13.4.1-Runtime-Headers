/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
 */

@interface ADPolynomialsLensDistortionModel : NSObject <ADLensDistortionModel> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _distortionCenter;
    const struct ADDistortionPolynomials { float x1[8]; float x2[8]; } * _distortionPolynomials;
    struct ADDistortionPolynomials { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _polynomials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } distortionCenter;
@property (nonatomic, readonly) const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*distortionPolynomials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;
- (struct CGPoint { double x1; double x2; })distortionCenter;
- (const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)distortionPolynomials;
- (id)initWithDistortionCenter:(struct CGPoint { double x1; double x2; })arg1 andPloynomials:(const struct ADDistortionPolynomials { float x1[8]; float x2[8]; }*)arg2;
- (void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;

@end