/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTDisclosureView.h"

#import "DVTInvalidation-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, IDECapsuleFooterView, IDECapsuleListView, IDEViewController<IDECapsuleViewController>, NSButton, NSString, NSTrackingArea;

@interface IDECapsuleView : DVTDisclosureView <NSTextFieldDelegate, DVTInvalidation>
{
    IDECapsuleFooterView *_footerView;
    NSButton *_addButton;
    NSButton *_removeButton;
    id <IDECapsuleViewDelegate> _delegate;
    NSTrackingArea *_titleCursorArea;
    DVTNotificationToken *_frameChangedObserver;
    DVTObservingToken *_disclosedObserver;
    DVTObservingToken *_titleObserver;
    struct {
        unsigned int supportedDragTypes:1;
        unsigned int acceptDrop:1;
        unsigned int validateDrop:1;
        unsigned int drawBorderBelowHeader:1;
        unsigned int suppressBottomSeparator:1;
        unsigned int canRemove:1;
        unsigned int canRename:1;
        unsigned int clickedRemoveButton:1;
        unsigned int titleForEditing:1;
        unsigned int setTitle:1;
        unsigned int backgroundColor:1;
        unsigned int borderColor:1;
        unsigned int headerContentView:1;
        unsigned int preferredContentWidth:1;
        unsigned int contentXOffset:1;
        unsigned int capsuleViewWasDisclosed:1;
        unsigned int capsuleViewSidePadding:1;
        unsigned int allowCustomContentHeaderViewToDriveHeaderHeight:1;
    } _delegateRespondsTo;
    BOOL _selected;
    BOOL _highlighted;
    BOOL _highlightingEnabled;
    BOOL _active;
    IDECapsuleListView *_listView;
    IDEViewController<IDECapsuleViewController> *_capsuleViewController;
}

+ (void)initialize;
@property(retain) IDEViewController<IDECapsuleViewController> *capsuleViewController; // @synthesize capsuleViewController=_capsuleViewController;
@property(retain, nonatomic) id <IDECapsuleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDECapsuleListView *listView; // @synthesize listView=_listView;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) BOOL highlightingEnabled; // @synthesize highlightingEnabled=_highlightingEnabled;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) IDECapsuleFooterView *footerView; // @synthesize footerView=_footerView;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawSeparatorInRect:(struct CGRect)arg1;
- (void)_titleForDisplayChanged:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)_rename:(id)arg1;
- (void)_remove:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithCapsuleViewController:(id)arg1 takeWidthFromControllerView:(BOOL)arg2;
- (id)initWithCapsuleViewController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)allowCustomContentHeaderViewToDriveHeaderHeight;
- (double)sidePadding;
- (id)borderColor;
- (id)backgroundColor;
@property(readonly) BOOL _renamable;
@property(readonly) BOOL _removable;
- (double)_contentXOffset;
- (double)_delegatePreferredContentWidthWithCapsuleWidth:(double)arg1;
- (void)setDisclosed:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)updateTrackingAreas;
- (void)_addTrackingArea;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)_toggleSubviewVisibility:(id)arg1;
- (BOOL)_shouldDrawContent;
- (BOOL)_shouldDrawFooter;
- (BOOL)_shouldSuppressBottomSeparator;
- (BOOL)_shouldDrawHeaderBottomBorder;
- (struct CGRect)_footerRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_headerRectForBounds:(struct CGRect)arg1;
- (struct CGRect)capsuleBoundsForRect:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

