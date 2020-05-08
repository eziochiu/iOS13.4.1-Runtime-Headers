/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSShareProtectionObject : NSObject {
    struct _PCSIdentityData { } * _identity;
    struct _OpaquePCSShareProtection { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct _PCSIdentitySetData {} *x2; struct _PCSIdentitySetData {} *x3; struct _PCSIdentitySetData {} *x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; struct __CFData {} *x7; struct __CFData {} *x8; struct __CFData {} *x9; struct _PCSKeyData {} *x10; struct __CFData {} *x11; struct _PCSKeyData {} *x12; struct __CFDictionary {} *x13; unsigned int x14; unsigned int x15; struct PCSAttributes { unsigned int x_16_1_1; struct PCSTypeValue {} *x_16_1_2; } x16; struct _PCSPublicIdentityData {} *x17; struct _PCSPublicIdentityData {} *x18; struct _PCSPublicIdentityData {} *x19; struct _PCSPublicIdentityData {} *x20; struct _PCSIdentityData {} *x21; struct _PCSIdentityData {} *x22; int x23; struct { bool x_24_1_1; bool x_24_1_2; bool x_24_1_3; bool x_24_1_4; bool x_24_1_5; bool x_24_1_6; bool x_24_1_7; } x24; unsigned int x25; } * _shareProtection;
}

@property (nonatomic, readonly) struct _OpaquePCSShareProtection { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct _PCSIdentitySetData {} *x2; struct _PCSIdentitySetData {} *x3; struct _PCSIdentitySetData {} *x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; struct __CFData {} *x7; struct __CFData {} *x8; struct __CFData {} *x9; struct _PCSKeyData {} *x10; struct __CFData {} *x11; struct _PCSKeyData {} *x12; struct __CFDictionary {} *x13; unsigned int x14; unsigned int x15; struct PCSAttributes { unsigned int x_16_1_1; struct PCSTypeValue {} *x_16_1_2; } x16; struct _PCSPublicIdentityData {} *x17; struct _PCSPublicIdentityData {} *x18; struct _PCSPublicIdentityData {} *x19; struct _PCSPublicIdentityData {} *x20; struct _PCSIdentityData {} *x21; struct _PCSIdentityData {} *x22; int x23; struct { bool x_24_1_1; bool x_24_1_2; bool x_24_1_3; bool x_24_1_4; bool x_24_1_5; bool x_24_1_6; bool x_24_1_7; } x24; unsigned int x25; }*shareProtection;

- (void)dealloc;
- (id)exportAcceptedSharingRequestWithError:(id*)arg1;
- (id)initWithShareProtectionRef:(struct _OpaquePCSShareProtection { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct _PCSIdentitySetData {} *x2; struct _PCSIdentitySetData {} *x3; struct _PCSIdentitySetData {} *x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; struct __CFData {} *x7; struct __CFData {} *x8; struct __CFData {} *x9; struct _PCSKeyData {} *x10; struct __CFData {} *x11; struct _PCSKeyData {} *x12; struct __CFDictionary {} *x13; unsigned int x14; unsigned int x15; struct PCSAttributes { unsigned int x_16_1_1; struct PCSTypeValue {} *x_16_1_2; } x16; struct _PCSPublicIdentityData {} *x17; struct _PCSPublicIdentityData {} *x18; struct _PCSPublicIdentityData {} *x19; struct _PCSPublicIdentityData {} *x20; struct _PCSIdentityData {} *x21; struct _PCSIdentityData {} *x22; int x23; struct { bool x_24_1_1; bool x_24_1_2; bool x_24_1_3; bool x_24_1_4; bool x_24_1_5; bool x_24_1_6; bool x_24_1_7; } x24; unsigned int x25; }*)arg1;
- (id)initWithSharingRequestData:(id)arg1 identitySet:(struct _PCSIdentitySetData { }*)arg2 error:(id*)arg3;
- (struct _OpaquePCSShareProtection { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct _PCSIdentitySetData {} *x2; struct _PCSIdentitySetData {} *x3; struct _PCSIdentitySetData {} *x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; struct __CFData {} *x7; struct __CFData {} *x8; struct __CFData {} *x9; struct _PCSKeyData {} *x10; struct __CFData {} *x11; struct _PCSKeyData {} *x12; struct __CFDictionary {} *x13; unsigned int x14; unsigned int x15; struct PCSAttributes { unsigned int x_16_1_1; struct PCSTypeValue {} *x_16_1_2; } x16; struct _PCSPublicIdentityData {} *x17; struct _PCSPublicIdentityData {} *x18; struct _PCSPublicIdentityData {} *x19; struct _PCSPublicIdentityData {} *x20; struct _PCSIdentityData {} *x21; struct _PCSIdentityData {} *x22; int x23; struct { bool x_24_1_1; bool x_24_1_2; bool x_24_1_3; bool x_24_1_4; bool x_24_1_5; bool x_24_1_6; bool x_24_1_7; } x24; unsigned int x25; }*)shareProtection;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData { }*)arg1 error:(id*)arg2;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData { }*)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData { }*)arg1 owner:(void*)arg2 flags:(unsigned int)arg3 error:(id*)arg4;

@end