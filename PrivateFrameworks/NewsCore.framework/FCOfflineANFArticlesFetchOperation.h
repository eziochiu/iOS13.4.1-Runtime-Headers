/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOfflineANFArticlesFetchOperation : FCOperation {
    NSArray * _articleIDs;
    bool  _cachedOnly;
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    <FCFlintHelper> * _flintHelper;
    unsigned long long  _maximumMissingArticles;
    id /* block */  _progressHandler;
    id  _resultHoldToken;
}

@property (nonatomic, retain) NSArray *articleIDs;
@property (nonatomic) bool cachedOnly;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, retain) <FCFlintHelper> *flintHelper;
@property (nonatomic) unsigned long long maximumMissingArticles;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) id resultHoldToken;

- (void).cxx_destruct;
- (id)_promiseANFResourcesFromHeadlines:(id)arg1;
- (id)_promiseHeadlines;
- (id)_promiseThumbnailsAndANFDocumentsFromHeadlines:(id)arg1;
- (id)articleIDs;
- (bool)cachedOnly;
- (id)context;
- (id /* block */)fetchCompletionHandler;
- (id)flintHelper;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleIDs:(id)arg3;
- (unsigned long long)maximumMissingArticles;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)progressHandler;
- (id)resultHoldToken;
- (void)setArticleIDs:(id)arg1;
- (void)setCachedOnly:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setFlintHelper:(id)arg1;
- (void)setMaximumMissingArticles:(unsigned long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setResultHoldToken:(id)arg1;

@end