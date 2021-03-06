/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFakeRoutineRequester : NSObject <MapsSuggestionsRoutineRequester> {
    bool  _breakCallbackPromise;
    unsigned long long  _calledAddLocationOfInterest;
    unsigned long long  _calledFetchLocationOfInterestWithIdentifier;
    unsigned long long  _calledFetchLocationsOfInterestOfType;
    unsigned long long  _calledFetchLocationsOfInterestVisitedSinceDate;
    unsigned long long  _calledFetchNextPLOIs;
    unsigned long long  _calledFetchRoutineModeFromLocation;
    unsigned long long  _calledStartMonitoringVehicleEvents;
    unsigned long long  _calledUpdateLocationOfInterest;
    NSMutableDictionary * _fakeData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (unsigned long long)calledAddLocationOfInterest;
- (unsigned long long)calledFetchLocationOfInterestWithIdentifier;
- (unsigned long long)calledFetchLocationsOfInterestOfType;
- (unsigned long long)calledFetchLocationsOfInterestVisitedSinceDate;
- (unsigned long long)calledFetchNextPLOIs;
- (unsigned long long)calledFetchRoutineModeFromLocation;
- (unsigned long long)calledStartMonitoringVehicleEvents;
- (unsigned long long)calledUpdateLocationOfInterest;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)arg1;
- (void)configureBrokenCallBackPromise:(bool)arg1;
- (void)configureError:(id)arg1;
- (void)configureLOI:(id)arg1 forIdentifier:(id)arg2;
- (void)configureLOIs:(id)arg1 forType:(long long)arg2;
- (void)configureLOIs:(id)arg1 sinceDate:(id)arg2;
- (bool)fetchLocationOfInterestWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (bool)fetchLocationsOfInterestOfType:(long long)arg1 handler:(id /* block */)arg2;
- (bool)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 handler:(id /* block */)arg2;
- (bool)fetchNextPLOIsFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 handler:(id /* block */)arg4;
- (bool)fetchRoutineModeFromLocation:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (bool)startMonitoringVehicleEventsWithHandler:(id /* block */)arg1;
- (void)stopMonitoringVehicleEvents;
- (id)uniqueName;

@end
