/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFTaskForClass : NSObject {
    <__NSURLSessionTaskGroupForConfiguration> * _group;
    NSData * bodyData;
    Class  cl;
    id /* block */  completion;
    id /* block */  downloadCompletion;
    NSString * downloadFilePath;
    NSURLRequest * request;
    NSData * resumeData;
    NSUUID * uniqueIdentifier;
    NSURL * uploadFile;
}

@property (retain) NSData *bodyData;
@property (retain) Class cl;
@property (copy) id /* block */ completion;
@property (copy) id /* block */ downloadCompletion;
@property (retain) NSString *downloadFilePath;
@property (readonly, retain) <__NSURLSessionTaskGroupForConfiguration> *group;
@property (retain) NSURLRequest *request;
@property (retain) NSData *resumeData;
@property (retain) NSUUID *uniqueIdentifier;
@property (retain) NSURL *uploadFile;

- (id)bodyData;
- (Class)cl;
- (id /* block */)completion;
- (void)dealloc;
- (id /* block */)downloadCompletion;
- (id)downloadFilePath;
- (id)group;
- (id)initWithGroup:(id)arg1;
- (id)request;
- (id)resumeData;
- (void)setBodyData:(id)arg1;
- (void)setCl:(Class)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDownloadCompletion:(id /* block */)arg1;
- (void)setDownloadFilePath:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResumeData:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUploadFile:(id)arg1;
- (id)uniqueIdentifier;
- (id)uploadFile;

@end