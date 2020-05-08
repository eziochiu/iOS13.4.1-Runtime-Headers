/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRTextRecognizerModel : NSObject {
    NSString * _codemap;
    unsigned short * _codemapArray;
    long long  _ctcBlankLabelIndex;
    MLModel * _model;
}

@property (nonatomic, retain) NSString *codemap;
@property (nonatomic) unsigned short*codemapArray;
@property (nonatomic) long long ctcBlankLabelIndex;
@property (nonatomic, readonly) MLModel *model;

+ (id)urlOfModelInThisBundle;

- (void).cxx_destruct;
- (id)codemap;
- (unsigned short*)codemapArray;
- (long long)ctcBlankLabelIndex;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionFromImg_input:(id)arg1 error:(id*)arg2;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setCodemap:(id)arg1;
- (void)setCodemapArray:(unsigned short*)arg1;
- (void)setCtcBlankLabelIndex:(long long)arg1;

@end