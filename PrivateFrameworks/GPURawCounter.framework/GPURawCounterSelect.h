/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GPURawCounter.framework/GPURawCounter
 */

@interface GPURawCounterSelect : NSObject {
    NSString * _name;
    unsigned int  _width;
}

@property (readonly, copy) NSString *name;
@property unsigned int width;

+ (id)selectWithName:(id)arg1;
+ (id)selectWithName:(id)arg1 width:(unsigned int)arg2;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 width:(unsigned int)arg2;
- (id)name;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;

@end