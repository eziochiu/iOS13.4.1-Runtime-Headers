/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUICollectionHeaderViewLayout : TVViewLayout {
    TVImageLayout * _imageViewLayout;
    VUITextLayout * _subtitleTextLayout;
    VUITextLayout * _titleTextLayout;
}

@property (nonatomic, retain) TVImageLayout *imageViewLayout;
@property (nonatomic, readonly) VUITextLayout *subtitleTextLayout;
@property (nonatomic, readonly) VUITextLayout *titleTextLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (id)maxImageContentSizeCategory;

- (void).cxx_destruct;
- (id)imageViewLayout;
- (id)init;
- (void)setImageViewLayout:(id)arg1;
- (id)subtitleTextLayout;
- (id)titleTextLayout;

@end