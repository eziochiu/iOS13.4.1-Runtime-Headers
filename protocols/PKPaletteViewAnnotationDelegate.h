/* Generated by EzioChiu.
 */

@protocol PKPaletteViewAnnotationDelegate <PKPalettePopoverDismissing, PKPaletteViewPositionObserving>

@required

- (void)paletteViewDidSelectOpacityOption:(PKPaletteView *)arg1;
- (void)paletteViewDidSelectPlusButton:(PKPaletteView *)arg1;
- (UIColor *)paletteViewSelectedAnnotationColor:(PKPaletteView *)arg1;

@end