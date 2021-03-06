/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLToolbarButtonItemRepresentation : UIBarButtonItem {
    bool  _disappearsOnTap;
    NSString * _identifier;
    QLToolbarButton * _originalButton;
    unsigned long long  _placement;
    QLPreviewController * _presentingViewController;
}

@property bool disappearsOnTap;
@property (retain) NSString *identifier;
@property QLToolbarButton *originalButton;
@property unsigned long long placement;
@property QLPreviewController *presentingViewController;

- (void).cxx_destruct;
- (bool)disappearsOnTap;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)originalButton;
- (unsigned long long)placement;
- (id)presentingViewController;
- (void)setDisappearsOnTap:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOriginalButton:(id)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
