/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupingResult : NSObject <NSCopying> {
    NSSet * _createdStrokeGroups;
    NSSet * _deletedStrokeGroups;
    NSSet * _strokeGroups;
    NSArray * _strokeGroupsSortedByWritingOrientation;
    NSArray * _strokeGroupsSortedTopBottomLeftRight;
    NSSet * _textStrokeGroups;
    NSArray * _textStrokeGroupsSortedByWritingOrientation;
}

@property (nonatomic, readonly, copy) NSSet *createdStrokeGroups;
@property (nonatomic, readonly, copy) NSSet *deletedStrokeGroups;
@property (nonatomic, readonly, copy) NSSet *strokeGroups;
@property (nonatomic, readonly, copy) NSArray *strokeGroupsSortedByWritingOrientation;
@property (nonatomic, readonly, copy) NSSet *textStrokeGroups;
@property (nonatomic, readonly, copy) NSArray *textStrokeGroupsSortedByWritingOrientation;
@property (nonatomic, readonly, copy) NSArray *textStrokeGroupsSortedTopBottomLeftRight;

- (id)_sortedStrokeGroupsByWritingOrientationTextOnly:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdStrokeGroups;
- (void)dealloc;
- (id)deletedStrokeGroups;
- (id)description;
- (id)init;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3;
- (id)strokeGroups;
- (id)strokeGroupsSortedByWritingOrientation;
- (id)textStrokeGroups;
- (id)textStrokeGroupsSortedByWritingOrientation;
- (id)textStrokeGroupsSortedTopBottomLeftRight;

@end
