/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUImageProperties : NSObject <NUImageProperties> {
    long long  _alphaInfo;
    NSDictionary * _auxiliaryImagesProperties;
    struct CGColorSpace { } * _colorSpace;
    long long  _componentInfo;
    NSString * _fileUTI;
    bool  _isFusedOvercapture;
    NSDictionary * _metadata;
    long long  _orientation;
    <NURAWImageProperties> * _rawProperties;
    struct { 
        long long width; 
        long long height; 
    }  _size;
    NSURL * _url;
}

@property long long alphaInfo;
@property (retain) NSDictionary *auxiliaryImagesProperties;
@property struct CGColorSpace { }*colorSpace;
@property long long componentInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *fileUTI;
@property (readonly) unsigned long long hash;
@property bool isFusedOvercapture;
@property (retain) NSDictionary *metadata;
@property long long orientation;
@property (retain) <NURAWImageProperties> *rawProperties;
@property struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (long long)alphaInfo;
- (id)auxiliaryImagesProperties;
- (struct CGColorSpace { }*)colorSpace;
- (long long)componentInfo;
- (id)description;
- (id)fileUTI;
- (bool)isFusedOvercapture;
- (id)metadata;
- (long long)orientation;
- (id)rawProperties;
- (void)setAlphaInfo:(long long)arg1;
- (void)setAuxiliaryImagesProperties:(id)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setComponentInfo:(long long)arg1;
- (void)setFileUTI:(id)arg1;
- (void)setIsFusedOvercapture:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setRawProperties:(id)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (void)setUrl:(id)arg1;
- (struct { long long x1; long long x2; })size;
- (id)url;

@end