/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFAggDLoggingBackend : NSObject <WFLoggingBackend> {
    NSObject<OS_os_log> * _log;
    NSArray * _prefixComponents;
    NSDictionary * _prefixKeyMapping;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)logEvent:(id)arg1 withProperties:(id)arg2;

@end
