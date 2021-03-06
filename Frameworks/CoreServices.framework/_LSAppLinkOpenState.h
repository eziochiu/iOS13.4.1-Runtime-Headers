/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSXPCConnection * _XPCConnection;
    NSDictionary * _browserState;
    NSString * _bundleIdentifier;
    _LSOpenConfiguration * _openConfiguration;
}

@property (copy) NSURL *URL;
@property (retain) NSXPCConnection *XPCConnection;
@property (readonly) const struct { unsigned int x1[8]; }*auditToken;
@property (copy) NSDictionary *browserState;
@property (copy) NSString *bundleIdentifier;
@property (retain) _LSOpenConfiguration *openConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)XPCConnection;
- (const struct { unsigned int x1[8]; }*)auditToken;
- (id)browserState;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)openConfiguration;
- (void)setBrowserState:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setOpenConfiguration:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setXPCConnection:(id)arg1;

@end
