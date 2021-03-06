/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface RLMSortDescriptor : NSObject {
    bool  _ascending;
    NSString * _keyPath;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) NSString *keyPath;

+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(bool)arg2;

- (void).cxx_destruct;
- (bool)ascending;
- (id)keyPath;
- (id)reversedSortDescriptor;

@end
