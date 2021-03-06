/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGViewTextureProvider : PXGTextureProvider {
    <PXGViewSource> * _fallbackViewSource;
}

@property (nonatomic) <PXGViewSource> *fallbackViewSource;

- (void).cxx_destruct;
- (void)_requestTextureForViewClass:(Class)arg1 userData:(id)arg2 requestID:(int)arg3;
- (void)_requestTextureWithDecorationOptions:(unsigned long long)arg1 viewClass:(Class)arg2 userData:(id)arg3 requestID:(int)arg4;
- (id)fallbackViewSource;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; }*)arg2 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; unsigned short x4; unsigned short x5; unsigned char x6; }*)arg3 infos:(struct { int x1; int x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4 inLayout:(id)arg5;
- (void)setFallbackViewSource:(id)arg1;

@end
