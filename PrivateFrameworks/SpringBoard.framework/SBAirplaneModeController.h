/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAirplaneModeController : NSObject <RadiosPreferencesDelegate> {
    bool  _cachedInAirplaneMode;
    <SBAirplaneModeDelegate> * _delegate;
    RadiosPreferences * _radioPrefs;
}

@property (nonatomic) <SBAirplaneModeDelegate> *delegate;
@property (getter=isInAirplaneMode, nonatomic) bool inAirplaneMode;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (id)delegate;
- (id)init;
- (bool)isInAirplaneMode;
- (void)setDelegate:(id)arg1;
- (void)setInAirplaneMode:(bool)arg1;

@end
