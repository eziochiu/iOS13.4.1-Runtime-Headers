/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPRMListItem : NSObject {
    unsigned long long  _count;
    struct CGPDFNode {} ** _paragraphs;
    unsigned long long  _pos;
}

@property (readonly) struct CGPDFPage { }*page;
@property (readonly) struct CGPDFNode {}**paragraphNodes;

- (void)addParagraph:(struct CGPDFNode { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1;
- (struct CGPDFPage { }*)page;
- (struct CGPDFNode {}**)paragraphNodes;

@end
