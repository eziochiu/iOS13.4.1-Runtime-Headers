/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeferredProcessingAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _containerAgeInSeconds;
    unsigned long long  _containerSizeInBytes;
    int  _error;
    bool  _fileBacked;
    unsigned int  _graphPrepareDurationInMilliseconds;
    bool  _interactiveQoS;
    unsigned int  _jobDurationInMilliseconds;
    int  _processingType;
}

@property (nonatomic) unsigned int containerAgeInSeconds;
@property (nonatomic) unsigned long long containerSizeInBytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int error;
@property (nonatomic) bool fileBacked;
@property (nonatomic) unsigned int graphPrepareDurationInMilliseconds;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interactiveQoS;
@property (nonatomic) unsigned int jobDurationInMilliseconds;
@property (nonatomic) int processingType;
@property (readonly) Class superclass;

- (unsigned int)containerAgeInSeconds;
- (unsigned long long)containerSizeInBytes;
- (void)dealloc;
- (int)error;
- (id)eventDictionary;
- (id)eventName;
- (bool)fileBacked;
- (unsigned int)graphPrepareDurationInMilliseconds;
- (id)init;
- (bool)interactiveQoS;
- (unsigned int)jobDurationInMilliseconds;
- (int)processingType;
- (void)reset;
- (void)setContainerAgeInSeconds:(unsigned int)arg1;
- (void)setContainerSizeInBytes:(unsigned long long)arg1;
- (void)setError:(int)arg1;
- (void)setFileBacked:(bool)arg1;
- (void)setGraphPrepareDurationInMilliseconds:(unsigned int)arg1;
- (void)setInteractiveQoS:(bool)arg1;
- (void)setJobDurationInMilliseconds:(unsigned int)arg1;
- (void)setProcessingType:(int)arg1;

@end
