/* Generated by EzioChiu.
 */

@protocol MKMuninGestureControllerDelegate <NSObject>

@required

- (void)muninGestureController:(MKMuninGestureController *)arg1 didTapAtPoint:(struct CGPoint { double x1; double x2; })arg2 areaAvailable:(bool)arg3;
- (void)muninGestureController:(MKMuninGestureController *)arg1 didTapLabelMarker:(VKLabelMarker *)arg2;
- (void)muninGestureController:(MKMuninGestureController *)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3;
- (void)muninGestureControllerDidPan:(MKMuninGestureController *)arg1;
- (void)muninGestureControllerDidStartUserInteraction:(MKMuninGestureController *)arg1;
- (void)muninGestureControllerDidStopUserInteraction:(MKMuninGestureController *)arg1;

@end