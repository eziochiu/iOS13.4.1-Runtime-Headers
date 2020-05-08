/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAppletSubcredentialEntitlement : NSObject <NSCopying, NSSecureCoding> {
    NSString * _descriptionKey;
    NSString * _longDescriptionKey;
    bool  _nativelySupported;
    unsigned long long  _value;
}

@property (nonatomic, copy) NSString *descriptionKey;
@property (nonatomic, copy) NSString *longDescriptionKey;
@property (getter=isNativelySupported, nonatomic) bool nativelySupported;
@property (nonatomic) unsigned long long value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultDescription;
- (id)defaultLongDescription;
- (id)description;
- (id)descriptionKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isNativelySupported;
- (id)localizedDescriptionWithPass:(id)arg1;
- (id)localizedLongDescriptionWithPass:(id)arg1;
- (id)longDescriptionKey;
- (void)setDescriptionKey:(id)arg1;
- (void)setLongDescriptionKey:(id)arg1;
- (void)setNativelySupported:(bool)arg1;
- (void)setValue:(unsigned long long)arg1;
- (unsigned long long)value;

@end