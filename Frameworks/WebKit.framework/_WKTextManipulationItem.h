/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKTextManipulationItem : NSObject {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _identifier;
    struct RetainPtr<NSArray<_WKTextManipulationToken *> > { 
        void *m_ptr; 
    }  _tokens;
}

@property (nonatomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *tokens;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_descriptionPreservingPrivacy:(bool)arg1;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 tokens:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextManipulationItem:(id)arg1 includingContentEquality:(bool)arg2;
- (id)tokens;

@end