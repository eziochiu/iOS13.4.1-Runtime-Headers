/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPhotoPickerRecentsProvider : NSObject <CNPhotoPickerProvider> {
    CNContact * _contact;
    bool  _containsContactImage;
    bool  _containsMonogram;
    NSString * identifier;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic) bool containsContactImage;
@property (nonatomic) bool containsMonogram;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contact;
- (bool)containsContactImage;
- (bool)containsMonogram;
- (id)identifier;
- (id)initWithContact:(id)arg1;
- (id)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)providerItemForContactImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 RTL:(bool)arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6;
- (void)setContainsContactImage:(bool)arg1;
- (void)setContainsMonogram:(bool)arg1;
- (void)setIdentifier:(id)arg1;

@end