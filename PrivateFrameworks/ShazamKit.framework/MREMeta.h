/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface MREMeta : NSObject {
    NSString * _artist;
    unsigned long long  _songId;
    NSString * _title;
    unsigned long long  _trackId;
}

@property (nonatomic, readonly, retain) NSString *artist;
@property (nonatomic, readonly) unsigned long long songId;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly) unsigned long long trackId;

- (id)artist;
- (void)dealloc;
- (id)initWithTrackId:(unsigned long long)arg1 songId:(unsigned long long)arg2 title:(id)arg3 artist:(id)arg4;
- (unsigned long long)songId;
- (id)title;
- (unsigned long long)trackId;

@end
