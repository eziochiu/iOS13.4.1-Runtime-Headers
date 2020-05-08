/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigUtlROIProcessor : NSObject {
    int  _height;
    FigM2MController * _m2m;
    int  _orientation;
    int  _originalHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalRectangle;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _originalToRoiMatrix;
    int  _originalWidth;
    struct __CVBuffer { } * _pixelBuffer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _roiInPixels;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _roiRectangle;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _roiToOriginalMatrix;
    int  _width;
}

@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } originalToRoiMatrix;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } roiRectangle;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } roiToOriginalMatrix;
@property (nonatomic, readonly) int width;

- (void).cxx_destruct;
- (void)dealloc;
- (int)height;
- (id)initWithWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned int)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })matrix:(int)arg1 rectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scaleX:(double)arg3 scaleY:(double)arg4 inverse:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg5;
- (struct CGPoint { double x1; double x2; })originalToRoi:(struct CGPoint { double x1; double x2; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })originalToRoiMatrix;
- (struct CGPoint { double x1; double x2; })originalToRoiPixels:(struct CGPoint { double x1; double x2; })arg1;
- (struct __CVBuffer { }*)pixelBuffer;
- (bool)processImage:(struct __CVBuffer { }*)arg1 orientation:(int)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiRectangle;
- (struct CGPoint { double x1; double x2; })roiToOriginal:(struct CGPoint { double x1; double x2; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })roiToOriginalMatrix;
- (struct CGPoint { double x1; double x2; })roiToOriginalPixels:(struct CGPoint { double x1; double x2; })arg1;
- (int)width;

@end