/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFinanceVerifyPurchaseResponse : AMSFinanceDialogResponse {
    NSDictionary * _responseDictionary;
    AMSURLTaskInfo * _taskInfo;
    long long  _verifyType;
}

@property (nonatomic, retain) NSDictionary *responseDictionary;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;
@property (nonatomic) long long verifyType;

+ (id)_dialogRequestForCVVFromPayload:(id)arg1 verifyType:(long long)arg2;
+ (id)_dialogRequestForCarrierFromPayload:(id)arg1 verifyType:(long long)arg2;
+ (long long)_verifyTypeFromPayload:(id)arg1;
+ (bool)isVerifyPurchasePayload:(id)arg1;

- (void).cxx_destruct;
- (id)_handleCVVDialogResult:(id)arg1 shouldReattempt:(bool*)arg2;
- (id)_handleCarrierDialogResult:(id)arg1 shouldReattempt:(bool*)arg2;
- (id)_runCVVRequestForCode:(id)arg1 error:(id*)arg2;
- (id)_runCarrierNewCodeWithError:(id*)arg1;
- (id)_runCarrierVerifyCode:(id)arg1 error:(id*)arg2;
- (id)initWithPayload:(id)arg1 taskInfo:(id)arg2;
- (id)performWithTaskInfo:(id)arg1;
- (id)responseDictionary;
- (void)setResponseDictionary:(id)arg1;
- (void)setTaskInfo:(id)arg1;
- (void)setVerifyType:(long long)arg1;
- (id)taskInfo;
- (long long)verifyType;

@end
