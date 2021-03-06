/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RevealCore.framework/RevealCore
 */

@interface RVItem : NSObject <NSSecureCoding> {
    id  _clientHints;
    NSString * _clientIdentifier;
    long long  _contactPropertyType;
    NSString * _contactPropertyValue;
    DDScannerResult * _ddResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _highlightRange;
    NSString * _leadingText;
    bool  _normalized;
    long long  _normalizedType;
    long long  _selectionType;
    NSString * _text;
    NSString * _trailingText;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, retain) id clientHints;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) long long contactPropertyType;
@property (nonatomic, readonly) NSString *contactPropertyValue;
@property (nonatomic, readonly) DDScannerResult *ddResult;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } highlightRange;
@property (nonatomic, retain) NSString *leadingText;
@property (nonatomic, readonly) long long normalizedType;
@property (nonatomic, readonly) NSURL *normalizedURL;
@property (nonatomic, readonly) long long selectionType;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *textSearchContext;
@property (nonatomic, retain) NSString *trailingText;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientHints;
- (id)clientIdentifier;
- (void)commonInitWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 customURLParser:(id /* block */)arg3 lookup:(bool)arg4;
- (id)constrainContextSubstring:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 leading:(bool)arg3;
- (long long)contactPropertyType;
- (id)contactPropertyValue;
- (id)ddResult;
- (void)encodeWithCoder:(id)arg1;
- (id)getClientHintKey:(id)arg1 ofType:(Class)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })highlightRange;
- (id)initEmpty;
- (id)initWithClientIdentifier:(id)arg1 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactProperty:(long long)arg1 value:(id)arg2 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)initWithDDResult:(id)arg1;
- (id)initWithText:(id)arg1 clickedIndex:(unsigned long long)arg2 selectionRanges:(id)arg3 shouldUpdateSelection:(bool*)arg4;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 customURLParser:(id /* block */)arg3;
- (id)initWithURL:(id)arg1 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)leadingText;
- (void)normalize;
- (void)normalizeWithParser:(id /* block */)arg1 lookupOnly:(bool)arg2;
- (long long)normalizedType;
- (id)normalizedURL;
- (long long)selectionType;
- (void)setClientHints:(id)arg1;
- (void)setLeadingText:(id)arg1;
- (void)setTrailingText:(id)arg1;
- (id)text;
- (id)textSearchContext;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textSearchRange;
- (id)trailingText;
- (long long)type;
- (id)url;

@end
