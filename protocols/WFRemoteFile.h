/* Generated by EzioChiu.
 */

@protocol WFRemoteFile <WFNaming, NSObject>

@required

- (NSNumber *)wfFileSize;
- (WFFileType *)wfFileType;
- (bool)wfIsDirectory;
- (bool)wfIsEqualToFile:(id <WFRemoteFile>)arg1;
- (NSDate *)wfLastModifiedDate;
- (NSString *)wfPath;

@end
