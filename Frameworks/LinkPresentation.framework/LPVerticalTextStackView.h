/* Generated by EzioChiu
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVerticalTextStackView : LPComponentView <LPContentInsettable> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    bool  _hasEverBuilt;
    NSMutableArray * _items;
    LPVerticalTextStackViewStyle * _style;
}

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutTextStackForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (void)addArrangedSubview:(id)arg1;
- (id)init;
- (id)initWithStyle:(id)arg1;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end