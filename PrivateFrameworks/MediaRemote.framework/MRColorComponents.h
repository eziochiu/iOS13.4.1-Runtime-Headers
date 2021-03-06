/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRColorComponents : NSObject {
    float  _alpha;
    float  _blue;
    float  _green;
    float  _red;
}

@property (nonatomic, readonly) float alpha;
@property (nonatomic, readonly) float blue;
@property (nonatomic, readonly) float green;
@property (nonatomic, readonly) _MRColorProtobuf *protobuf;
@property (nonatomic, readonly) float red;

- (float)alpha;
- (float)blue;
- (id)description;
- (float)green;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (float)red;

@end
