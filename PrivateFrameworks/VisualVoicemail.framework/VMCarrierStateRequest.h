/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMCarrierStateRequest : VMTelephonyRequest {
    NSString * _destination;
    long long  _identifier;
    NSString * _message;
    NSString * _serviceCenter;
}

@property (nonatomic, readonly, copy) NSString *destination;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *serviceCenter;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscription:(id)arg1;
- (id)initWithSubscription:(id)arg1 destination:(id)arg2 serviceCenter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStateRequest:(id)arg1;
- (id)message;
- (id)serviceCenter;

@end