/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface VRFWitness : GPBMessage <TransparencyVerifiable>

@property (retain) NSData *message;
@property (nonatomic, copy) NSData *output;
@property (nonatomic, copy) NSData *proof;
@property (retain) NSData *salt;
@property (nonatomic) int type;
@property (retain) TransparencyVRFVerifier *verifier;

+ (id)descriptor;

- (id)message;
- (id)salt;
- (void)setMessage:(id)arg1;
- (void)setSalt:(id)arg1;
- (void)setVerifier:(id)arg1;
- (id)verifier;
- (bool)verifyWithError:(id*)arg1;

@end