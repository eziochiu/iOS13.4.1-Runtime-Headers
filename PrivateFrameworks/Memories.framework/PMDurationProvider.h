/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMDurationProvider : NSObject <PMSliderProviderProtocol> {
    double  _currentDuration;
    double  _customDuration;
    <PMEditProviderDelegate> * _delegate;
    NSArray * _localizedDurations;
    double  _maxDuration;
    VEKProduction * _production;
    unsigned long long  _selectedIndex;
}

@property (nonatomic) double currentDuration;
@property (nonatomic) double customDuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PMEditProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *localizedDurations;
@property (nonatomic, readonly) double maxDuration;
@property (nonatomic, retain) VEKProduction *production;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)currentDuration;
- (double)customDuration;
- (id)delegate;
- (id)displayNameForIndex:(unsigned long long)arg1;
- (id)initWithProduction:(id)arg1;
- (id)localizedDurations;
- (double)maxDuration;
- (unsigned long long)numberOfItems;
- (id)production;
- (unsigned long long)selectedIndex;
- (void)setCurrentDuration:(double)arg1;
- (void)setCustomDuration:(double)arg1;
- (void)setCustomDuration:(double)arg1 andEdit:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLocalizedDurations:(id)arg1;
- (void)setProduction:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)updateLocalizedNames;
- (void)updateWithResult:(id)arg1;
- (void)willBeginScrolling;

@end