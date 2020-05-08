/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICompactCardSectionView : SearchUICardSectionView {
    TLKStackView * _stackView;
    SearchUILabel * _subtitleLabel;
    SearchUILabel * _titleLabel;
}

@property (nonatomic, retain) TLKStackView *stackView;
@property (nonatomic, retain) SearchUILabel *subtitleLabel;
@property (nonatomic, retain) SearchUILabel *titleLabel;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)richTextForSearchUIText:(id)arg1 withMaxLines:(unsigned long long)arg2;
- (void)setStackView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (id)stackView;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateWithRowModel:(id)arg1;

@end