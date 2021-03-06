/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFileCoordinatedAccountActionQueue : NSObject {
    FCSyncFileCoordinatedDictionary * _fileCoordinatedDictionary;
}

@property (nonatomic, retain) FCSyncFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void).cxx_destruct;
- (bool)enqueueActionWithType:(long long)arg1;
- (id)fileCoordinatedDictionary;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (id)peekAtActionTypes;
- (bool)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(bool)arg2;
- (bool)readLocalDataHint;
- (void)setFileCoordinatedDictionary:(id)arg1;

@end
