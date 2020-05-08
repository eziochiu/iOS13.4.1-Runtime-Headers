/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLOrderByExpressionGenerator : NSObject {
    bool  _ascending;
    NSArray * _generators;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) NSArray *generators;

- (void).cxx_destruct;
- (bool)ascending;
- (id)generators;
- (unsigned long long)hash;
- (id)initWithGenerators:(id)arg1 ascending:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEFSQLOrderByExpressionGenerator:(id)arg1;
- (id)orderByExpression;

@end