/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHSpellChecker : NSObject {
    CHSpellCheckerErrorModel * _errorModel;
    AppleSpell * _spellServer;
}

@property (nonatomic, retain) CHSpellCheckerErrorModel *errorModel;

+ (id)newErrorModel;
+ (id)sharedSpellServer;

- (id)correctionsForString:(id)arg1 shouldUseErrorModel:(bool)arg2 forLocale:(id)arg3;
- (void)dealloc;
- (id)errorModel;
- (id)init;
- (bool)isWordInUserDictionaries:(id)arg1 caseSensitive:(bool)arg2;
- (void)setErrorModel:(id)arg1;

@end
