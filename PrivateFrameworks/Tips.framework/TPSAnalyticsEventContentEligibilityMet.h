/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEventContentEligibilityMet : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _contentID;
    unsigned long long  _displayType;
    NSArray * _eligibleContext;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, readonly) NSArray *eligibleContext;

+ (id)classSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (id)bundleID;
- (id)contentID;
- (unsigned long long)displayType;
- (id)duetEvent;
- (id)eligibleContext;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 date:(id)arg5;

@end