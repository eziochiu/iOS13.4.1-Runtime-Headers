/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

@interface CHHapticPattern : NSObject <CHHapticPlayable> {
    NSMutableArray * _embeddedURLs;
    NSMutableArray * _events;
    NSMutableArray * _parameterCurves;
    NSMutableArray * _parameters;
    NSNumber * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) NSArray *events;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *parameterCurves;
@property (readonly) NSArray *parameters;
@property (readonly) Class superclass;

+ (id)eventListFromEvents:(id)arg1 parameters:(id)arg2 parameterCurves:(id)arg3 engine:(id)arg4 privileged:(bool)arg5;

- (void).cxx_destruct;
- (double)duration;
- (id)eventListFromDictionary:(id)arg1 error:(id*)arg2;
- (id)events;
- (id)exportDictionaryAndReturnError:(id*)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithEvents:(id)arg1 parameterCurves:(id)arg2 error:(id*)arg3;
- (id)initWithEvents:(id)arg1 parameters:(id)arg2 error:(id*)arg3;
- (id)parameterCurves;
- (id)parameters;
- (bool)resolveExternalResources:(id)arg1 error:(id*)arg2;

@end