/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface ETImageFolderDataProvider : NSObject <ETDataProvider> {
    /* Warning: unhandled struct encoding: '{vector<NSString *, std::__1::allocator<NSString *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<NSString *__strong *, std::__1::allocator<NSString *> >="__value_"^@}}' */ struct vector<NSString *, std::__1::allocator<NSString *> > { 
        __end_ **__begin_; 
    }  classes;
    struct shared_ptr<Espresso::abstract_context> { 
        struct abstract_context {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  ctx;
    struct shared_ptr<Espresso::blob_cpu> { 
        struct blob_cpu {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  imageBlob;
    NSArray * imageShape;
    NSString * imageTensorName;
    struct shared_ptr<Espresso::blob_cpu> { 
        struct blob_cpu {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  labelBlob;
    NSArray * labelShape;
    NSString * labelTensorName;
    int  nChannels;
    struct vimage2espresso_param { 
        float scale; 
        int center_mean; 
        int is_image_bgr; 
        int is_network_bgr; 
        float bias_r; 
        float bias_g; 
        float bias_b; 
        float bias_a; 
        int metal_output_plane; 
        unsigned int width; 
        unsigned int height; 
        unsigned int rowbytes; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*scaleXY; 
    }  param;
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> { 
        unsigned int __x_; 
    }  randomgen;
    struct vector<std::__1::pair<NSString *, unsigned long>, std::__1::allocator<std::__1::pair<NSString *, unsigned long> > > { 
        struct pair<NSString *, unsigned long> {} *__begin_; 
        struct pair<NSString *, unsigned long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<NSString *, unsigned long> *, std::__1::allocator<std::__1::pair<NSString *, unsigned long> > > { 
            struct pair<NSString *, unsigned long> {} *__value_; 
        } __end_cap_; 
    }  samples;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })bufferWithPath:(id)arg1;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithFolder:(id)arg1 forImage:(id)arg2 ofShape:(id)arg3 andLabel:(id)arg4;
- (unsigned long long)numberOfDataPoints;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })preprocess:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setImageTransforParams:(bool)arg1 biasR:(float)arg2 biasG:(float)arg3 biasB:(float)arg4 scale:(float)arg5;

@end