/* Generated by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADUserDeviceUtilities : NSObject {
    NSNumber * _lastiTunesAccountID;
    <NSObject> * _notifyToken;
}

@property (nonatomic, readonly) bool deviceHasHomeButton;
@property (retain) NSNumber *lastiTunesAccountID;
@property (nonatomic, retain) <NSObject> *notifyToken;

+ (bool)educationModeEnabled;
+ (id)iCloudAccount;
+ (id)iTunesAccountIdentifier;
+ (id)iTunesStoreAccount;
+ (bool)isManagedAppleId;
+ (bool)isiCloudAccountAvailable;
+ (bool)isiCloudManagedAppleId;
+ (bool)isiTunesAccountAvailable;
+ (bool)isiTunesManagedAppleId;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)deviceHasHomeButton;
- (id)lastiTunesAccountID;
- (id)notifyToken;
- (void)setLastiTunesAccountID:(id)arg1;
- (void)setNotifyToken:(id)arg1;
- (void)unregisterForiTunesAccountChanges;

@end
