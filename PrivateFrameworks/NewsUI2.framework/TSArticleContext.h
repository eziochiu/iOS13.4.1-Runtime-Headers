/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface TSArticleContext : NSObject {
    void adPreviewID;
    void adPreviewSessionID;
    void maximumAdRequestsForCurrentAdPreviewID;
    void notificationID;
    void notificationSenderChannelID;
    void presentationReason;
    void previousArticleID;
    void previousArticleVersion;
    void referral;
    void sourceApplication;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  userActionDate;
}

@property (nonatomic, readonly) NSString *adPreviewID;
@property (nonatomic, readonly) NSString *adPreviewSessionID;
@property (nonatomic, readonly) long long maximumAdRequestsForCurrentAdPreviewID;
@property (nonatomic, readonly) NSString *notificationID;
@property (nonatomic, readonly) NSString *notificationSenderChannelID;
@property (nonatomic, readonly) long long presentationReason;
@property (nonatomic, readonly) NSString *previousArticleID;
@property (nonatomic, readonly) NSString *previousArticleVersion;
@property (nonatomic, retain) TSAnalyticsReferral *referral;
@property (nonatomic, readonly) NSString *sourceApplication;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDate *userActionDate;

- (void).cxx_destruct;
- (id)adPreviewID;
- (id)adPreviewSessionID;
- (id)init;
- (id)initWithUrl:(id)arg1 sourceApplication:(id)arg2 previousArticleID:(id)arg3 previousArticleVersion:(id)arg4 adPreviewSessionID:(id)arg5 adPreviewID:(id)arg6 maximumAdRequestsForCurrentAdPreviewID:(long long)arg7 userActionDate:(id)arg8 presentationReason:(long long)arg9 notificationID:(id)arg10 notificationSenderChannelID:(id)arg11 referral:(id)arg12;
- (long long)maximumAdRequestsForCurrentAdPreviewID;
- (id)notificationID;
- (id)notificationSenderChannelID;
- (long long)presentationReason;
- (id)previousArticleID;
- (id)previousArticleVersion;
- (id)referral;
- (void)setReferral:(id)arg1;
- (id)sourceApplication;
- (id)url;
- (id)userActionDate;

@end
