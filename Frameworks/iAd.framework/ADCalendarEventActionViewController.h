/* Generated by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCalendarEventActionViewController : ADActionViewController <EKEventEditViewDelegate> {
    EKEvent * _calendarEvent;
    ADEventEditViewController * _eventKitEditViewController;
}

@property (nonatomic, retain) EKEvent *calendarEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ADEventEditViewController *eventKitEditViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calendarEvent;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;
- (void)dismiss;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)eventKitEditViewController;
- (void)setCalendarEvent:(id)arg1;
- (void)setEventKitEditViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
