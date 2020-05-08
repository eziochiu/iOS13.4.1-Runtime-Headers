/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKColorMatrixView : UIView {
    struct RetainPtr<NSArray<NSArray<WKColorButton *> *> > { 
        void *m_ptr; 
    }  _colorButtons;
    struct RetainPtr<NSArray<NSArray<UIColor *> *> > { 
        void *m_ptr; 
    }  _colorMatrix;
    <WKColorMatrixViewDelegate> * _delegate;
}

@property (nonatomic) <WKColorMatrixViewDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)colorButtonTapped:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 colorMatrix:(id)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;

@end