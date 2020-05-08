/* Generated by EzioChiu.
 */

@protocol PMSliderProviderProtocol <PMEditProviderProtocol>

@required

- (NSString *)displayNameForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)updateLocalizedNames;
- (void)willBeginScrolling;

@end