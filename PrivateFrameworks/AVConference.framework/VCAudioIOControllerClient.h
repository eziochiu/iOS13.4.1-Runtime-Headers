/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioIOControllerClient : NSObject {
    bool  _allowAudioRecording;
    int  _clientPid;
    id  _delegate;
    int  _deviceRole;
    unsigned char  _direction;
    struct VoiceIOFarEndVersionInfo { 
        unsigned char farEndHwModel[64]; 
        unsigned char farEndOSVersion[64]; 
        unsigned int farEndAUVersion; 
    }  _farEndVersionInfo;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _format;
    bool  _isInputMeteringEnabled;
    bool  _isOutputMeteringEnabled;
    bool  _isRemoteCodecInfoValid;
    bool  _isRemoteVersionInfoValid;
    int  _operatingMode;
    double  _remoteCodecSampleRate;
    unsigned int  _remoteCodecType;
    struct _VCAudioIOControllerClientIO { 
        void *processSamplesContext; 
        int (*processSamples)(); 
        NSObject<OS_dispatch_semaphore> *runLock; 
    }  _sinkIO;
    struct _VCAudioIOControllerClientIO { 
        void *processSamplesContext; 
        int (*processSamples)(); 
        NSObject<OS_dispatch_semaphore> *runLock; 
    }  _sourceIO;
}

@property (nonatomic) bool allowAudioRecording;
@property (nonatomic, readonly) int clientPid;
@property (nonatomic, readonly) <VCAudioIOControllerDelegate> *delegate;
@property (nonatomic) int deviceRole;
@property (nonatomic) unsigned char direction;
@property (nonatomic, readonly) struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; } farEndVersionInfo;
@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } format;
@property (getter=isInputMeteringEnabled, nonatomic) bool inputMeteringEnabled;
@property (nonatomic, readonly) bool isRemoteCodecInfoValid;
@property (nonatomic, readonly) bool isRemoteVersionInfoValid;
@property (nonatomic) int operatingMode;
@property (getter=isOuputMeteringEnabled, nonatomic) bool outputMeteringEnabled;
@property (nonatomic, readonly) double remoteCodecSampleRate;
@property (nonatomic, readonly) unsigned int remoteCodecType;
@property (nonatomic, readonly) struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; }*sinkIO;
@property (nonatomic, readonly) struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; }*sourceIO;

- (bool)allowAudioRecording;
- (int)clientPid;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)deviceRole;
- (unsigned char)direction;
- (struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })farEndVersionInfo;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })format;
- (id)initWithDelegate:(id)arg1 sourceContext:(void*)arg2 sourceProcess:(int (*)arg3 sinkContext:(void*)arg4 sinkProcess:(int (*)arg5 clientPid:(int)arg6;
- (bool)isInputMeteringEnabled;
- (bool)isOuputMeteringEnabled;
- (bool)isRemoteCodecInfoValid;
- (bool)isRemoteVersionInfoValid;
- (int)operatingMode;
- (double)remoteCodecSampleRate;
- (unsigned int)remoteCodecType;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setClientFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setDirection:(unsigned char)arg1;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })arg1;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; }*)sinkIO;
- (struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; }*)sourceIO;

@end