/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
 */

@interface PSCellularManagementCache : NSObject {
    NSSet * _managedCellDataAppCache;
}

@property (nonatomic, readonly) bool hasManagedCellularData;
@property (nonatomic, readonly) bool isGlobalDataModificationRestricted;
@property (retain) NSSet *managedCellDataAppCache;
@property (nonatomic, readonly) NSString *mdmName;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)hasManagedCellularData;
- (id)init;
- (id)initPrivate;
- (bool)isGlobalDataModificationRestricted;
- (bool)isManaged:(id)arg1;
- (id)managedAppBundleIDs;
- (id)managedCellDataAppBundleIDs;
- (id)managedCellDataAppCache;
- (id)mdmName;
- (void)setManagedCellDataAppCache:(id)arg1;
- (void)willEnterForeground;

@end
