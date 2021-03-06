/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMShortcutAction : HMAction {
    WFHomeWorkflow * _shortcut;
}

@property (readonly) WFHomeWorkflow *shortcut;

+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (bool)isSupportedForHome:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_serializeForAdd;
- (id)initWithCoder:(id)arg1;
- (id)initWithShortcut:(id)arg1;
- (bool)isValid;
- (bool)requiresDeviceUnlock;
- (id)shortcut;
- (unsigned long long)type;

@end
