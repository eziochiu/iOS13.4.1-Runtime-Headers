/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFVariableFieldComponent : CKStatefulViewComponent {
    bool  _editable;
    NSString * _text;
    id /* block */  _updateBlock;
}

@property (nonatomic, readonly) bool editable;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) id /* block */ updateBlock;

+ (id)newWithText:(id)arg1 editable:(bool)arg2 updateBlock:(id /* block */)arg3 size:(const struct CKComponentSize { struct CKRelativeDimension { int x_1_1_1; double x_1_1_2; } x1; struct CKRelativeDimension { int x_2_1_1; double x_2_1_2; } x2; struct CKRelativeDimension { int x_3_1_1; double x_3_1_2; } x3; struct CKRelativeDimension { int x_4_1_1; double x_4_1_2; } x4; struct CKRelativeDimension { int x_5_1_1; double x_5_1_2; } x5; struct CKRelativeDimension { int x_6_1_1; double x_6_1_2; } x6; }*)arg4;

- (void).cxx_destruct;
- (bool)editable;
- (id)text;
- (id /* block */)updateBlock;

@end
