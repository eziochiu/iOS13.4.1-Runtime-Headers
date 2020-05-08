/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaUIStateTransition : PBCodable {
    int  _currentState;
    int  _dismissalReason;
    int  _previousState;
    int  _siriPresentationType;
}

@property (nonatomic) int currentState;
@property (nonatomic) int dismissalReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int previousState;
@property (nonatomic) int siriPresentationType;

- (int)currentState;
- (id)dictionaryRepresentation;
- (int)dismissalReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)previousState;
- (bool)readFrom:(id)arg1;
- (void)setCurrentState:(int)arg1;
- (void)setDismissalReason:(int)arg1;
- (void)setPreviousState:(int)arg1;
- (void)setSiriPresentationType:(int)arg1;
- (int)siriPresentationType;
- (void)writeTo:(id)arg1;

@end