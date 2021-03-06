/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFSQLExpressionGenerator : NSObject {
    NSArray * _additionalSelectColumns;
    NSString * _alias;
    bool  _includeSourceColumn;
    EFSQLExpressionGenerator * _previousExpressionGenerator;
    EFSQLGeneratorTableRelationship * _tableRelationship;
    NSArray * _whereExpression;
}

@property (nonatomic, readonly) NSArray *additionalSelectColumns;
@property (nonatomic, copy) NSString *alias;
@property (nonatomic) bool includeSourceColumn;
@property (nonatomic, readonly) EFSQLExpressionGenerator *previousExpressionGenerator;
@property (nonatomic, readonly) EFSQLGeneratorTableRelationship *tableRelationship;
@property (nonatomic, readonly) NSArray *whereExpression;

+ (id)tableFromPreviousTable:(id)arg1 propertyMapper:(id)arg2;

- (void).cxx_destruct;
- (id)additionalSelectColumns;
- (id)alias;
- (void)assignAliasWithMap:(id)arg1;
- (id)columnAlias;
- (unsigned long long)hash;
- (bool)includeSourceColumn;
- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3;
- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 additionalSelectColumns:(id)arg4 includeSourceColumn:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEFSQLExpressionGenerator:(id)arg1;
- (id)joinOnGenerator;
- (id)previousExpressionGenerator;
- (void)setAlias:(id)arg1;
- (void)setIncludeSourceColumn:(bool)arg1;
- (id)tableRelationship;
- (id)whereExpression;

@end
