/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEViewController.h"

#import "NSPopoverDelegate-Protocol.h"

@class DBGDataValue, DVTReplacementView, IDEVariablesView, NSPopover;

@interface DBGDataTipPopoverViewController : IDEViewController <NSPopoverDelegate>
{
    DBGDataValue *_dataValue;
    IDEVariablesView *_variablesView;
    BOOL _isInMiddleOfShowingPopover;
    BOOL _pendingDelayedCallToUpdatePopoverSize;
    id _outlineViewItemDidCollapseObserver;
    id _outlineViewItemDidExpandObserver;
    id _outlineViewWasReloadedObserver;
    id _outlineViewItemWasReloadedObserver;
    id _outlineViewEndedUpdatesObserver;
    NSPopover *_popover;
    DVTReplacementView *_replacementView;
}

@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(retain) IDEVariablesView *variablesView; // @synthesize variablesView=_variablesView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)popoverDidClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (double)_widthToFit;
- (void)_updatePopoverSize;
- (void)_updatePopoverSizeAfterDelay;
- (void)loadView;
- (id)init;

@end

