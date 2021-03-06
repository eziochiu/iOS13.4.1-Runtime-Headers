/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPaletteMoreOptionsViewController : UIViewController {
    bool  _autoHideOn;
    PKPaletteAutoMinimizeOptionCell * _autoMinimizeCell;
    <PKPaletteMoreOptionsViewControllerDelegate> * _delegate;
    UITraitCollection * _externalTraitCollection;
    UIStackView * _stackView;
    NSLayoutConstraint * _stackViewMinWidthConstraint;
    NSArray * _stackViewPositioningConstraints;
}

@property (getter=isAutoHideOn, nonatomic) bool autoHideOn;
@property (nonatomic, retain) PKPaletteAutoMinimizeOptionCell *autoMinimizeCell;
@property (nonatomic) <PKPaletteMoreOptionsViewControllerDelegate> *delegate;
@property (nonatomic, retain) UITraitCollection *externalTraitCollection;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) NSLayoutConstraint *stackViewMinWidthConstraint;
@property (nonatomic, retain) NSArray *stackViewPositioningConstraints;

- (void).cxx_destruct;
- (void)_autoMinimizeCellDidChangeValue:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_reloadItems;
- (void)_updateAutoMinimizeCell;
- (void)_updateContentSize;
- (id)autoMinimizeCell;
- (id)delegate;
- (id)externalTraitCollection;
- (bool)isAutoHideOn;
- (void)setAutoHideOn:(bool)arg1;
- (void)setAutoMinimizeCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternalTraitCollection:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setStackViewMinWidthConstraint:(id)arg1;
- (void)setStackViewPositioningConstraints:(id)arg1;
- (id)stackView;
- (id)stackViewMinWidthConstraint;
- (id)stackViewPositioningConstraints;
- (void)updateUIForTraitCollection:(id)arg1;
- (void)viewDidLoad;

@end
