/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEDNSProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString * _domain;
    NSData * _publicKey;
    NSArray * _servers;
    long long  _type;
}

@property (retain) NSString *domain;
@property (retain) NSData *publicKey;
@property (readonly) NSArray *servers;
@property (readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 servers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)publicKey;
- (id)servers;
- (void)setDomain:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (long long)type;

@end
