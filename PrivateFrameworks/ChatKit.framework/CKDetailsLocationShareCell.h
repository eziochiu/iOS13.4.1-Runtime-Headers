/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsLocationShareCell : CKDetailsCell <CKDetailsCell> {
    double  _offerTimeRemaining;
    bool  _showOfferTimeRemaining;
    UILabel * _timeRemainingLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double offerTimeRemaining;
@property (nonatomic) bool showOfferTimeRemaining;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *timeRemainingLabel;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)offerTimeRemaining;
- (void)prepareForReuse;
- (void)setOfferTimeRemaining:(double)arg1;
- (void)setShowOfferTimeRemaining:(bool)arg1;
- (void)setTimeRemainingLabel:(id)arg1;
- (bool)showOfferTimeRemaining;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)timeRemainingLabel;
- (id)timeStringForTimeInterval:(double)arg1;

@end
