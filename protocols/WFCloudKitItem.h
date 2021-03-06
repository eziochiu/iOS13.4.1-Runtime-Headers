/* Generated by EzioChiu.
 */

@protocol WFCloudKitItem <NSObject>

@required

+ (NSDictionary *)properties;
+ (NSString *)recordType;

- (CKRecordID *)identifier;

@optional

- (void)ensureFileAssets;
- (unsigned long long)referenceActionForKey:(NSString *)arg1;
- (void)setCreatedAt:(NSDate *)arg1 modifiedAt:(NSDate *)arg2 createdBy:(NSString *)arg3;

@end
