/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButtonCell.h"

@class NSImage, NSMenu, NSMenuItem;

@interface DVTDelayedMenuButtonCell : NSButtonCell
{
    NSMenuItem *_currentMenuItem;
    NSMenu *_trampolineMenu;
    id <DVTDelayedMenuButtonDelegate> _delegate;
    NSImage *_disabledImage;
    NSImage *_arrowImage;
    struct CGSize _originalArrowSize;
    BOOL _ignoredAction;
    BOOL _senderOfButtonActionIsButton;
    BOOL _delegateRespondsToWillSetCurrentMenuItem;
    BOOL _delegateRespondsToUpdatedMenu;
    BOOL _buttonWantsMenuHidden;
    BOOL _showMenuImmediatleyWhenButtonPressed;
    BOOL _lockImageToLeftEdge;
    BOOL _useNSButtonImageDrawing;
    struct CGPoint _menuIndicatorInset;
}

@property BOOL useNSButtonImageDrawing; // @synthesize useNSButtonImageDrawing=_useNSButtonImageDrawing;
@property struct CGPoint menuIndicatorInset; // @synthesize menuIndicatorInset=_menuIndicatorInset;
@property BOOL lockImageToLeftEdge; // @synthesize lockImageToLeftEdge=_lockImageToLeftEdge;
@property BOOL showMenuImmediatleyWhenButtonPressed; // @synthesize showMenuImmediatleyWhenButtonPressed=_showMenuImmediatleyWhenButtonPressed;
@property(nonatomic) BOOL buttonWantsMenuHidden; // @synthesize buttonWantsMenuHidden=_buttonWantsMenuHidden;
@property(copy, nonatomic) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property BOOL senderOfButtonActionIsButton; // @synthesize senderOfButtonActionIsButton=_senderOfButtonActionIsButton;
@property(copy, nonatomic) NSImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) id <DVTDelayedMenuButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(copy) NSImage *pressedImage;
@property(copy) NSImage *activeImage;
- (void)_validateTrampolineMenu:(id)arg1;
- (id)target;
- (SEL)action;
@property(copy) NSMenuItem *currentMenuItem;
- (void)setMenu:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)dvt_validateItem:(id)arg1;
- (void)copyAttributesFromMenuItem:(id)arg1 toMenuItem:(id)arg2;
- (void)trampolineMenuFired:(id)arg1;
- (void)performAction:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)awakeFromNib;
- (BOOL)_shouldShowMenu;
- (double)popUpDelay;

@end

