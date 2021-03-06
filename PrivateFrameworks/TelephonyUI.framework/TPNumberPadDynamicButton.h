/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPadDynamicButton : TPNumberPadButton

+ (long long)currentStyle;
+ (double)highlightedCircleViewAlpha;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(bool)arg2;
+ (double)unhighlightedCircleViewAlpha;
+ (bool)usesTelephonyGlyphsWhereAvailable;

- (id)buttonColor;
- (id)initForCharacter:(unsigned int)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCurrentStyleIfNecessaryFromStyle:(long long)arg1;

@end
