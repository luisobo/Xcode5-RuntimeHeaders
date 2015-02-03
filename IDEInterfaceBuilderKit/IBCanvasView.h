//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

#import "DVTInvalidation.h"
#import "IBSelectionOwnerDelegate.h"

@class DVTDelayedInvocation, DVTStackBacktrace, IBCanvasBackgroundView, IBCanvasBandSelectionView, IBCanvasFrame, IBCanvasScrollView, IBMutableIdentityDictionary, IBSelectionOwner, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSValue, NSView;

@interface IBCanvasView : DVTLayoutView_ML <IBSelectionOwnerDelegate, DVTInvalidation>
{
    long long _trackingAreaUpdateSuppressionCount;
    IBMutableIdentityDictionary *_overlaysPerCanvasFrame;
    NSMutableSet *_frameViews;
    NSMutableArray *_canvasOverlays;
    NSView *_endOfUndockedViewsToken;
    NSView *_endOfDockedViewsToken;
    NSMutableDictionary *_expansionRects;
    DVTDelayedInvocation *_shrinkInvocation;
    IBSelectionOwner *_canvasFrameSelectionOwner;
    IBCanvasBandSelectionView *_bandSelectionView;
    double _currentZoomFactor;
    double _targetZoomFactor;
    struct CGPoint _zoomAnchor;
    NSValue *_centerToPoint;
    BOOL _animatingZoom;
    BOOL _autoscrollEnabled;
    BOOL _drawsWithActiveLook;
    BOOL _shrinksToFitFrames;
    IBCanvasBackgroundView *_backgroundView;
    IBCanvasScrollView *_scrollView;
    id <IBCanvasViewDelegate> _delegate;
    IBCanvasFrame *_keyCanvasFrame;
    struct CGSize _framePaddingSizeForOverlayScrollers;
    struct CGSize _layoutPositioningScale;
}

+ (void)initialize;
@property(nonatomic) struct CGSize layoutPositioningScale; // @synthesize layoutPositioningScale=_layoutPositioningScale;
@property(nonatomic) struct CGSize framePaddingSizeForOverlayScrollers; // @synthesize framePaddingSizeForOverlayScrollers=_framePaddingSizeForOverlayScrollers;
@property(nonatomic) BOOL shrinksToFitFrames; // @synthesize shrinksToFitFrames=_shrinksToFitFrames;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(retain, nonatomic) IBCanvasFrame *keyCanvasFrame; // @synthesize keyCanvasFrame=_keyCanvasFrame;
@property(nonatomic) __weak id <IBCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IBCanvasScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly) IBCanvasBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(getter=isAutoscrollEnabled) BOOL autoscrollEnabled; // @synthesize autoscrollEnabled=_autoscrollEnabled;
- (void).cxx_destruct;
- (void)canvasFrameResizingTest:(id)arg1;
- (void)canvasScrollTest:(id)arg1;
- (void)canvasZoomTest:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)trackBandSelection:(id)arg1;
- (BOOL)canvasFrame:(id)arg1 intersectsBandRect:(struct CGRect)arg2;
- (id)trackMouse:(id)arg1 toMoveClickedFrame:(id)arg2 layoutManager:(id)arg3;
- (void)transferFirstResponderAfterDragConclusion:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)dragWillForceRedrawOfDestinationWindowPriorToDragEnd:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (id)expandOnEdge:(unsigned long long)arg1 amount:(double)arg2 animatingSynchronously:(BOOL)arg3;
- (id)addExpansionRect:(struct CGRect)arg1;
- (BOOL)dvt_autoscrollWithExternalDragEvent:(id)arg1 animate:(BOOL)arg2;
- (void)preventShrinkingWhileSynchronouslyScrolling:(CDUnknownBlockType)arg1;
- (void)preventShrinkingWhileAsynchronouslyScrolling;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (void)adjustScrollersForZoomingWhileInvoking:(CDUnknownBlockType)arg1;
- (void)adjustScrollersForCanvasContentSizingAndMovingWhileInvoking:(CDUnknownBlockType)arg1;
- (void)centerToPoint:(struct CGPoint)arg1;
- (double)zoomFactor;
- (void)zoomToFactor:(double)arg1 anchor:(struct CGPoint)arg2 animateSynchronously:(BOOL)arg3;
- (void)zoomToFactor:(double)arg1 anchor:(struct CGPoint)arg2 animateSynchronouslyForDuration:(double)arg3;
- (void)zoomToFactor:(double)arg1 anchor:(struct CGPoint)arg2;
- (struct CGPoint)convertFrameSpacePointToAnchorSpacePoint:(struct CGPoint)arg1;
- (struct CGPoint)convertAnchorSpacePointToFrameSpacePoint:(struct CGPoint)arg1;
- (void)_updateTrackingAreas;
- (void)_invalidateCursorRects;
- (BOOL)isUpdateTrackingAreasEnabled;
- (void)stopSuppressingTrackingAreaUpdates;
- (void)suppressTrackingAreaUpdates;
- (void)resetCursorRects;
- (id)hitTest:(struct CGPoint)arg1;
- (void)scrollCanvasFrameToVisible:(id)arg1 keepingRectVisible:(struct CGRect)arg2 zoomingToFactor:(double)arg3 animateSynchronously:(BOOL)arg4;
- (struct CGRect)rectToScrollCanvasFrameToVisible:(id)arg1 keepingRectVisible:(struct CGRect)arg2;
- (void)canvasFrame:(id)arg1 didChangeFrame:(struct CGRect)arg2;
- (void)canvasFrame:(id)arg1 anchorDidChange:(struct CGPoint)arg2;
- (void)didCompleteLayout;
- (void)didLayoutSubview:(id)arg1;
- (struct CGPoint)initialAnchorForCanvasFrame:(id)arg1 visibleRect:(struct CGRect)arg2;
- (struct CGRect)sizeAndPositionDockedViews;
- (void)sizeAndPositionOverlays;
- (void)sizeToFitFixedCanvasFrames;
- (struct CGSize)effectiveCanvasFramePadding;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (struct CGRect)boundsForCanvasFrameViewsFrame:(struct CGRect)arg1;
- (struct CGRect)rectForUserPositionedCanvasFramesInView:(id)arg1;
- (struct CGRect)layoutRectForNonAutoPositionedFrame:(id)arg1;
- (void)positionChildFramesForPhase:(long long)arg1;
- (id)subviewsOrderedForLayout;
- (id)undockedFrameViewsFromBackToFront;
- (id)dockedFrameViewsAndTheirDescendantsFromBackToFront;
- (struct CGRect)matchContentFrame:(struct CGRect)arg1 toTileSize:(struct CGSize)arg2;
- (void)clipViewBoundsDidChange:(id)arg1;
- (id)framesForViews:(id)arg1 inView:(id)arg2;
- (struct CGRect)frameForDockedCanvasFrame:(id)arg1 undockedArea:(struct CGRect *)arg2;
- (struct CGRect)currentViewPort;
- (BOOL)isFlipped;
- (void)setSubviews:(id)arg1;
- (void)orderCanvasFrameFront:(id)arg1;
- (id)currentCanvasOrder;
- (void)removeOverlayView:(id)arg1 forCanvasFrame:(id)arg2;
- (void)addOverlayView:(id)arg1 forCanvasFrame:(id)arg2;
- (void)removeOverlayView:(id)arg1;
- (void)addOverlayView:(id)arg1;
- (void)removeCanvasFrame:(id)arg1;
- (void)addCanvasFrame:(id)arg1;
@property(readonly) NSArray *canvasFramesFromBackToFront;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
@property(copy) NSSet *selectedCanvasFrames;
- (struct CGSize)growthMultiple;
- (void)awakeFromNib;
- (void)primitiveInvalidate;
- (void)dealloc;
- (void)insertTreeOfFrames;
- (void)insertRootDebugFrameWithColor:(id)arg1 point:(struct CGPoint *)arg2;
- (void)insertDebugTreeWithColor:(id)arg1 point:(struct CGPoint *)arg2 parent:(id)arg3 branchFactor:(long long)arg4 depth:(long long)arg5 totalDepth:(long long)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

