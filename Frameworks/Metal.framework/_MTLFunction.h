/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLFunction : _MTLObjectWithLabel <MTLFunctionSPI> {
    NSArray * _arguments;
    <MTLDevice> * _device;
    NSDictionary * _functionConstantDictionary;
    NSArray * _functionConstants;
    unsigned long long  _functionType;
    struct MTLLibraryData { int (**x1)(); int x2; id x3; id x4; } * _libraryData;
    NSString * _name;
    MTLType * _returnType;
    NSString * _unpackedFilePath;
    id  _vendorPrivate;
    NSArray * _vertexAttributes;
}

@property NSArray *arguments;
@property (readonly) unsigned long long bitCodeOffset;
@property (nonatomic) unsigned char bitcodeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (copy) NSString *filePath;
@property NSArray *functionConstants;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) NSObject<OS_dispatch_data> *functionInputs;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) struct MTLLibraryData { int (**x1)(); int x2; id x3; id x4; }*libraryData;
@property long long lineNumber;
@property (readonly) NSString *name;
@property (readonly) bool needsFunctionConstantValues;
@property (readonly) long long patchControlPointCount;
@property (readonly) unsigned long long patchType;
@property NSData *pluginData;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property MTLType *returnType;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) Class superclass;
@property (copy) NSString *unpackedFilePath;
@property (readonly) id vendorPrivate;
@property NSArray *vertexAttributes;

- (unsigned long long)bitCodeFileSize;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (id)bitcodeData;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionConstantsDictionary;
- (unsigned int)functionRef;
- (unsigned long long)functionType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData { int (**x1)(); int x2; id x3; id x4; }*)arg3 device:(id)arg4;
- (struct MTLLibraryData { int (**x1)(); int x2; id x3; id x4; }*)libraryData;
- (id)name;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
- (id)reflectionWithOptions:(unsigned long long)arg1;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setUnpackedFilePath:(id)arg1;
- (void)setVendorPrivate:(id)arg1;
- (id)unpackedFilePath;
- (id)vendorPrivate;

@end