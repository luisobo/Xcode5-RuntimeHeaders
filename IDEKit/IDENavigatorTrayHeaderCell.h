/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDENavigatorDataCell.h>

#import "IDENavigatorTrayHeaderCellProtocol-Protocol.h"

@class NSArray, NSButtonCell, NSImage, NSIndexSet, NSString;

@interface IDENavigatorTrayHeaderCell : IDENavigatorDataCell <IDENavigatorTrayHeaderCellProtocol>
{
    NSButtonCell *_gaugeCell;
    NSImage *_gaugeIcon;
    NSImage *_loweredGaugeImage;
    int _trayState;
    struct CGSize _cachedShadowSize;
    NSImage *_cachedShadow;
    BOOL internalHeaderIsSelected;
    NSArray *trayItemCells;
    NSIndexSet *selectedTrayItems;
}

@property BOOL internalHeaderIsSelected; // @synthesize internalHeaderIsSelected;
@property(copy) NSIndexSet *selectedTrayItems; // @synthesize selectedTrayItems;
@property(copy) NSArray *trayItemCells; // @synthesize trayItemCells;
- (void).cxx_destruct;
- (BOOL)_mouseLocationForEventOverGaugeButton:(id)arg1 cellFrame:(struct CGRect)arg2 view:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_drawTrayItemCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)_drawLineBelowTrayCellRect:(struct CGRect)arg1;
- (void)_drawInteriorTrayItemsWithFrame:(struct CGRect)arg1 controlView:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)_drawInteriorHeaderBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2 height:(double)arg3;
- (id)_gaugeButtonIconForBackgroundStyle:(long long)arg1;
- (void)_gaugeButtonPressed:(id)arg1;
- (void)_drawGaugeIconWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)gaugeIconRectInFrame:(struct CGRect)arg1;
- (void)setTrayState:(int)arg1;
- (id)_arrowRectForRect:(struct CGRect)arg1 arrowLength:(double)arg2 withDistance:(double)arg3;
- (void)_selectionChanged:(id)arg1;
- (id)representedObjectFollowingProxyLink;
- (void)_configureDeselectionObserversOnView:(id)arg1;
- (unsigned long long)indexOfTrayItemAtPoint:(struct CGPoint)arg1 inTrayCellRect:(struct CGRect)arg2;
- (struct CGRect)trayRectAtIndex:(unsigned long long)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)visualHeaderRectInBounds:(struct CGRect)arg1;
- (double)heightOfHeader;
- (double)heightOfTrayItemCell;
- (void)dvt_handleMouseDown:(id)arg1 forCellRect:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)dvt_frameOfOutlineCellForBounds:(struct CGRect)arg1 proposedFrame:(struct CGRect)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)statusCellsRectsForBounds:(struct CGRect)arg1;
- (struct CGRect)statusRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)setControlView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initTextCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

