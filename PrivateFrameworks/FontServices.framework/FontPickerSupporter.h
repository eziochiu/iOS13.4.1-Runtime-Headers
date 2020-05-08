/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
 */

@interface FontPickerSupporter : NSObject {
    NSXPCListenerEndpoint * _clientEndpoint;
    bool  _clientHasFontAccessEntitlement;
    NSXPCConnection * _connection;
}

@property (nonatomic, readonly, retain) NSXPCListenerEndpoint *clientEndpoint;
@property (nonatomic) bool clientHasFontAccessEntitlement;
@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)clientEndpoint;
- (bool)clientHasFontAccessEntitlement;
- (id)connection;
- (void)done;
- (id)initWithEndpoint:(id)arg1;
- (id)locallyActivatedFontFilePaths;
- (void)makeConnection;
- (void)setClientHasFontAccessEntitlement:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setup;

@end