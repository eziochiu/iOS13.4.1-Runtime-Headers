/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBUnlockedAlertItemPresenter : NSObject <SBAlertItemPresenter> {
    SBSharedModalAlertItemPresenter * _modalAlertPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canPresentMultipleAlertItemsSimultaneously;
- (void)dismissAlertItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)initWithSharedModalAlertItemPresenter:(id)arg1;
- (void)presentAlertItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)presentsAlertItemsModally;

@end