/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKClassicGlobeCanvas : VKScreenCanvas <GEOResourceManifestTileGroupObserver, VKInteractiveMap> {
    VKARCameraController * _arCameraController;
    bool  _arRoadDisabledState;
    bool  _canShowFlyover;
    bool  _coarseLoading;
    double  _contentScale;
    double  _currentZoomLevel;
    struct AltitudeDebugSettings { 
        bool altitudePauseLoading; 
        bool altitudeFreezeViewNode; 
        bool altitudeTexturePaging; 
        bool altitudeShowTileBounds; 
        bool altitudeThreadDrawing; 
        bool altitudeMipmapSatellite; 
        bool altitudeMipmapFlyover; 
        bool altitudeMipmapObjectTree; 
        bool altitudeShowNightLight; 
        float lodScale; 
        float tileQualityThreshold; 
        float hideMeshTime; 
        float fadeSpeed; 
        bool tourSpeedup; 
        float tourSpeedupFactor; 
    }  _debugSettings;
    <VKInteractiveMapDelegate> * _delegate;
    bool  _disableLabels;
    bool  _disableRoads;
    struct shared_ptr<ggl::FlyoverLibrary> { 
        struct FlyoverLibrary {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _flyoverLibrary;
    int  _flyoverMode;
    struct GlobeAdapter { struct shared_ptr<md::GlobeAdapterData> { struct GlobeAdapterData {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct GlobeView {} *x2; struct unordered_set<std::__1::shared_ptr<md::LabelMapTile>, std::__1::hash<std::__1::shared_ptr<md::LabelMapTile> >, std::__1::equal_to<std::__1::shared_ptr<md::LabelMapTile> >, geo::StdAllocator<std::__1::shared_ptr<md::LabelMapTile>, mdm::Allocator> > { struct __hash_table<std::__1::shared_ptr<md::LabelMapTile>, std::__1::hash<std::__1::shared_ptr<md::LabelMapTile> >, std::__1::equal_to<std::__1::shared_ptr<md::LabelMapTile> >, geo::StdAllocator<std::__1::shared_ptr<md::LabelMapTile>, mdm::Allocator> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelMapTile>, void *> *> *[], std::__1::__bucket_list_deallocator<geo::StdAllocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelMapTile>, void *> *> *, mdm::Allocator> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelMapTile>, void *> *> **, std::__1::__bucket_list_deallocator<geo::StdAllocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelMapTile>, void *> *> *, mdm::Allocator> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelMapTile>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<geo::StdAllocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelMapTile>, void *> *> *, mdm::Allocator> > { struct __compressed_pair<unsigned long, geo::StdAllocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelMapTile>, void *> *> *, mdm::Allocator> > { unsigned long long x_1_6_1; struct StdAllocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::shared_ptr<md::LabelMapTile>, void *> *> *, mdm::Allocator> { struct Allocator {} *x_2_7_1; } x_1_6_2; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; } * _globeAdapter;
    VKGlobeCameraController * _globeCameraController;
    bool  _initialized;
    struct shared_ptr<bool> { 
        bool *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _isDead;
    bool  _isDownloading;
    bool  _isLoading;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastCanvasSize;
    struct LoadingStatusTracker { int (**x1)(); struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_2_1_1; } x2; int x3; id x4; struct optional<mdc::SceneStatus> { bool x_5_1_1; union ValueUnion { unsigned char x_2_2_1[1]; unsigned char x_2_2_2; } x_5_1_2; } x5; bool x6; struct function<void ()>={__value_func<void ()>={type=[24C] {} x7; struct __base<void ()> {} *x8; } * _loadingStatusTracker;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    int  _mapType;
    struct shared_ptr<md::GlobeOverlayContainer> { 
        struct GlobeOverlayContainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _overlayContainer;
    struct RealisticRenderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::PassList, std::__1::default_delete<md::PassList> > { struct __compressed_pair<md::PassList *, std::__1::default_delete<md::PassList> > { struct PassList {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<md::RenderTargetRegistry, std::__1::default_delete<md::RenderTargetRegistry> > { struct __compressed_pair<md::RenderTargetRegistry *, std::__1::default_delete<md::RenderTargetRegistry> > { struct RenderTargetRegistry {} *x_1_2_1; } x_4_1_1; } x4; struct vector<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> >, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > > > { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_5_1_1; struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_5_1_2; struct __compressed_pair<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > *, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > > > { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_3_2_1; } x_5_1_3; } x5; } * _renderer;
    id /* block */  _sceneDidLoadCallback;
    bool  _tourIsDownloading;
    bool  _trafficEnabled;
}

@property (nonatomic, readonly) VKARCameraController *arCameraController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKInteractiveMapDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableLabels;
@property (nonatomic) bool disableRoads;
@property (nonatomic, readonly) bool flyoverAvailable;
@property (nonatomic, readonly) int flyoverMode;
@property (nonatomic, readonly) VKGlobeCameraController *globeCameraController;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mapType;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, copy) id /* block */ sceneDidLoadCallback;
@property (readonly) Class superclass;
@property (nonatomic) bool trafficEnabled;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (bool)supportsMapType:(int)arg1 scale:(int)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_centerScreenPoint;
- (void)_reloadStylesheet;
- (void)_setDefaultFov:(float)arg1;
- (const struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)_styleManager;
- (void)_update;
- (void)_updateDebugSettings;
- (void)_viewTransformSetup;
- (void)addOverlay:(id)arg1;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (id)arCameraController;
- (id)attributionsForCurrentRegion;
- (id)camera;
- (id)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToCameraModelPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertMapPointToPoint:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinateOnSphere:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToMapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)createFlyoverPreTourAnimation:(id)arg1 duration:(double)arg2;
- (float)currentRoadSignOffset;
- (void)dealloc;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 highlightTarget:(unsigned char)arg2;
- (id)delegate;
- (id)detailedDescription;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(bool)arg1 beAggressive:(bool)arg2;
- (void)disableFlyoverStatistics;
- (bool)disableLabels;
- (bool)disableRoads;
- (void)disableTileAnalytics;
- (void)enableFlyoverStatistics;
- (void)enableTileAnalytics;
- (void)enterARSessionAtCoordinate:(struct { double x1; double x2; })arg1;
- (void)exitARSession;
- (bool)flyoverAvailable;
- (int)flyoverMode;
- (id)flyoverStatistics;
- (id)globeCameraController;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_4_1_1)(); id x_4_1_2; struct _retain_objc { } x_4_1_3; struct _release_objc { } x_4_1_4; } x4; struct unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> > { struct __compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> > { struct DisplayLink {} *x_1_2_1; } x_5_1_1; } x5; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct SnapshotRunLoop {} *x_1_2_1; } x_6_1_1; } x6; struct RunLoop {} *x7; struct unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> > { struct __compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> > { struct AnimationManager {} *x_1_2_1; } x_8_1_1; } x8; }*)arg1 inBackground:(bool)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (int)mapType;
- (struct GlobeOverlayContainer { struct GlobeView {} *x1; id x2; struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_3_1_1; } x3; double x4; }*)overlayContainer;
- (id)overlays;
- (void)pauseFlyoverTourAnimation;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(id /* block */)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2 course:(const struct Unit<RadianUnitDescription, double> { double x1; }*)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2;
- (void)removeOverlay:(id)arg1;
- (void)requestStylesheetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1 animated:(bool)arg2;
- (void)resetFlyoverStatistics;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resumeFlyoverTourAnimation;
- (id /* block */)sceneDidLoadCallback;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableLabels:(bool)arg1;
- (void)setDisableRoads:(bool)arg1;
- (void)setMapType:(int)arg1;
- (void)setMapType:(int)arg1 animated:(bool)arg2;
- (void)setNavCameraIsDetached:(bool)arg1;
- (void)setNightMode:(bool)arg1;
- (void)setSceneDidLoadCallback:(id /* block */)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setupMapScene;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(bool)arg2 labelChanged:(id /* block */)arg3 stateChange:(id /* block */)arg4;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(bool)arg2 labelChanged:(id /* block */)arg3 stateChange:(id /* block */)arg4;
- (void)stopAnimations;
- (void)stopFlyoverAnimation;
- (void)stopLoading;
- (void)stopSnappingAnimations;
- (bool)trafficEnabled;
- (void)transferStateFromCanvas:(id)arg1;
- (void)transitionToTracking:(bool)arg1 mapMode:(long long)arg2 startLocation:(struct { double x1; double x2; })arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(id /* block */)arg6;
- (void)updateCameraForFrameResize;
- (void)updateCameraFromGlobe;
- (void)updateWithTimestamp:(double)arg1;
- (bool)useNewRenderPath;
- (id)viewportInfo;
- (id)visibleTileSets;
- (void)waitForLoading;

@end