/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISConcreteImage : ISImage <NSCopying> {
    struct CGImage { } * _cgImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    bool  _placeholder;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property bool placeholder;

- (id)_init;
- (struct CGImage { }*)cgImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 minimumSize:(struct CGSize { double x1; double x2; })arg3 placeholder:(bool)arg4;
- (struct CGSize { double x1; double x2; })minimumSize;
- (bool)placeholder;
- (double)scale;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaceholder:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
