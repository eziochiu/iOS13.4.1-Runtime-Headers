/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelExternalIconElement : NSObject <NSSecureCoding> {
    struct LabelExternalIconElement { 
        struct Matrix<float, 2, 1> { 
            float _e[2]; 
        } size; 
        struct Matrix<float, 2, 1> { 
            float _e[2]; 
        } anchorPoint; 
        bool isRound; 
        unsigned char minZoom; 
    }  _element;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (const struct LabelExternalIconElement { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; bool x3; unsigned char x4; }*)element;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIconElement:(const struct LabelExternalIconElement { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; bool x3; unsigned char x4; }*)arg1;

@end
