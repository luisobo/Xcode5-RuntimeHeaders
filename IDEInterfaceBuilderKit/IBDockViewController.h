/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEViewController.h"

#import "IBDockViewHighlightProviderDelegate-Protocol.h"
#import "IBEndPointProvider-Protocol.h"
#import "IBHybridStructureSelectionProvider-Protocol.h"
#import "IBStructureAreaDockViewDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"

@class DVTObservingToken, IBAbstractDocumentEditor, IBDecodedPasteboardContent, IBDockViewHighlightProvider, IBDocument, IBStructureAreaDockLabelContainer, IBStructureAreaDockView, NSString;

@interface IBDockViewController : IDEViewController <IBEndPointProvider, IBStructureAreaDockViewDelegate, NSSplitViewDelegate, IBDockViewHighlightProviderDelegate, IBHybridStructureSelectionProvider>
{
    DVTObservingToken *_dockLabelObservationTokens;
    IBDockViewHighlightProvider *_highlightProvider;
    IBDecodedPasteboardContent *_cachedDecodedPasteboadContext;
    long long _highlightGeneration;
    BOOL _drawsWithActiveLook;
    IBAbstractDocumentEditor *_documentEditor;
    IBStructureAreaDockView *_dockView;
}

@property(retain) IBStructureAreaDockView *dockView; // @synthesize dockView=_dockView;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(nonatomic) __weak IBAbstractDocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
- (void).cxx_destruct;
- (BOOL)shouldFilterConstraintChoicesBasedUponAngleOfLine;
- (void)indicateConnectionSuccessForTarget:(id)arg1;
- (id)showTargetIdentifierForEndPoint:(id)arg1;
- (id)endPointsFromBackToFrontAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4 connectionHandler:(id *)arg5;
- (void)revealSpringLoadedObjectAndIndicateSuccess:(id)arg1;
- (id)springLoadedObjectInfoAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4;
- (void)pasteExcludingConnections:(id)arg1;
- (void)dockViewPerformPaste:(id)arg1;
- (void)dockView:(id)arg1 duplicateRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 cutRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 copyRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 deleteRepresentedObjects:(id)arg2;
- (void)performDockPasteWithPasteboard:(id)arg1 context:(id)arg2;
- (void)performDockDeleteWithRepresentedObjects:(id)arg1;
- (void)performDockCopyWithRepresentedObjects:(id)arg1;
- (BOOL)dockViewCanPaste:(id)arg1;
- (BOOL)dockView:(id)arg1 canCutRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canDuplicateRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canCopyRepresentedObjects:(id)arg2;
- (BOOL)dockView:(id)arg1 canDeleteRepresentedObjects:(id)arg2;
- (void)dockView:(id)arg1 representedObject:(id)arg2 inGroup:(id)arg3 wasDraggedWithMouseDown:(id)arg4 mouseDragged:(id)arg5;
- (void)dockView:(id)arg1 draggingEnded:(id)arg2;
- (void)dockView:(id)arg1 draggingExited:(id)arg2;
- (void)dockView:(id)arg1 concludeDragOperation:(id)arg2;
- (BOOL)dockView:(id)arg1 performDragOperation:(id)arg2;
- (long long)topLevelObjectInsertionIndexForInsertionIndicatorPair:(id)arg1;
- (BOOL)dockView:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)dockView:(id)arg1 draggingUpdated:(id)arg2;
- (void)updateInsertionIndicatorPairWithDragInfo:(id)arg1;
- (id)insertionLocationForDragInfo:(id)arg1 initialSuggestion:(id)arg2;
- (void)clearCachedDecodedPasteboadContext;
- (unsigned long long)dockView:(id)arg1 draggingEntered:(id)arg2;
- (id)dockView:(id)arg1 draggedImageState:(id)arg2;
- (id)cachedDecodedPasteboadContentForDragInfo:(id)arg1;
- (unsigned long long)dragObjects:(id)arg1 withMouseDown:(id)arg2 mouseDragged:(id)arg3;
- (id)dropImageStateForObjects:(id)arg1;
- (id)defaultDragImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (id)dockView:(id)arg1 dragIdentifierForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (void)dockView:(id)arg1 representedObjectWasSelectedFromOverflowMenu:(id)arg2 inGroup:(id)arg3;
- (void)dockView:(id)arg1 representedObject:(id)arg2 inGroup:(id)arg3 wasClickedWithInitialEvent:(id)arg4;
- (void)openObjectAfterBeingSelectedInDock:(id)arg1;
- (void)dockView:(id)arg1 userDidChangeSelectionWithEvent:(id)arg2;
- (void)userDidChangeSelectionFromOverflowMenuForDockView:(id)arg1;
- (BOOL)dockView:(id)arg1 shouldSelectObjectFromOverflowMenu:(id)arg2 inGroup:(id)arg3;
- (BOOL)dockView:(id)arg1 shouldSelectObject:(id)arg2 inGroup:(id)arg3 withEvent:(id)arg4;
- (BOOL)shouldSelectObjectImmediately:(id)arg1 withEvent:(id)arg2;
- (id)dockView:(id)arg1 imageForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (BOOL)dockView:(id)arg1 isShowingOpenIndicatorForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (id)dockView:(id)arg1 titleForRepresentedObject:(id)arg2 inGroup:(id)arg3;
- (id)dockView:(id)arg1 representedObjectsForGroup:(id)arg2;
- (id)objectIDsForGroup:(id)arg1;
- (id)objectsForGroup:(id)arg1;
- (long long)dockView:(id)arg1 minimumNumberOfItemsInGroup:(id)arg2;
- (id)dockView:(id)arg1 titleOfRepresentedGroup:(id)arg2;
- (id)dockViewRepresentedGroups:(id)arg1;
- (void)dockViewWillValidateData:(id)arg1;
@property(readonly) id <IBHighlightProvider> highlightProvider;
- (void)incrementHighlightGeneration;
- (long long)highlightGeneration;
- (id)groupForObject:(id)arg1;
- (id)highlightableObjects;
@property(readonly) BOOL wantsFilterField;
- (void)willResignAsSelectionProviderForDocumentEditor:(id)arg1;
- (void)didBecomeSelectionProviderForDocumentEditor:(id)arg1;
- (BOOL)documentEditor:(id)arg1 canSelectMembers:(id)arg2;
- (void)documentEditor:(id)arg1 deselectMembers:(id)arg2;
- (void)documentEditor:(id)arg1 pullSelection:(id)arg2;
@property(readonly, nonatomic) BOOL onlySupportsDocumentObjectMembers;
- (void)documentEditor:(id)arg1 selectMembers:(id)arg2 takeFocus:(BOOL)arg3 zoomIfNeeded:(BOOL)arg4;
@property(readonly) NSString *stateSavingIdentifier;
- (void)becomeSelectionProvider;
- (void)selectionDidChange;
- (id)selectedObjects;
- (void)selectObjects:(id)arg1 allowReconfiguration:(BOOL)arg2 makeFirstResponder:(BOOL)arg3 clearsFiltering:(BOOL)arg4;
@property(readonly) double dockWidth;
@property(retain) IBStructureAreaDockLabelContainer *dockItemLabelPopUpContainer;
- (void)registerWithDocumentEditor;
@property(readonly) IBDocument *document;
- (id)pasteboardActionableObjectsForDockRepresentedObjectsDictionary:(id)arg1;
- (BOOL)isObjectPasteboardActionable:(id)arg1;
- (id)objectsForDockRepresentedObjectsDictionary:(id)arg1;
- (id)dockRepresentedObjectsDictionaryForObjects:(id)arg1;
- (void)dockLabelsDidChange;
- (void)editedTopLevelObjectsDidChange;
- (void)topLevelObjectsChanged;
@property(readonly, nonatomic) NSString *selectionProviderSwitcherTitle;
- (void)primitiveInvalidate;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSString *filterString;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

