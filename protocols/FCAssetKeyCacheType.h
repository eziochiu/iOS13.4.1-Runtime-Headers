/* Generated by EzioChiu.
 */

@protocol FCAssetKeyCacheType <NSObject>

@required

- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(NSData *)arg1 forWrappingKeyID:(NSData *)arg2;
- (NSData *)wrappingKeyForWrappingKeyID:(NSData *)arg1;

@end