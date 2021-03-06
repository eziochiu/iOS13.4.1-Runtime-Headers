/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject <MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate> {
    CLVisit * _currentVisit;
    double  _distanceBuffer;
    CLLocation * _latestLocation;
    MapsSuggestionsObservers * _locationObservers;
    struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue> > { 
        struct __compressed_pair<MSg::Queue *, std::__1::default_delete<MSg::Queue> > { 
            struct Queue {} *__value_; 
        } __ptr_; 
    }  _queue;
    MapsSuggestionsObservers * _visitObservers;
    <MapsSuggestionsLocationUpdater> * _wrappedLocationUpdater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)_isDefinitelyOutsideOfVisit:(id)arg1 location:(id)arg2 allowingBuffer:(double)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initDecoratingLocationUpdater:(id)arg1;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)uniqueName;
- (void)updateLocation:(id)arg1;
- (void)visitEntered:(id)arg1;
- (void)visitLeft:(id)arg1;

@end
