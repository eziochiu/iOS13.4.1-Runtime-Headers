/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapModel : NSObject {
    struct AnimationRunner { struct MapEngine {} *x1; } * _animationRunner;
    NSMutableSet * _blockingStylesheetObservers;
    <VKMapModelDelegate> * _delegate;
    bool  _disableTransitLines;
    bool  _forceMapDrawStyleUpdate;
    double  _forcedMaxZoomLevel;
    VKTimedAnimation * _highZoomTransitionAnimation;
    unsigned char  _labelScaleFactor;
    struct LabelSettings { struct LabelSettings_Presentation { struct LabelSettings {} *x_1_1_1; } x1; struct LabelSettings_Navigation { struct LabelSettings {} *x_2_1_1; } x2; struct LabelSettings_Markers { struct LabelSettings {} *x_3_1_1; } x3; struct shared_ptr<md::LabelManager> { struct LabelManager {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct unique_ptr<md::LabelSettingsData, std::__1::default_delete<md::LabelSettingsData> > { struct __compressed_pair<md::LabelSettingsData *, std::__1::default_delete<md::LabelSettingsData> > { struct LabelSettingsData {} *x_1_2_1; } x_5_1_1; } x5; } * _labelSettings;
    bool  _localizeLabels;
    struct LogicManager { int (**x1)(); struct unique_ptr<md::Logic, std::__1::default_delete<md::Logic> > { struct __compressed_pair<md::Logic *, std::__1::default_delete<md::Logic> > { struct Logic {} *x_1_2_1; } x_2_1_1; } x2[17]; struct LogicTypePass { unsigned char x_3_1_1; unsigned short x_3_1_2; } x3[17]; } * _logicManager;
    const struct MapEngineSettings { struct linear_map<md::MapEngineSetting, bool, std::__1::equal_to<md::MapEngineSetting>, std::__1::allocator<std::__1::pair<md::MapEngineSetting, bool> >, std::__1::vector<std::__1::pair<md::MapEngineSetting, bool>, std::__1::allocator<std::__1::pair<md::MapEngineSetting, bool> > > > { struct vector<std::__1::pair<md::MapEngineSetting, bool>, std::__1::allocator<std::__1::pair<md::MapEngineSetting, bool> > > { struct pair<md::MapEngineSetting, bool> {} *x_1_2_1; struct pair<md::MapEngineSetting, bool> {} *x_1_2_2; struct __compressed_pair<std::__1::pair<md::MapEngineSetting, bool> *, std::__1::allocator<std::__1::pair<md::MapEngineSetting, bool> > > { struct pair<md::MapEngineSetting, bool> {} *x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct set<md::MapEngineSetting, std::__1::less<md::MapEngineSetting>, std::__1::allocator<md::MapEngineSetting> > { struct __tree<md::MapEngineSetting, std::__1::less<md::MapEngineSetting>, std::__1::allocator<md::MapEngineSetting> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<md::MapEngineSetting, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<md::MapEngineSetting> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; } * _mapEngineSettings;
    struct FeatureAttributeSet { 
        struct vector<gss::FeatureAttributePair, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator> > { 
            struct FeatureAttributePair {} *__begin_; 
            struct FeatureAttributePair {} *__end_; 
            struct __compressed_pair<gss::FeatureAttributePair *, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator> > { 
                struct FeatureAttributePair {} *__value_; 
                struct StdAllocator<gss::FeatureAttributePair, gss::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __end_cap_; 
        } _attributes; 
    }  _mapFeatureStyleAttributes;
    int  _metroArea;
    float  _navMapZoomLevelTransitionZ;
    VKNavigationPuck * _navigationPuck;
    float  _navigationPuckSize;
    unsigned long long  _purpose;
    struct CartographicRenderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::PassList, std::__1::default_delete<md::PassList> > { struct __compressed_pair<md::PassList *, std::__1::default_delete<md::PassList> > { struct PassList {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<md::RenderTargetRegistry, std::__1::default_delete<md::RenderTargetRegistry> > { struct __compressed_pair<md::RenderTargetRegistry *, std::__1::default_delete<md::RenderTargetRegistry> > { struct RenderTargetRegistry {} *x_1_2_1; } x_4_1_1; } x4; struct vector<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> >, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > > > { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_5_1_1; struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_5_1_2; struct __compressed_pair<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > *, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > > > { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_3_2_1; } x_5_1_3; } x5; } * _renderer;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _rendererMutex;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeUserOffset;
    float  _standardMapZoomLevelTransitionZ;
    struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { 
        struct StylesheetQuery<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleQuery;
    double  _styleTransitionProgress;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    long long  _tileSize;
    double  _zoomLevel;
}

@property (nonatomic, readonly) float currentRoadSignOffset;
@property (nonatomic) <VKMapModelDelegate> *delegate;
@property (nonatomic) bool disableTransitLines;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) bool localizeLabels;
@property (nonatomic) int mapType;
@property (nonatomic) float navMapZoomLevelTransitionZ;
@property (nonatomic) float navigationPuckSize;
@property (nonatomic, readonly) unsigned long long purpose;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeUserOffset;
@property (nonatomic, readonly) bool showingTrafficCasing;
@property (nonatomic) float standardMapZoomLevelTransitionZ;
@property (nonatomic, readonly) NSArray *visibleTileSets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_beginMapZoomLevelTransition:(unsigned char)arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> {} *x1; struct __shared_weak_count {} *x2; })_sceneManager;
- (void)_setStyleManagerFromMapType:(int)arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })_styleManager;
- (void)_updateZoomLevel:(const struct LayoutContext { id x1; struct shared_ptr<md::ViewTransform> { struct ViewTransform {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; id x3; struct shared_ptr<mdc::Camera> { struct Camera {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; unsigned char x5; struct VKEdgeInsets { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; struct VKEdgeInsets { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; } x7; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; struct shared_ptr<ggl::TextureMesh::MeshMesh> { struct MeshMesh {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct StencilManager { unsigned char x_11_1_1; unsigned char x_11_1_2; unsigned char x_11_1_3; struct ClearItem { unsigned char x_4_2_1; struct Matrix<float, 4, 1> { float x_2_3_1[4]; } x_4_2_2; bool x_4_2_3; float x_4_2_4; unsigned char x_4_2_5; unsigned int x_4_2_6; } x_11_1_4; } x11; }*)arg1;
- (id)attributionsForCurrentRegion;
- (float)currentRoadSignOffset;
- (void)dealloc;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 highlightTarget:(unsigned char)arg2;
- (id)delegate;
- (void)destroyRenderer;
- (bool)disableTransitLines;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })featureMarkerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1 groundPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg2;
- (void)forceMapType:(int)arg1 animated:(bool)arg2;
- (void)foreachActiveRenderLayer:(id /* block */)arg1;
- (void)foreachRenderLayer:(id /* block */)arg1;
- (id)initWithTarget:(id)arg1 renderer:(struct CartographicRenderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::PassList, std::__1::default_delete<md::PassList> > { struct __compressed_pair<md::PassList *, std::__1::default_delete<md::PassList> > { struct PassList {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<md::RenderTargetRegistry, std::__1::default_delete<md::RenderTargetRegistry> > { struct __compressed_pair<md::RenderTargetRegistry *, std::__1::default_delete<md::RenderTargetRegistry> > { struct RenderTargetRegistry {} *x_1_2_1; } x_4_1_1; } x4; struct vector<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> >, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > > > { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_5_1_1; struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_5_1_2; struct __compressed_pair<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > *, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > > > { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_3_2_1; } x_5_1_3; } x5; }*)arg2 purpose:(unsigned long long)arg3 taskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg4 logicManager:(struct LogicManager { int (**x1)(); struct unique_ptr<md::Logic, std::__1::default_delete<md::Logic> > { struct __compressed_pair<md::Logic *, std::__1::default_delete<md::Logic> > { struct Logic {} *x_1_2_1; } x_2_1_1; } x2[17]; struct LogicTypePass { unsigned char x_3_1_1; unsigned short x_3_1_2; } x3[17]; }*)arg5 mapEngineSettings:(const struct MapEngineSettings { struct linear_map<md::MapEngineSetting, bool, std::__1::equal_to<md::MapEngineSetting>, std::__1::allocator<std::__1::pair<md::MapEngineSetting, bool> >, std::__1::vector<std::__1::pair<md::MapEngineSetting, bool>, std::__1::allocator<std::__1::pair<md::MapEngineSetting, bool> > > > { struct vector<std::__1::pair<md::MapEngineSetting, bool>, std::__1::allocator<std::__1::pair<md::MapEngineSetting, bool> > > { struct pair<md::MapEngineSetting, bool> {} *x_1_2_1; struct pair<md::MapEngineSetting, bool> {} *x_1_2_2; struct __compressed_pair<std::__1::pair<md::MapEngineSetting, bool> *, std::__1::allocator<std::__1::pair<md::MapEngineSetting, bool> > > { struct pair<md::MapEngineSetting, bool> {} *x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct set<md::MapEngineSetting, std::__1::less<md::MapEngineSetting>, std::__1::allocator<md::MapEngineSetting> > { struct __tree<md::MapEngineSetting, std::__1::less<md::MapEngineSetting>, std::__1::allocator<md::MapEngineSetting> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<md::MapEngineSetting, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<md::MapEngineSetting> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; }*)arg6 animationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg7;
- (unsigned char)labelScaleFactor;
- (void)layoutWithContext:(const struct LayoutContext { id x1; struct shared_ptr<md::ViewTransform> { struct ViewTransform {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; id x3; struct shared_ptr<mdc::Camera> { struct Camera {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; unsigned char x5; struct VKEdgeInsets { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; struct VKEdgeInsets { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; } x7; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; struct shared_ptr<ggl::TextureMesh::MeshMesh> { struct MeshMesh {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct StencilManager { unsigned char x_11_1_1; unsigned char x_11_1_2; unsigned char x_11_1_3; struct ClearItem { unsigned char x_4_2_1; struct Matrix<float, 4, 1> { float x_2_3_1[4]; } x_4_2_2; bool x_4_2_3; float x_4_2_4; unsigned char x_4_2_5; unsigned int x_4_2_6; } x_11_1_4; } x11; }*)arg1;
- (bool)localizeLabels;
- (int)mapType;
- (float)navMapZoomLevelTransitionZ;
- (id)navigationPuck;
- (float)navigationPuckSize;
- (double)northYaw;
- (void)performStylesheetDidReload;
- (unsigned long long)purpose;
- (void)reloadStylesheet;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (void)setDelegate:(id)arg1;
- (void)setDisableTransitLines:(bool)arg1;
- (void)setLabelScaleFactor:(unsigned char)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapType:(int)arg1;
- (void)setMapType:(int)arg1 animated:(bool)arg2;
- (void)setNavCameraIsDetached:(bool)arg1;
- (void)setNavMapZoomLevelTransitionZ:(float)arg1;
- (void)setNavigationPuckSize:(float)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setShowingOuterHaloOnLabelsDidChange:(bool)arg1;
- (void)setStandardMapZoomLevelTransitionZ:(float)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1 forRealistic:(bool)arg2;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (bool)showingTrafficCasing;
- (void)sizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (float)standardMapZoomLevelTransitionZ;
- (long long)tileSize;
- (void)updateMapDrawStyleWithContext:(const struct LayoutContext { id x1; struct shared_ptr<md::ViewTransform> { struct ViewTransform {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; id x3; struct shared_ptr<mdc::Camera> { struct Camera {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; unsigned char x5; struct VKEdgeInsets { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; struct VKEdgeInsets { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; } x7; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; struct shared_ptr<ggl::TextureMesh::MeshMesh> { struct MeshMesh {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct StencilManager { unsigned char x_11_1_1; unsigned char x_11_1_2; unsigned char x_11_1_3; struct ClearItem { unsigned char x_4_2_1; struct Matrix<float, 4, 1> { float x_2_3_1[4]; } x_4_2_2; bool x_4_2_3; float x_4_2_4; unsigned char x_4_2_5; unsigned int x_4_2_6; } x_11_1_4; } x11; }*)arg1;
- (void)updateOverlayType;
- (id)visibleTileSets;

@end
