/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencyRequest : NSObject {
    bool  _authenticated;
    NSData * _data;
    bool  _isGET;
    double  _timeout;
    NSURL * _url;
}

@property bool authenticated;
@property (retain) NSData *data;
@property bool isGET;
@property double timeout;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (bool)authenticated;
- (id)copyRequest:(id*)arg1;
- (id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id*)arg3;
- (id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id*)arg4;
- (id)data;
- (id)initGETWithURL:(id)arg1;
- (id)initPOSTWithURL:(id)arg1 data:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)initWithURL:(id)arg1 data:(id)arg2 timeout:(double)arg3 isGET:(bool)arg4;
- (bool)isGET;
- (void)setAuthenticated:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setIsGET:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (double)timeout;
- (id)url;

@end