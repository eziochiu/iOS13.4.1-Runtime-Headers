/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGColorProgramLibrary : NSObject {
    struct CGColorSpace { } * _destinationColorSpace;
    <MTLDevice> * _device;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _programs;
}

@property (nonatomic, readonly) struct CGColorSpace { }*destinationColorSpace;
@property (nonatomic, readonly) <MTLDevice> *device;

- (void).cxx_destruct;
- (id)colorProgramForSourceColorSpace:(struct CGColorSpace { }*)arg1 flags:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (struct CGColorSpace { }*)destinationColorSpace;
- (id)device;
- (id)init;
- (id)initWithDevice:(id)arg1 destinationColorSpace:(struct CGColorSpace { }*)arg2;

@end
