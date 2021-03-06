/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMultiplayerBubbleView : UIView {
    UIButton * _playButton;
    UIButton * _shareButton;
}

@property (nonatomic) UIButton *playButton;
@property (nonatomic) UIButton *shareButton;

- (void)awakeFromNib;
- (void)floatInBubbles;
- (id)playButton;
- (void)removeAllAnimationsFromBubbles;
- (void)scatterOutBubblesWithCompletion:(id /* block */)arg1;
- (void)setBubblesHidden:(bool)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setShareButton:(id)arg1;
- (id)shareButton;

@end
