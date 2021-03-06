/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBInjectVelocitySwitcherModifierAction : SBSwitcherModifierAction {
    SBAppLayout * _appLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } velocity;

- (void).cxx_destruct;
- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithVelocity:(struct CGPoint { double x1; double x2; })arg1 appLayout:(id)arg2;
- (long long)type;
- (struct CGPoint { double x1; double x2; })velocity;

@end
