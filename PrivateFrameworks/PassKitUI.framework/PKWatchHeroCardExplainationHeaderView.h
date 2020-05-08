/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKWatchHeroCardExplainationHeaderView : UIView {
    UIImageView * _cardImageView;
    bool  _isCompactWatch;
    bool  _useCompactLayout;
    UIImageView * _watchDeviceImageView;
    UIImageView * _watchWallpaperImageView;
}

@property (nonatomic, retain) UIImage *cardImage;
@property (nonatomic, readonly) UIImageView *cardImageView;
@property (nonatomic) bool useCompactLayout;

+ (bool)isCompactWatch;
+ (struct CGSize { double x1; double x2; })recommendedCardImageSize;
+ (struct CGSize { double x1; double x2; })wallpaperImageSize:(bool)arg1;
+ (struct CGSize { double x1; double x2; })watchDeviceImageSize;

- (void).cxx_destruct;
- (id)bridgeHeroImage;
- (id)bridgeWallpaperImage;
- (id)cardImage;
- (id)cardImageView;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (void)setCardImage:(id)arg1;
- (void)setUseCompactLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)useCompactLayout;
- (id)watchDeviceImage;

@end