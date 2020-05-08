/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCLocalAreasMapping : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _areas;
    NSData * _data;
    NSDictionary * _regionMap;
}

@property (nonatomic, retain) NSArray *areas;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSDictionary *regionMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)areas;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)regionMap;
- (id)regionsForLocation:(id)arg1;
- (void)setAreas:(id)arg1;
- (void)setData:(id)arg1;
- (void)setRegionMap:(id)arg1;

@end