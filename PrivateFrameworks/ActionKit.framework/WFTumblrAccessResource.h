/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFTumblrAccessResource : WFAccessResource <WFTumblrViewControllerDelegate> {
    NSString * _OAuthToken;
    NSString * _OAuthTokenSecret;
}

@property (nonatomic, copy) NSString *OAuthToken;
@property (nonatomic, copy) NSString *OAuthTokenSecret;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (void)setTumblrOAuthToken:(id)arg1;
+ (void)setTumblrOAuthTokenSecret:(id)arg1;
+ (id)tumblrOAuthToken;
+ (id)tumblrOAuthTokenSecret;

- (void).cxx_destruct;
- (id)OAuthToken;
- (id)OAuthTokenSecret;
- (id)associatedAppIdentifier;
- (bool)canLogOut;
- (unsigned long long)globalLevelStatus;
- (void)logOut;
- (id)protectedResourceDescription;
- (id)resourceName;
- (void)setOAuthToken:(id)arg1;
- (void)setOAuthTokenSecret:(id)arg1;
- (id)username;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (id /* block */)completionHandler;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)tumblrViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)tumblrViewController:(id)arg1 didSucceedWithOAuthToken:(id)arg2 OAuthTokenSecret:(id)arg3;
- (void)tumblrViewControllerDidCancel:(id)arg1;

@end
