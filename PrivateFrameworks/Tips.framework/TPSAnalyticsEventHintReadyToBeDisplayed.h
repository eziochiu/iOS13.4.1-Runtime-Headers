/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEventHintReadyToBeDisplayed : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _contentID;
    NSString * _context;
    NSString * _displayType;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) NSString *displayType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (id)bundleID;
- (id)contentID;
- (id)context;
- (id)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentID:(id)arg1;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(id)arg4;
- (void)setBundleID:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayType:(id)arg1;

@end
