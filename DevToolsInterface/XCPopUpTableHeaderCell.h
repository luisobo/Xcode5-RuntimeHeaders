//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableHeaderCell.h"

@class NSPopUpButtonCell, NSTableColumn;

@interface XCPopUpTableHeaderCell : NSTableHeaderCell
{
    NSPopUpButtonCell *_popup;
    NSTableColumn *_currentColumn;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)selectItemWithTitle:(id)arg1;
- (void)removeItemWithTitle:(id)arg1;
- (void)removeAllItems;
- (void)setFont:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4 inColumn:(id)arg5;
- (void)addItemWithTitle:(id)arg1 andRepresentedObject:(id)arg2;
- (id)popUp;
- (id)initWithTitle:(id)arg1;

@end

