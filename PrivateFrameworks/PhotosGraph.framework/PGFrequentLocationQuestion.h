/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGFrequentLocationQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    NSString * _entityIdentifier;
    double  _localFactoryScore;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetUUID:(id)arg1 location:(id)arg2 locationTypeName:(id)arg3 localFactoryScore:(double)arg4;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end