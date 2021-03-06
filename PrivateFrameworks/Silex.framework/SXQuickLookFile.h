/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXQuickLookFile : NSObject {
    NSURL * _fileURL;
    NSURL * _shareURL;
    NSString * _title;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 shareURL:(id)arg2;
- (id)initWithFileURL:(id)arg1 title:(id)arg2 shareURL:(id)arg3;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)shareURL;
- (id)title;

@end
