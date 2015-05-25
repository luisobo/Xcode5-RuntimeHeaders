//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

#import "IBSelectionOwnerDelegate.h"
#import "IBStructureAreaDockItemViewDelegate.h"

@class IBDockObjectAndGroupPair, IBSelectionOwner, IBStructureAreaDockLabelContainer, NSArray, NSBezierPath, NSDictionary, NSImage, NSMutableDictionary, NSString, NSValue;

@interface IBStructureAreaDockView : DVTLayoutView_ML <IBSelectionOwnerDelegate, IBStructureAreaDockItemViewDelegate>
{
    NSDictionary *targetIdentifiedRepresentedObjects;
    IBStructureAreaDockLabelContainer *labelPopUpContainer;
    NSArray *allGroups;
    NSArray *visibleGroups;
    id mouseObserverToken;
    IBSelectionOwner *highlightOwner;
    IBSelectionOwner *selectionOwner;
    NSMutableDictionary *stackViews;
    NSMutableDictionary *clipViews;
    NSMutableDictionary *objectsPerGroup;
    NSMutableDictionary *scrollPositionsPerGroup;
    NSMutableDictionary *mininumVisibleTilesPerGroup;
    NSMutableDictionary *viewsPerGroupAndRepresentedObject;
    NSMutableDictionary *overflowIndicatorItemViewsPerGroup;
    NSValue *tileSize;
    IBDockObjectAndGroupPair *rolledOverObjectAndGroupPair;
    IBDockObjectAndGroupPair *insertionIndicatorPair;
    NSBezierPath *insertionIndicatorPath;
    BOOL validData;
    struct CGSize itemImageSize;
    NSArray *groupDividerRects;
    BOOL drawsWithActiveLook;
    NSImage *overflowItemChevronImage;
    int layoutDirection;
    unsigned long long labelArrowEdge;
    BOOL drawsGroupDividers;
    BOOL _sizesToFitFixedDimension;
    BOOL _drawsWithFlatStyle;
    id <IBStructureAreaDockViewDelegate> delegate;
}

@property(nonatomic) BOOL drawsWithFlatStyle; // @synthesize drawsWithFlatStyle=_drawsWithFlatStyle;
@property(nonatomic) BOOL sizesToFitFixedDimension; // @synthesize sizesToFitFixedDimension=_sizesToFitFixedDimension;
@property BOOL drawsGroupDividers; // @synthesize drawsGroupDividers;
@property(copy, nonatomic) NSDictionary *targetIdentifiedRepresentedObjects; // @synthesize targetIdentifiedRepresentedObjects;
@property(nonatomic) unsigned long long labelArrowEdge; // @synthesize labelArrowEdge;
@property(nonatomic) int layoutDirection; // @synthesize layoutDirection;
@property(retain, nonatomic) IBDockObjectAndGroupPair *insertionIndicatorPair; // @synthesize insertionIndicatorPair;
@property(retain, nonatomic) IBDockObjectAndGroupPair *rolledOverObjectAndGroupPair; // @synthesize rolledOverObjectAndGroupPair;
@property(retain) IBStructureAreaDockLabelContainer *labelPopUpContainer; // @synthesize labelPopUpContainer;
@property struct CGSize itemImageSize; // @synthesize itemImageSize;
@property(nonatomic) __weak id <IBStructureAreaDockViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)dividerShadow;
- (void)invalidateDisplayInRects:(id)arg1;
- (void)showOverflowMenuForGroup:(id)arg1 withEvent:(id)arg2;
- (void)selectGroupObjectPairFromMenu:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)trackRolledOverDockItemWithScreenPoint:(struct CGPoint)arg1;
- (void)selectObject:(id)arg1 inGroup:(id)arg2 withEvent:(id)arg3;
- (void)mouseDown:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)defaultInsertionTargetForDraggingInfo:(id)arg1;
- (id)dragImageStateForItems:(id)arg1 withName:(id)arg2 imageLocation:(struct CGPoint *)arg3;
- (id)dropImageStateForImages:(id)arg1 withIdentifiers:(id)arg2 andName:(id)arg3;
- (id)itemViewForDragImage;
- (id)draggedImageState:(id)arg1;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (void)didCompleteLayout;
- (void)layoutBottomUp;
- (double)initialGroupPosition;
- (void)layoutTopDown;
- (void)updateOverflowItemSelection;
- (void)updateOverflowItemOpenState;
- (id)overflowRepresentedObjectsForGroup:(id)arg1;
- (id)tileAllocationsPerGroup;
- (double)minimumWidth;
- (double)minimumHeight;
- (double)dockHeight;
- (double)dockWidth;
- (struct CGSize)tileSize;
- (id)representedObjectAndGroupAtPoint:(struct CGPoint)arg1;
- (id)unvalidatedDockItemViewAtPoint:(struct CGPoint)arg1 includeOverflowItem:(BOOL)arg2;
- (id)insertionIndicatorPathForIndicatorPair:(id)arg1;
- (BOOL)shouldShowLabelPopUpForObject:(id)arg1 inGroup:(id)arg2;
- (id)representedObjectsForGroup:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)invalidateData;
- (void)validateDataIfNeeded;
- (void)willStopUsingDockItemView:(id)arg1;
- (long long)effectiveMinimumTileCount;
- (long long)effectiveMinimumTilesForGroup:(id)arg1;
- (long long)minimumTilesForGroup:(id)arg1;
- (long long)numberOfObjectsInGroup:(id)arg1;
- (BOOL)isDataValid;
- (id)dockItemViewForRepresentedObject:(id)arg1 inGroup:(id)arg2;
- (id)overflowIndicatorItemViewForGroup:(id)arg1;
- (id)overflowIndicatorItemViewChevronImage;
- (id)standardDockItemViewForRepresentedObject:(id)arg1 inGroup:(id)arg2;
- (BOOL)structureAreaDockItemView:(id)arg1 handleMouseDragged:(id)arg2 mouseDown:(id)arg3;
- (void)structureAreaDockItemView:(id)arg1 noteClick:(id)arg2;
- (void)structureAreaDockItemView:(id)arg1 noteMouseDown:(id)arg2;
- (BOOL)isOverflowView:(id)arg1;
- (id)existingOverflowItemForGroup:(id)arg1;
- (id)existingUnvalidatedDockItemViewForRepresentedObject:(id)arg1 inGroup:(id)arg2;
- (BOOL)isVertical;
- (void)setInsertionIndicatorPath:(id)arg1;
- (void)setHighlightedRepresentedObject:(id)arg1 group:(id)arg2;
- (void)setHighlightedRepresentedObjects:(id)arg1;
- (id)highlightedRepresentedObjects;
- (void)setSelectedRepresentedObject:(id)arg1 group:(id)arg2;
- (void)setSelectedRepresentedObjects:(id)arg1;
- (id)selectedRepresentedObjects;
- (void)setHidden:(BOOL)arg1;
@property BOOL drawsWithActiveLook;
- (id)orderedUnvalidatedDockItems;
- (void)setGroupDividerRects:(id)arg1;
- (id)groupDividerRects;
- (id)effectiveBackgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

