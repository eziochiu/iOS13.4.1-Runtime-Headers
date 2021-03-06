/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface _PKFlatColorPickerButton : _PKInkColorButton {
    _PKHueSpectrumView * _hueSpectrumView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastRenderedBounds;
    CAShapeLayer * _selectedColorLayer;
    CAShapeLayer * _strokeShapeLayer;
}

@property (nonatomic, retain) _PKHueSpectrumView *hueSpectrumView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastRenderedBounds;
@property (nonatomic, retain) CAShapeLayer *selectedColorLayer;
@property (nonatomic, retain) CAShapeLayer *strokeShapeLayer;

- (void).cxx_destruct;
- (id)hueSpectrumView;
- (id)initWithColor:(id)arg1 isCompact:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastRenderedBounds;
- (void)layoutSubviews;
- (id)selectedColorLayer;
- (void)setHueSpectrumView:(id)arg1;
- (void)setLastRenderedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectedColorLayer:(id)arg1;
- (void)setStrokeShapeLayer:(id)arg1;
- (id)strokeShapeLayer;

@end
