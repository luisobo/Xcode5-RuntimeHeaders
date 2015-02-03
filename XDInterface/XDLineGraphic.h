//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XDInterface/XDGraphic.h>

#import "XDGraphEdge.h"

@class XDConnection, XDLineEnd;

@interface XDLineGraphic : XDGraphic <XDGraphEdge>
{
    XDLineEnd *_headLineEnd;
    XDLineEnd *_tailLineEnd;
    XDConnection *_headConnection;
    XDConnection *_tailConnection;
    struct CGSize _headStemSize;
    struct CGSize _tailStemSize;
    double _orthogonalPivotPosition;
    struct _XDLineGraphicFlags _lgFlags;
}

+ (void)initialize;
- (id)cursorForKnobPosition:(int)arg1;
- (BOOL)isLayoutable;
- (BOOL)isMovable;
- (BOOL)isHitByPoint:(struct CGPoint)arg1 inScale:(double)arg2;
- (BOOL)intersectsRect:(struct CGRect)arg1;
- (void)drawStrokeInView:(id)arg1;
- (id)highlightPath;
- (id)hitTestPath;
- (id)strokePath;
- (id)_bezierPathWithHeadLineEnd:(id)arg1 tailLineEnd:(id)arg2 appendLineEndPaths:(BOOL)arg3;
- (id)fillPath;
- (void)connectionDidMove:(id)arg1;
- (void)_connectionDidMove:(id)arg1;
- (struct CGPoint)crossingPointForConnection:(id)arg1;
- (unsigned long long)knobPositionMask;
- (BOOL)canCacheDrawingResult;
- (BOOL)canEdit;
- (BOOL)canDrawFill;
- (BOOL)canDrawContents;
- (id)tailGraphNode;
- (id)headGraphNode;
- (id)tailGraphic;
- (id)headGraphic;
- (id)tailConnection;
- (void)setTailConnection:(id)arg1;
- (id)headConnection;
- (void)setHeadConnection:(id)arg1;
- (void)flipVertically;
- (void)flipHorizontally;
- (struct CGRect)hitTestBounds;
- (struct CGSize)drawingBoundsMargin;
- (void)setBounds:(struct CGRect)arg1;
- (id)tailLineEnd;
- (void)setTailLineEnd:(id)arg1;
- (id)headLineEnd;
- (void)setHeadLineEnd:(id)arg1;
- (void)_validateLineEnds;
- (struct CGPoint)_tailSlope;
- (struct CGPoint)_headSlope;
- (double)orthogonalPivotPosition;
- (void)setOrthogonalPivotPosition:(double)arg1;
- (struct CGSize)tailStemSize;
- (void)setTailStemSize:(struct CGSize)arg1;
- (struct CGSize)headStemSize;
- (void)setHeadStemSize:(struct CGSize)arg1;
- (int)lineType;
- (void)setLineType:(int)arg1;
- (int)tailKnobPosition;
- (int)headKnobPosition;
- (struct CGPoint)tailPoint;
- (struct CGPoint)headPoint;
- (void)_setDiagramStorage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

