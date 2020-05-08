/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface AURemoteExtensionContext : NSExtensionContext <AUAudioUnitXPCProtocol> {
    AUAudioUnit * _audioUnit;
    AUParameterTree * _cachedParameterTree;
    struct AudioComponentDescription { 
        unsigned int componentType; 
        unsigned int componentSubType; 
        unsigned int componentManufacturer; 
        unsigned int componentFlags; 
        unsigned int componentFlagsMask; 
    }  _componentDescription;
    int  _deferPropertyChangeNotifications;
    NSObject<OS_voucher> * _initializationVoucher;
    bool  _isRunningInProcess;
    bool  _isUIExtension;
    NSMutableArray * _pendingChangedProperties;
    NSObject<OS_dispatch_source> * _presetFolderWatcher;
    NSObject<OS_dispatch_queue> * _presetMonitoringQueue;
    NSObject<OS_dispatch_queue> * _propertyObserverQueue;
    NSXPCConnection * _remoteHostXPCConnection;
    struct AUExtRenderingServer { int (**x1)(); unsigned int x2; struct XMachPortSendRight { unsigned int x_3_1_1; } x3; int x4; struct IOThread {} *x5; bool x6; unsigned int x7; int x8; int x9; struct IPCAUSharedMemory { int (**x_10_1_1)(); bool x_10_1_2; bool x_10_1_3; unsigned long long x_10_1_4; void *x_10_1_5; unsigned int x_10_1_6; int x_10_1_7; int x_10_1_8; id x_10_1_9; unsigned int x_10_1_10; struct vector<IPCAUSharedMemoryBase::Element, std::__1::allocator<IPCAUSharedMemoryBase::Element> > { struct Element {} *x_11_2_1; struct Element {} *x_11_2_2; struct __compressed_pair<IPCAUSharedMemoryBase::Element *, std::__1::allocator<IPCAUSharedMemoryBase::Element> > { struct Element {} *x_3_3_1; } x_11_2_3; } x_10_1_11; unsigned int x_10_1_12; bool x_10_1_13; unsigned int x_10_1_14; } x10; struct unique_ptr<SemaphoreIOMessenger_Receiver, std::__1::default_delete<SemaphoreIOMessenger_Receiver> > { struct __compressed_pair<SemaphoreIOMessenger_Receiver *, std::__1::default_delete<SemaphoreIOMessenger_Receiver> > { struct SemaphoreIOMessenger_Receiver {} *x_1_2_1; } x_11_1_1; } x11; } * _renderServer;
    struct reply_watchdog_factory { 
        bool mDebugging; 
        int mDefaultTimeoutMS; 
        struct function<void ()>="__f_"{__value_func<void ()>="__buf_"{type="__lx"[24C] {} mTimeoutHandler; 
        struct __base<void ()> {} *__f_; 
    }  _replyWatchdogFactory;
    NSMutableArray * _userPresets;
    AUAudioUnitViewService * _viewService;
}

@property (nonatomic) int deferPropertyChangeNotifications;
@property (nonatomic, readonly) NSMutableArray *pendingChangedProperties;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyObserverQueue;
@property (nonatomic) AUAudioUnitViewService *viewService;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fetchAndClearPendingChangedProperties;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id*)arg3;
- (bool)_identifyBus:(id)arg1 scope:(unsigned int*)arg2 element:(unsigned int*)arg3;
- (void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)close:(id /* block */)arg1;
- (id)currentParameterTree;
- (void)dealloc;
- (int)deferPropertyChangeNotifications;
- (void)deleteUserPreset:(id)arg1 reply:(id /* block */)arg2;
- (void)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(id /* block */)arg4;
- (void)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(id /* block */)arg4;
- (void)getBusses:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)getParameter:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)getParameterTree:(id /* block */)arg1;
- (id)iOSViewController;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)initialize2:(int)arg1 formats:(id)arg2 maxFrames:(unsigned long long)arg3 buffer:(id)arg4 bufferSize:(unsigned int)arg5 beginSem:(id)arg6 endSem:(id)arg7 reply:(id /* block */)arg8;
- (void)initialize:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)loadUserPresets:(id /* block */)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)open:(id /* block */)arg1;
- (void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(id /* block */)arg3;
- (void)parameterStringFromValue:(float)arg1 currentValue:(bool)arg2 address:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(id /* block */)arg2;
- (id)pendingChangedProperties;
- (void)presetStateFor:(id)arg1 reply:(id /* block */)arg2;
- (void)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 reply:(id /* block */)arg3;
- (id)propertyObserverQueue;
- (void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)reset:(id /* block */)arg1;
- (void)saveUserPreset:(id)arg1 state:(id)arg2 reply:(id /* block */)arg3;
- (void)selectViewConfiguration:(id)arg1 reply:(id /* block */)arg2;
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(id)arg3 reply:(id /* block */)arg4;
- (void)setBusName:(unsigned int)arg1 scope:(unsigned int)arg2 name:(id)arg3 reply:(id /* block */)arg4;
- (void)setDeferPropertyChangeNotifications:(int)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 reply:(id /* block */)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 reply:(id /* block */)arg3;
- (void)setViewService:(id)arg1;
- (void)setWorkIntervalPort:(id)arg1 reply:(id /* block */)arg2;
- (void)startUserPresetFolderMonitoring;
- (void)supportedViewConfigurations:(id)arg1 reply:(id /* block */)arg2;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)uninitialize:(id /* block */)arg1;
- (void)valueForKey:(id)arg1 reply:(id /* block */)arg2;
- (void)valueForProperty:(id)arg1 reply:(id /* block */)arg2;
- (id)viewService;

@end