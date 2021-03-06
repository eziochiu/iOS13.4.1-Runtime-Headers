/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaInvocation : PBCodable {
    int  _invocationAction;
    int  _invocationSource;
    SISchemaViewContainer * _viewContainer;
}

@property (nonatomic) int invocationAction;
@property (nonatomic) int invocationSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaViewContainer *viewContainer;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)invocationAction;
- (int)invocationSource;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setInvocationAction:(int)arg1;
- (void)setInvocationSource:(int)arg1;
- (void)setViewContainer:(id)arg1;
- (id)viewContainer;
- (void)writeTo:(id)arg1;

@end
