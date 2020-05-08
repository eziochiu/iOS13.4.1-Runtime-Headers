/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMediaTokenServiceStore : NSObject {
    NSString * _clientIdentifier;
    NSString * _keychainAccessGroup;
    AMSMediaToken * _memoryMediaToken;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, retain) NSString *keychainAccessGroup;
@property (nonatomic, retain) AMSMediaToken *memoryMediaToken;

- (void).cxx_destruct;
- (bool)_hasAppleGroupEnabled;
- (id)_keychainAccessGroup;
- (struct __CFDictionary { }*)_keychainQuery;
- (void)_mediaTokenChanged;
- (id)_mediaTokenChangedNotificationName;
- (void)_postMediaTokenChangedNotification;
- (void)_removeTokenFromKeychain;
- (id)_retrieveTokenFromKeychain;
- (void)_setupKeychainNotifications;
- (void)_storeTokenInKeychain:(id)arg1;
- (void)_teardownKeychainNotifications;
- (id)clientIdentifier;
- (void)dealloc;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2;
- (id)keychainAccessGroup;
- (id)memoryMediaToken;
- (id)retrieveToken;
- (void)setKeychainAccessGroup:(id)arg1;
- (void)setMemoryMediaToken:(id)arg1;
- (void)storeToken:(id)arg1;

@end