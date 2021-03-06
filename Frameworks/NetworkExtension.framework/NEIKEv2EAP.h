/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2EAP : NSObject {
    struct EAPClientModule_s { } * _module;
    struct EAPClientPluginData_s { 
        void *private; 
        bool log_enabled; 
        unsigned int log_level; 
        unsigned int mtu; 
        unsigned int generation; 
        void *unique_id; 
        unsigned int unique_id_length; 
        char *username; 
        unsigned int username_length; 
        struct __CFData {} *encryptedEAPIdentity; 
        char *password; 
        unsigned int password_length; 
        struct __CFDictionary {} *properties; 
        bool system_mode; 
        struct __SecIdentity {} *sec_identity; 
        void *reserved[6]; 
    }  _pluginData;
    NEIKEv2EAPProtocol * _protocol;
}

@property struct EAPClientModule_s { }*module;
@property (retain) NEIKEv2EAPProtocol *protocol;
@property (readonly) NSMutableData *sessionKey;

+ (unsigned int)codeForPayload:(id)arg1;
+ (struct EAPClientModule_s { }*)getAKAModule;
+ (struct EAPClientModule_s { }*)getGTCModule;
+ (struct EAPClientModule_s { }*)getMSCHAPv2Module;
+ (struct EAPClientModule_s { }*)getPEAPModule;
+ (struct EAPClientModule_s { }*)getSIMModule;
+ (struct EAPClientModule_s { }*)getTLSModule;
+ (struct EAPClientModule_s { }*)loadModuleForType:(unsigned int)arg1;
+ (unsigned int)typeForPayload:(id)arg1;

- (void).cxx_destruct;
- (id)copyProperties:(unsigned int)arg1;
- (id)createPayloadResponseForRequest:(id)arg1 ikeSA:(id)arg2 success:(bool*)arg3 reportEAPError:(bool*)arg4;
- (id)createPayloadResponseForRequest:(id)arg1 type:(unsigned int)arg2 typeData:(id)arg3 typeString:(id)arg4;
- (void)dealloc;
- (id)init;
- (struct EAPClientModule_s { }*)module;
- (id)protocol;
- (id)selectModuleForPayload:(id)arg1 ikeSA:(id)arg2;
- (id)sessionKey;
- (void)setModule:(struct EAPClientModule_s { }*)arg1;
- (void)setProtocol:(id)arg1;

@end
