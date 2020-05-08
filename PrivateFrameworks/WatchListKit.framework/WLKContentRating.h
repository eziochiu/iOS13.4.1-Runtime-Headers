/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKContentRating : NSObject {
    NSString * _contentRatingSystem;
    NSString * _displayName;
    NSString * _name;
    unsigned long long  _ratingValue;
}

@property (nonatomic, readonly, copy) NSString *contentRatingSystem;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long ratingValue;

- (void).cxx_destruct;
- (id)contentRatingSystem;
- (id)displayName;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)name;
- (unsigned long long)ratingValue;

@end