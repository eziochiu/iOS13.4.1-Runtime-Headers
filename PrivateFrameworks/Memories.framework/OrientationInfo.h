/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface OrientationInfo : NSObject <AltAspect> {
    double  _altAspect;
    unsigned int  _inputID;
    bool  _isRotated;
}

@property (nonatomic) double altAspect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int inputID;
@property (nonatomic) bool isRotated;
@property (readonly) Class superclass;

- (double)altAspect;
- (id)description;
- (unsigned int)inputID;
- (bool)isRotated;
- (void)setAltAspect:(double)arg1;
- (void)setInputID:(unsigned int)arg1;
- (void)setIsRotated:(bool)arg1;

@end