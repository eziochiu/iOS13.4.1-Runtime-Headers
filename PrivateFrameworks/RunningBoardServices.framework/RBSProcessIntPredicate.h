/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSProcessIntPredicate : RBSProcessPredicateImpl {
    unsigned long long  _identifier;
}

@property (nonatomic, readonly) unsigned long long identifier;

+ (bool)supportsBSXPCSecureCoding;

- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;

@end