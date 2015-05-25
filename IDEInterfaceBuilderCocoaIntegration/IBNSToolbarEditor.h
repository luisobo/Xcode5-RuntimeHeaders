//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBEditor.h"

#import "IBNSToolbarConfigurationViewDelegate.h"
#import "IBNSToolbarItemsContainerViewDelegate.h"

@class NSString;

@interface IBNSToolbarEditor : IBEditor <IBNSToolbarConfigurationViewDelegate, IBNSToolbarItemsContainerViewDelegate>
{
}

+ (void)resetCursorRectsForObject:(id)arg1 inFrameController:(id)arg2;
+ (Class)ibDropTargetResolverClass;
- (void)drawSelectionHighlightForObject:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)hitTestEditorView:(struct CGPoint)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (void)syncItemsWithDocument;
- (id)draggedImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (id)caclulateDraggedImageStateForDraggingInfo:(id)arg1;
- (id)draggedImageStateForOrderedIdentifiedViews:(id)arg1 withName:(id)arg2;
- (id)draggedImageStateForOrderedIdentifiedToolbarItems:(id)arg1 withName:(id)arg2;
- (id)draggedImageStateForOrderedIdentifiedItemViews:(id)arg1 withName:(id)arg2;
- (void)selectionOwner:(id)arg1 willSelect:(id)arg2 andDeselect:(id)arg3;
- (void)setDecoratorNeedsDisplayForItem:(id)arg1;
- (void)didOpen;
- (void)toolbarItemsContainerView:(id)arg1 didFinishDragging:(unsigned long long)arg2;
- (void)toolbarConfigurationView:(id)arg1 doneButtonWasClicked:(id)arg2;
- (BOOL)isEditingStandaloneToolbar;
- (id)editedToolbar;
- (id)toolbarView;
- (id)allowedItemsView;
- (id)configurationView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

