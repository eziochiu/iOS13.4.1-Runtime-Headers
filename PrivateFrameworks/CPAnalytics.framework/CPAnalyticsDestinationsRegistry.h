/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
 */

@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray * _destinations;
}

@property (nonatomic, retain) NSMutableArray *destinations;

- (void).cxx_destruct;
- (void)addDestination:(id)arg1;
- (id)destinations;
- (id)init;
- (void)parseDestinationsFromConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (id)readConfiguration:(id)arg1;
- (void)sendToAllDestinations:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setupWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2;

@end