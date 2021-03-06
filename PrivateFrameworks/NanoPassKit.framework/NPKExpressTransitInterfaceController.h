/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKExpressTransitInterfaceController : NSObject <NPKExpressPassControllerDelegate, NPKTransitAppletHistoryFetcherDelegate> {
    NPKTransitAppletHistoryFetcher * _appletHistoryFetcher;
    <NPKExpressTransitInterfaceControllerDataSource> * _dataSource;
    <NPKExpressTransitInterfaceControllerDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _dismissalTimer;
    NPKExpressPassController * _expressPassController;
    PKPass * _expressTransitPass;
    PKPaymentApplication * _expressTransitPaymentApplication;
    PKTransitAppletState * _transactionStartAppletState;
}

@property (nonatomic, retain) NPKTransitAppletHistoryFetcher *appletHistoryFetcher;
@property (nonatomic) <NPKExpressTransitInterfaceControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKExpressTransitInterfaceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *dismissalTimer;
@property (nonatomic, readonly) NPKExpressPassController *expressPassController;
@property (nonatomic, retain) PKPass *expressTransitPass;
@property (nonatomic, retain) PKPaymentApplication *expressTransitPaymentApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKTransitAppletState *transactionStartAppletState;

- (void).cxx_destruct;
- (void)_dismissExpressTransitAlert;
- (id)_paymentApplicationFromPass:(id)arg1 applicationIdentifier:(id)arg2;
- (void)_scheduleDismissalOfExpressTransitAlertWithTimeout:(double)arg1;
- (void)_updateWithPass:(id)arg1 paymentApplicationIdentifier:(id)arg2;
- (id)appletHistoryFetcher;
- (bool)canHandleExpressEventsFromPass:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)dismissalTimer;
- (id)expressPassController;
- (void)expressPassController:(id)arg1 didCompleteTransactionForPass:(id)arg2;
- (void)expressPassController:(id)arg1 didFailTransactionForPass:(id)arg2;
- (void)expressPassController:(id)arg1 didStartTransactionForPass:(id)arg2 paymentApplicationIdentifier:(id)arg3;
- (void)expressPassController:(id)arg1 didUpdateExpressPasses:(id)arg2 expressPassesInformation:(id)arg3;
- (id)expressTransitPass;
- (id)expressTransitPaymentApplication;
- (id)init;
- (void)setAppletHistoryFetcher:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissalTimer:(id)arg1;
- (void)setExpressTransitPass:(id)arg1;
- (void)setExpressTransitPaymentApplication:(id)arg1;
- (void)setTransactionStartAppletState:(id)arg1;
- (id)transactionStartAppletState;
- (void)transitAppletHistoryFetcher:(id)arg1 gotTransitAppletHistory:(id)arg2 forAppletWithAID:(id)arg3;

@end
