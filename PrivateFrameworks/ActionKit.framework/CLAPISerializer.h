/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface CLAPISerializer : NSObject

+ (id)JSONDataFromArray:(id)arg1;
+ (id)JSONDataFromDictionary:(id)arg1;
+ (id)accountWithEmail:(id)arg1 password:(id)arg2 acceptTerms:(bool)arg3;
+ (id)bookmarkWithURL:(id)arg1 name:(id)arg2;
+ (id)bookmarkWithURL:(id)arg1 name:(id)arg2 private:(bool)arg3;
+ (id)itemForRestore;
+ (id)itemWithName:(id)arg1;
+ (id)itemWithPrivate:(bool)arg1;
+ (id)receiptWithBase64String:(id)arg1;
+ (id)webItemTypeStringForType:(long long)arg1;

@end