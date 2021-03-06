/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMICameraVideoAnalyzerDelegateAdapter : NSObject <HMICameraVideoAnalyzerDelegate> {
    id /* block */  _didAnalyzeFragment;
    id /* block */  _didFailAnalysisForFragment;
    id /* block */  _didFindSignificantEvent;
    id /* block */  _didNotAnalyzeFragment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didAnalyzeFragment;
@property (nonatomic, copy) id /* block */ didFailAnalysisForFragment;
@property (nonatomic, copy) id /* block */ didFindSignificantEvent;
@property (nonatomic, copy) id /* block */ didNotAnalyzeFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finish;
- (void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3;
- (void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3;
- (void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (id /* block */)didAnalyzeFragment;
- (id /* block */)didFailAnalysisForFragment;
- (id /* block */)didFindSignificantEvent;
- (id /* block */)didNotAnalyzeFragment;
- (void)setDidAnalyzeFragment:(id /* block */)arg1;
- (void)setDidFailAnalysisForFragment:(id /* block */)arg1;
- (void)setDidFindSignificantEvent:(id /* block */)arg1;
- (void)setDidNotAnalyzeFragment:(id /* block */)arg1;

@end
