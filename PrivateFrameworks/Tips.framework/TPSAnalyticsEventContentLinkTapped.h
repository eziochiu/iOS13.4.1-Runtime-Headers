/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEventContentLinkTapped : TPSAnalyticsEvent {
    NSString * _contentID;
}

@property (nonatomic, retain) NSString *contentID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (id)contentID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentID:(id)arg1;
- (void)setContentID:(id)arg1;

@end
