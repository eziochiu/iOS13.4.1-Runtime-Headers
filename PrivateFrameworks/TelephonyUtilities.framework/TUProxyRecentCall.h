/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUProxyRecentCall : NSObject <TUSearchResult> {
    CHRecentCall * _recentCall;
    TUSearchController * _searchController;
}

@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *backingContactIdentifier;
@property (readonly) NSString *callerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *displayName;
@property (readonly) NSArray *handles;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *idsCanonicalDestinations;
@property (readonly) NSString *isoCountryCode;
@property (readonly) NSString *mostRecentCallInfo;
@property (readonly) long long mostRecentCallType;
@property (readonly) bool mostRecentCallWasMissed;
@property (nonatomic, retain) CHRecentCall *recentCall;
@property TUSearchController *searchController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backingContact;
- (id)backingContactId;
- (id)backingContactIdentifier;
- (id)destinationId;
- (id)displayName;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)handles;
- (id)idsCanonicalDestinations;
- (id)init;
- (id)initWithRecentCall:(id)arg1;
- (id)mostRecentCallInfo;
- (long long)mostRecentCallType;
- (bool)mostRecentCallWasMissed;
- (id)recentCall;
- (id)searchController;
- (void)setRecentCall:(id)arg1;
- (void)setSearchController:(id)arg1;

@end