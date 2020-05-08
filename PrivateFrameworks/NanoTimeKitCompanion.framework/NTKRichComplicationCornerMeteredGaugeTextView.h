/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationCornerMeteredGaugeTextView : NTKRichComplicationCornerGaugeTextView {
    NTKRichComplicationImageView * _outerImageView;
}

@property (nonatomic, readonly) NTKRichComplicationImageView *outerImageView;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (long long)progressFillStyle;

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)init;
- (void)layoutSubviews;
- (id)outerImageView;

@end