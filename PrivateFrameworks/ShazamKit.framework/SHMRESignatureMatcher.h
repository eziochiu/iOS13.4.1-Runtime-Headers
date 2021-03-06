/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHMRESignatureMatcher : NSObject <SHMatcher> {
    SHLocalConfiguration * _localConfiguration;
    MRE * _mre;
    <SHMatcherDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHMatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SHLocalConfiguration *localConfiguration;
@property (nonatomic, retain) MRE *mre;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MRESignaturesFromMatches:(id)arg1;
- (void)buildMRE;
- (id)delegate;
- (id)initWithLocalRecognitionConfiguration:(id)arg1;
- (id)localConfiguration;
- (void)match:(id)arg1;
- (id)mediaItemsFromMREResult:(id)arg1;
- (id)mre;
- (void)setDelegate:(id)arg1;
- (void)setLocalConfiguration:(id)arg1;
- (void)setMre:(id)arg1;

@end
