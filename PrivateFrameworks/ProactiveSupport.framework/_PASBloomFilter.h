/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASBloomFilter : NSObject {
    int (* _computeHashes;
    NSData * _data;
    int  _hashArrayLength;
    unsigned int  _numBits;
    int  _numHashFunctions;
}

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

+ (id)bloomFilterWithPathToFile:(id)arg1;

- (void).cxx_destruct;
- (id)_computeHashesWithSeed:(int)arg1 bytes:(const void*)arg2 length:(unsigned long long)arg3 reuse:(id)arg4;
- (id)combineHashesWithSeed:(int)arg1 hashA:(id)arg2 hashB:(id)arg3 reuse:(id)arg4;
- (id)computeHashesForString:(id)arg1 reuse:(id)arg2;
- (id)computeHashesWithSeed:(int)arg1 forData:(id)arg2 reuse:(id)arg3;
- (bool)getWithHashes:(id)arg1;
- (id)init;
- (id)initDummy;
- (id)initWithData:(id)arg1 numBits:(unsigned int)arg2 hashFunctionCode:(unsigned int)arg3 numHashFunctions:(int)arg4;
- (id)newHashesArray;
- (int)numHashes;

// Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService

+ (id)bloomFilterWithData:(id)arg1;

- (id)_bloomFilterStringWithJSONObj:(id)arg1;
- (id)initWithJSONObj:(id)arg1;

@end