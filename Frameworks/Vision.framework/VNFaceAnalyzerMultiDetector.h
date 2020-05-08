/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceAnalyzerMultiDetector : VNEspressoModelFileBasedDetector {
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  _faceVImageBuffer;
    struct shared_ptr<vision::mod::FaceFrontalizer> { 
        struct FaceFrontalizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mFaceFrontalizerImpl;
    NSMutableData * _mFaceFrontalizerWorkingBuffer;
    struct shared_ptr<vision::mod::FaceprintAndAttributes> { 
        struct FaceprintAndAttributes {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mMultiHeadedFaceClassifier;
}

+ (id)configurationOptionKeysForDetectorKey;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addFaceAnalysisResultsFromMap:(struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 toFaceAttributeObject:(id)arg2 withRequestRevision:(unsigned long long)arg3;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (bool)supportsProcessingDevice:(id)arg1;

@end