/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeakerModel : NSObject {
    NSString * _languageCode;
    NSString * _modelFileName;
    NSString * _modelPath;
    NSString * _tdtiModelPath;
    NSString * _tdtiUtteranceDirectory;
    NSString * _tiModelPath;
    NSString * _tiUtteranceDirectory;
    NSString * _utteranceDirectory;
}

@property (nonatomic, readonly) NSArray *enrollmentUtterance;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSString *modelPath;
@property (nonatomic, readonly) bool needsRetrain;
@property (nonatomic, readonly) NSString *tdtiModelPath;
@property (nonatomic, readonly) NSString *tdtiUtteranceDirectory;
@property (nonatomic, readonly) NSString *tiModelPath;
@property (nonatomic, readonly) NSString *tiUtteranceDirectory;
@property (nonatomic, readonly) NSString *utteranceDirectory;

- (void).cxx_destruct;
- (bool)_isDirectoryEmpty:(id)arg1;
- (void)discard;
- (id)enrollmentUtterance;
- (id)initWithSpeakerModelFileName:(id)arg1 languageCode:(id)arg2;
- (bool)isValid;
- (id)modelPath;
- (bool)needsRetrain;
- (id)tdtiModelPath;
- (id)tdtiUtteranceDirectory;
- (id)tiModelPath;
- (id)tiUtteranceDirectory;
- (id)utteranceDirectory;

@end