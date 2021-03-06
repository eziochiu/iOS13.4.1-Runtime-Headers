/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface _FBKVOInfo : NSObject {
    SEL  _action;
    id /* block */  _block;
    void * _context;
    FBKVOController * _controller;
    NSString * _keyPath;
    unsigned long long  _options;
    unsigned char  _state;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithController:(id)arg1 keyPath:(id)arg2;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4 action:(SEL)arg5 context:(void*)arg6;
- (id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (bool)isEqual:(id)arg1;

@end
