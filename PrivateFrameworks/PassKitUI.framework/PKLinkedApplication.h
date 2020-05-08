/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKLinkedApplication : NSObject <SKStoreProductViewControllerDelegate> {
    NSURL * _defaultLaunchURL;
    SSSoftwareLibraryItem * _foundLibraryItem;
    NSDictionary * _foundStoreItem;
    UIImage * _iconImage;
    bool  _loaded;
    bool  _loading;
    unsigned long long  _loadingToken;
    NSHashTable * _observers;
    SKStoreProductViewController * _presentedViewController;
    NSArray * _storeIDs;
    bool  _useSmallIcon;
}

@property (nonatomic, readonly) NSNumber *averageRating;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSURL *defaultLaunchURL;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } expectedIconSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *iconImage;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *price;
@property (nonatomic, readonly) NSString *publisher;
@property (nonatomic, readonly) long long state;
@property (nonatomic, copy) NSArray *storeIDs;
@property (readonly) Class superclass;
@property (nonatomic) bool useSmallIcon;

+ (id)_openOptionsWithURL:(id)arg1;

- (void).cxx_destruct;
- (int)_iconOptionsForItem:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { double x1; double x2; })arg2 requireStrictMatch:(bool)arg3;
- (int)_iconVariantForScale:(double)arg1;
- (id)_imageForSize:(struct CGSize { double x1; double x2; })arg1 fromArtwork:(id)arg2 requireStrictMatch:(bool)arg3;
- (bool)_itemArtNeedsShine:(id)arg1;
- (void)_notifyObserversOfStateChange;
- (void)_performStoreLookupWithCompletion:(id /* block */)arg1;
- (void)_unloadApplicationState;
- (void)_updateApplicationStateWithCompletion:(id /* block */)arg1;
- (bool)_useLibraryItem;
- (void)addObserver:(id)arg1;
- (id)averageRating;
- (void)dealloc;
- (id)defaultLaunchURL;
- (struct CGSize { double x1; double x2; })expectedIconSize;
- (id)iconImage;
- (id)init;
- (id)initWithPass:(id)arg1;
- (id)initWithStoreIDs:(id)arg1 defaultLaunchURL:(id)arg2;
- (void)installedApplicationsDidChangeNotification:(id)arg1;
- (bool)isInstalled;
- (id)name;
- (void)openApplication:(id)arg1;
- (id)price;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)publisher;
- (void)reloadApplicationState;
- (void)reloadApplicationStateIfNecessary;
- (void)removeObserver:(id)arg1;
- (void)setDefaultLaunchURL:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setUseSmallIcon:(bool)arg1;
- (long long)state;
- (id)storeIDs;
- (bool)useSmallIcon;

@end