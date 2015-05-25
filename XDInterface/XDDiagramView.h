//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSColor, NSImage, NSMapTable, NSMutableArray, NSShadow, NSString, NSTimer, NSWindow, XDDiagramController, XDDiagramStorage, XDDiagramToolManager, XDGraphic;

@interface XDDiagramView : NSView
{
    XDDiagramToolManager *_diagramToolManager;
    XDDiagramController *_diagramController;
    XDDiagramStorage *_diagramStorage;
    struct CGSize _canvasSize;
    double _zoomFactor;
    NSMutableArray *_selectedGraphics;
    NSArray *_originalSelectedGraphics;
    NSMutableArray *_orderedSelectedGraphics;
    NSMutableArray *_rubberbandGraphics;
    XDGraphic *_creatingGraphic;
    XDGraphic *_editingGraphic;
    NSView *_editorView;
    XDGraphic *_clickedGraphic;
    NSMapTable *_auxiliaryStorageCache;
    NSMapTable *_drawingCache;
    id _delegate;
    id _target;
    SEL _action;
    SEL _doubleAction;
    struct CGPoint _translatedOrigin;
    NSColor *_canvasBackgroundColor;
    NSShadow *_canvasShadow;
    NSColor *_backgroundColor;
    double _majorGridSpacing;
    long long _minorGridCount;
    NSColor *_majorGridColor;
    NSColor *_minorGridColor;
    NSColor *_pageBreaksColor;
    NSImage *_gridDrawingCache;
    struct CGRect _vRulerLineRect;
    struct CGRect _hRulerLineRect;
    NSTimer *_unhideKnobsTimer;
    long long _trackingRectTag;
    NSString *_toolTip;
    double _toolTipDelay;
    struct __CFRunLoopTimer *_toolTipTimer;
    struct CGPoint _toolTipPoint;
    NSWindow *_toolTipWindow;
    long long _toolTipTrackingRectTag;
    long long _pasteboardChangeCount;
    long long _pasteCascadeNumber;
    id _reserved;
}

+ (id)_defaultMenu;
+ (id)defaultMenu;
+ (void)setDefaultMenu:(id)arg1;
+ (void)_synchronizeDefaultContextMenu;
+ (Class)_defaultZoomPopUpButtonClass;
+ (Class)_defaultDiagramStorageClass;
+ (Class)_defaultDiagramControllerClass;
+ (Class)_defaultDiagramToolManagerClass;
+ (id)defaultTypeToSelectCharacterSet;
+ (id)defaultZoomFactors;
+ (BOOL)defaultShowsSelectedGraphicsInFront;
+ (void)setDefaultShowsSelectedGraphicsInFront:(BOOL)arg1;
+ (BOOL)defaultShowsPageBreaks;
+ (void)setDefaultShowsPageBreaks:(BOOL)arg1;
+ (id)defaultPageBreaksColor;
+ (void)setDefaultPageBreaksColor:(id)arg1;
+ (BOOL)defaultSnapsToGrid;
+ (void)setDefaultSnapsToGrid:(BOOL)arg1;
+ (BOOL)defaultShowsMajorGrid;
+ (void)setDefaultShowsMajorGrid:(BOOL)arg1;
+ (BOOL)defaultShowsGrid;
+ (void)setDefaultShowsGrid:(BOOL)arg1;
+ (id)defaultMinorGridColor;
+ (void)setDefaultMinorGridColor:(id)arg1;
+ (id)defaultMajorGridColor;
+ (void)setDefaultMajorGridColor:(id)arg1;
+ (void)initialize;
- (void)flagsChanged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_bezelWidgetWillOrderOut:(id)arg1;
- (void)_navViewAction:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_destroyToolTipTimer;
- (void)_createToolTipTimer;
- (void)_toolTipTimer;
- (void)_showToolTip:(id)arg1;
- (double)_toolTipDelay;
- (void)_setToolTipDelay:(double)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)_setNeedsDisplayForFirstResponderChange;
- (void)_applicationDidChange:(id)arg1;
- (void)_setNeedsDisplayForApplicationChange;
- (BOOL)moveSelectedGraphicsRelativeToPoint:(struct CGPoint)arg1;
- (void)_unhideKnobs:(id)arg1;
- (void)_hideKnobsMomentarily;
- (BOOL)areKnobsHidden;
- (void)setKnobsHidden:(BOOL)arg1;
- (void)updateRulers;
- (void)endEchoingToRulers;
- (void)continueEchoingToRulers:(struct CGRect)arg1;
- (void)beginEchoingToRulers:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawGraphics:(id)arg1 inRect:(struct CGRect)arg2;
- (id)_drawingCacheForGraphic:(id)arg1;
- (void)drawMinorGridInRect:(struct CGRect)arg1;
- (void)drawMajorGridInRect:(struct CGRect)arg1;
- (void)drawPageBreaksInRect:(struct CGRect)arg1;
- (void)invalidateGridDrawingCache;
- (id)auxiliaryStorageForGraphic:(id)arg1;
- (void)resetCursorRects;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (id)visibleGraphicsIntersectingRect:(struct CGRect)arg1;
- (id)selectedGraphicsIntersectingRect:(struct CGRect)arg1;
- (id)graphicsIntersectingRect:(struct CGRect)arg1;
- (id)visibleTrackingGraphicUnderPoint:(struct CGPoint)arg1;
- (id)trackingGraphicUnderPoint:(struct CGPoint)arg1;
- (id)trackingGraphicInFrontUnderPoint:(struct CGPoint)arg1;
- (id)visibleGraphicUnderPoint:(struct CGPoint)arg1;
- (id)graphicUnderPoint:(struct CGPoint)arg1;
- (id)graphicInFrontUnderPoint:(struct CGPoint)arg1;
- (id)_visibleGraphicUnderPoint:(struct CGPoint)arg1 trackingOnly:(BOOL)arg2;
- (id)_graphicUnderPoint:(struct CGPoint)arg1 trackingOnly:(BOOL)arg2;
- (id)_graphicInFrontUnderPoint:(struct CGPoint)arg1 trackingOnly:(BOOL)arg2;
- (id)graphicsInFront;
- (BOOL)showsSelectedGraphicsInFront;
- (void)setShowsSelectedGraphicsInFront:(BOOL)arg1;
- (BOOL)showsHiddenGraphics;
- (void)setShowsHiddenGraphics:(BOOL)arg1;
- (double)maxTypeToSelectInterval;
- (void)setMaxTypeToSelectInterval:(double)arg1;
- (BOOL)allowsTypeToSelect;
- (void)setAllowsTypeToSelect:(BOOL)arg1;
- (id)undoManager;
- (BOOL)allowsUndo;
- (void)setAllowsUndo:(BOOL)arg1;
- (struct CGPoint)gridPoint:(struct CGPoint)arg1;
- (struct CGPoint)forceGridPoint:(struct CGPoint)arg1;
- (BOOL)showsPageBreaks;
- (void)setShowsPageBreaks:(BOOL)arg1;
- (id)pageBreaksColor;
- (void)setPageBreaksColor:(id)arg1;
- (BOOL)snapsToGrid;
- (void)setSnapsToGrid:(BOOL)arg1;
- (BOOL)showsMinorGrid;
- (void)setShowsMinorGrid:(BOOL)arg1;
- (BOOL)showsMajorGrid;
- (void)setShowsMajorGrid:(BOOL)arg1;
- (BOOL)showsGrid;
- (void)setShowsGrid:(BOOL)arg1;
- (id)minorGridColor;
- (void)setMinorGridColor:(id)arg1;
- (id)majorGridColor;
- (void)setMajorGridColor:(id)arg1;
- (double)minorGridSpacing;
- (long long)minorGridCount;
- (void)setMinorGridCount:(long long)arg1;
- (double)majorGridSpacing;
- (void)setMajorGridSpacing:(double)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (id)canvasShadow;
- (void)setCanvasShadow:(id)arg1;
- (BOOL)drawsCanvasShadow;
- (void)setDrawsCanvasShadow:(BOOL)arg1;
- (id)canvasBackgroundColor;
- (void)setCanvasBackgroundColor:(id)arg1;
- (BOOL)drawsCanvasBackground;
- (void)setDrawsCanvasBackground:(BOOL)arg1;
- (BOOL)allowsDragAndDrop;
- (void)setAllowsDragAndDrop:(BOOL)arg1;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)arg1;
- (BOOL)isSelectable;
- (void)setSelectable:(BOOL)arg1;
- (SEL)doubleAction;
- (void)setDoubleAction:(SEL)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)_sendDoubleActionWithClickedGraphic:(id)arg1;
- (BOOL)_sendActionWithClickedGraphic:(id)arg1;
- (BOOL)_sendAction:(SEL)arg1 to:(id)arg2 graphic:(id)arg3;
- (id)clickedGraphic;
- (BOOL)abortEditing;
- (void)endEditing;
- (void)startEditingGraphic:(id)arg1 withEvent:(id)arg2;
- (BOOL)isEditing;
- (id)editorView;
- (id)editingGraphic;
- (void)setEditingGraphic:(id)arg1 editorView:(id)arg2;
- (id)creatingGraphic;
- (void)setCreatingGraphic:(id)arg1;
- (id)rubberbandGraphics;
- (void)setRubberbandGraphics:(id)arg1;
- (id)layoutableGraphics;
- (id)removableGraphics;
- (id)resizableGraphics;
- (id)movableGraphics;
- (void)_scrollGraphicTitleToVisible:(id)arg1 forceCenter:(BOOL)arg2;
- (void)scrollGraphicsToVisible:(id)arg1 forceCenter:(BOOL)arg2;
- (void)_centeredScrollRectToVisible:(struct CGRect)arg1 forceCenter:(BOOL)arg2;
- (void)clearSelection;
- (void)_deselectHiddenSelectedGraphics;
- (void)deselectGraphics:(id)arg1;
- (void)deselectGraphic:(id)arg1;
- (void)selectGraphics:(id)arg1;
- (void)selectGraphic:(id)arg1;
- (BOOL)graphicIsSelected:(id)arg1;
- (id)orderedSelectedGraphics;
- (id)selectedGraphics;
- (void)_userSelectGraphic:(id)arg1;
- (BOOL)_userCanSelectGraphic:(id)arg1;
- (BOOL)_userCanChangeSelection;
- (void)_postSelectionDidChangeNotification;
- (BOOL)_enableSelectionPostingAndPost;
- (void)_disableSelectionPosting;
- (void)invalidateAllGraphics;
- (void)invalidateSelectedGraphicsInRect:(struct CGRect)arg1;
- (void)invalidateGraphics:(id)arg1;
- (void)invalidateGraphic:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)_graphLayouterMenuItemAction:(id)arg1;
- (void)layoutGraphicsUsingGraphLayouterWithIdentiier:(id)arg1;
- (void)sizeToFit;
- (void)_superviewFrameDidChange:(id)arg1;
- (void)tile;
- (void)_canvasSizeDidChange:(id)arg1;
- (BOOL)autoresizesCanvas;
- (void)setAutoresizesCanvas:(BOOL)arg1;
- (struct CGSize)canvasSize;
- (void)setCanvasSize:(struct CGSize)arg1;
- (struct CGSize)documentSize;
- (struct CGRect)drawingBounds;
- (struct CGRect)drawingBoundsWithMask:(long long)arg1;
- (void)_zoomPopUpButtonAction:(id)arg1;
- (id)zoomPopUpButton;
- (BOOL)zoomToFit;
- (double)_zoomFactorToFit;
- (BOOL)zoomOut;
- (BOOL)zoomIn;
- (double)zoomFactor;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomFactor:(double)arg1 animate:(BOOL)arg2;
- (double)_maxZoomFactor;
- (double)_minZoomFactor;
- (id)zoomFactors;
- (id)printInfo;
- (void)_replaceOwnedDiagramStorage:(id)arg1;
- (BOOL)_ownsDiagramStorage;
- (id)diagramStorage;
- (id)diagramController;
- (void)setDiagramController:(id)arg1;
- (void)_currentDiagramToolDidChange:(id)arg1;
- (id)diagramToolManager;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_invalidateToolTip;
- (void)finalize;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 diagramController:(id)arg2;
- (BOOL)dragSelectionWithEvent:(id)arg1 offset:(struct CGSize)arg2 slideBack:(BOOL)arg3;
- (id)dragImageForSelectionWithEvent:(id)arg1 origin:(struct CGPoint *)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)cleanUpAfterDragOperation;
- (unsigned long long)dragOperationForDraggingInfo:(id)arg1 type:(id)arg2;
- (id)acceptableDragTypes;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toggleHiddenGraphicsShown:(id)arg1;
- (void)zoomToFit:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)toggleRuler:(id)arg1;
- (void)togglePageBreaksShown:(id)arg1;
- (void)toggleGridShown:(id)arg1;
- (void)toggleSnapsToGrid:(id)arg1;
- (void)layoutGraphicsConcentrically:(id)arg1;
- (void)layoutGraphicsHierarchically:(id)arg1;
- (void)rollDownAllCompartments:(id)arg1;
- (void)rollUpAllCompartments:(id)arg1;
- (void)collapseAllCompartments:(id)arg1;
- (void)expandAllCompartments:(id)arg1;
- (void)flipHorizontally:(id)arg1;
- (void)flipVertically:(id)arg1;
- (void)sizeToFit:(id)arg1;
- (void)makeSameHeight:(id)arg1;
- (void)makeSameWidth:(id)arg1;
- (void)alignCentersHorizontallyInContainer:(id)arg1;
- (void)alignCentersVerticallyInContainer:(id)arg1;
- (void)alignHorizontalCenters:(id)arg1;
- (void)alignVerticalCenters:(id)arg1;
- (void)alignRightEdges:(id)arg1;
- (void)alignLeftEdges:(id)arg1;
- (void)alignBottomEdges:(id)arg1;
- (void)alignTopEdges:(id)arg1;
- (void)unlock:(id)arg1;
- (void)lock:(id)arg1;
- (void)sendToBack:(id)arg1;
- (void)bringToFront:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)_scrollVertically:(double)arg1;
- (double)_verticalDistanceForLineScroll;
- (double)_verticalDistanceForPageScroll;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)_userMoveSelectedGraphicsRelativeToPoint:(struct CGPoint)arg1;
- (void)keyDown:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1;
- (void)paste:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)delete:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (BOOL)_readSelectionFromPasteboard:(id)arg1 types:(id)arg2;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)_readDiagramFromPasteboard:(id)arg1;
- (id)preferredPasteboardTypeFromArray:(id)arg1 restrictedToTypesFromArray:(id)arg2;
- (id)readablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;

@end

