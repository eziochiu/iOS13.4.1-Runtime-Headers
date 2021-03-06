/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSBluetoothDeviceInfo : NSObject {
    NSString * _address;
    bool  _isTemporaryPairedNotInContacts;
    bool  _supportDoAP;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic) bool isTemporaryPairedNotInContacts;
@property (nonatomic) bool supportDoAP;

- (void).cxx_destruct;
- (id)address;
- (bool)isTemporaryPairedNotInContacts;
- (void)setAddress:(id)arg1;
- (void)setIsTemporaryPairedNotInContacts:(bool)arg1;
- (void)setSupportDoAP:(bool)arg1;
- (bool)supportDoAP;

@end
