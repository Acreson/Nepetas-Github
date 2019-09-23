/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBFolder.h"

#import "SBIconIndexNodeObserver-Protocol.h"

@class SBDockIconListModel;

@interface SBRootFolder : SBFolder <SBIconIndexNodeObserver>
{
    SBDockIconListModel *_dock;
}

- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(id)arg3;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned int)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (void)placeIconsOnFirstPage:(id)arg1;
- (id)representation;
- (BOOL)resetWithRepresentation:(id)arg1 model:(id)arg2 leafIdentifiersAdded:(id)arg3;
- (id)_listsForCompaction;
- (BOOL)canEditDisplayName;
- (BOOL)canRemoveIcons;
- (id)folderType;
- (id)iconsOfClass:(Class)arg1;
- (void)markIconStateClean;
- (BOOL)isIconStateDirty;
- (void)removeEmptyList:(id)arg1;
- (id)listContainingLeafIconWithIdentifier:(id)arg1;
- (id)listContainingIcon:(id)arg1;
- (unsigned int)indexOfList:(id)arg1;
- (id)listAtIndex:(unsigned int)arg1;
- (id)dockModel;
- (void)dealloc;
- (id)init;
- (Class)controllerClass;
- (Class)listViewClass;
- (Class)listModelClass;

@end

