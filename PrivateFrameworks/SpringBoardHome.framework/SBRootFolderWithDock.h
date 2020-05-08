/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver> {
    SBIconListModel * _dock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(id /* block */)arg3;
- (void)_setDock:(id)arg1;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (id)containedNodeIdentifiers;
- (bool)containsNodeIdentifier:(id)arg1;
- (id)dock;
- (void)enumerateAllIconsWithBaseIndexPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)indexOfList:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 displayName:(id)arg2 maxListCount:(unsigned long long)arg3 maxIconCountInLists:(unsigned long long)arg4;
- (bool)isIconStateDirty;
- (bool)isValidPageIndex:(unsigned long long)arg1;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (id)listAtIndex:(unsigned long long)arg1;
- (void)listDidMoveNodes:(id)arg1;
- (id)listsContainingIcon:(id)arg1;
- (id)listsContainingLeafIconWithIdentifier:(id)arg1;
- (void)markIconStateClean;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (void)removeList:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)sort;
- (bool)supportsDock;

@end