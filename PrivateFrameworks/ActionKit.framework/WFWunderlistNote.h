/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFWunderlistNote : MTLModel <MTLJSONSerializing> {
    NSString * _content;
    NSDate * _createdAt;
    long long  _noteId;
    long long  _revision;
    long long  _taskId;
    NSDate * _updatedAt;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) NSDate *createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long noteId;
@property (nonatomic, readonly) long long revision;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long taskId;
@property (nonatomic, readonly) NSDate *updatedAt;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)createdAtJSONTransformer;
+ (id)updatedAtJSONTransformer;

- (void).cxx_destruct;
- (id)content;
- (id)createdAt;
- (long long)noteId;
- (long long)revision;
- (long long)taskId;
- (id)updatedAt;

@end