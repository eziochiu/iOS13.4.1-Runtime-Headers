/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest> {
    GEODataConditionalConnectionProperties * _connectionProperties;
    GEOETATrafficUpdateRequest * _request;
}

@property (nonatomic, retain) GEODataConditionalConnectionProperties *connectionProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOETATrafficUpdateRequest *request;
@property (readonly) Class superclass;

+ (Class)replyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connectionProperties;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectsReply;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (id)request;
- (void)setConnectionProperties:(id)arg1;
- (void)setRequest:(id)arg1;

@end
