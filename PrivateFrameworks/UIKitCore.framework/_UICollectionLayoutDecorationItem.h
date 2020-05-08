/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutDecorationItem : _UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting> {
    _UICollectionLayoutAnchor * _containerAnchor;
    NSString * _elementKind;
    bool  _isBackgroundDecoration;
    Class  _registrationViewClass;
    long long  _zIndex;
}

@property (setter=_setRegistrationViewClass:, nonatomic, retain) Class _registrationViewClass;
@property (nonatomic) long long zIndex;

+ (id)backgroundDecorationItemWithElementKind:(id)arg1;
+ (id)decorationItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;

- (void).cxx_destruct;
- (id)_apiRepresentation;
- (Class)_registrationViewClass;
- (void)_setRegistrationViewClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 zIndex:(long long)arg4 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg5 edgeSpacing:(id)arg6 name:(id)arg7 registrationViewClass:(Class)arg8 isBackgroundDecoration:(bool)arg9;
- (void)setZIndex:(long long)arg1;
- (long long)zIndex;

@end