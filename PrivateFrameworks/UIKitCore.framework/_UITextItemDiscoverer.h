/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextItemDiscoverer : NSObject <_UITextItemDiscoverable> {
    UIView<_UITextContent> * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <UICoordinateSpace> *textItemCoordinateSpace;
@property (nonatomic, readonly) UIView<_UITextContent> *view;

- (void).cxx_destruct;
- (id)_anyTextItemConstrainedToLineAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsrangeForTextRange:(id)arg1;
- (id)_textReferenceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;
- (bool)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)initWithView:(id)arg1;
- (id)textItemCoordinateSpace;
- (id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)view;
- (id)visibleTextRange;

@end
