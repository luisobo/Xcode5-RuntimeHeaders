//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTTextView.h>

#import "DVTLayoutManagerDelegate.h"

@class DVTFoldingLayoutManager, DVTFoldingManager, DVTLayoutManager, DVTSourceCodeLanguage, DVTTextCompletionController, DVTTextCompletionDataSource, DVTTextStorage, NSCharacterSet, NSColor, NSString;

@interface DVTCompletingTextView : DVTTextView <DVTLayoutManagerDelegate>
{
    DVTTextCompletionController *_completionController;
    DVTTextCompletionDataSource *_completionsDataSource;
    NSColor *_secondarySelectedTextBackgroundColor;
    double _accessoryAnnotationWidth;
    unsigned long long _modifierFlagsAtLastSingleMouseDown;
    BOOL _tabSelectsNextPlaceholder;
}

+ (id)readableTextPasteboardTypes;
+ (long long)scrollerKnobStyleForBackgroundColor:(id)arg1;
+ (id)_operatorChars;
+ (id)identifierChars;
+ (id)_identifierCharsForImportStatements;
+ (BOOL)appSupportsActionMonitoring;
@property(copy, nonatomic) NSColor *secondarySelectedTextBackgroundColor; // @synthesize secondarySelectedTextBackgroundColor=_secondarySelectedTextBackgroundColor;
@property BOOL tabSelectsNextPlaceholder; // @synthesize tabSelectsNextPlaceholder=_tabSelectsNextPlaceholder;
@property(readonly) DVTTextCompletionController *completionController; // @synthesize completionController=_completionController;
@property unsigned long long modifierFlagsAtLastSingleMouseDown; // @synthesize modifierFlagsAtLastSingleMouseDown=_modifierFlagsAtLastSingleMouseDown;
@property double accessoryAnnotationWidth; // @synthesize accessoryAnnotationWidth=_accessoryAnnotationWidth;
- (void).cxx_destruct;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)becomeMainWindow;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_invalidateDisplayForViewStatusChange;
- (void)setBackgroundColor:(id)arg1;
- (void)updateScrollerKnobStyle;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (id)attributedStringForCompletionPlaceholderCell:(id)arg1 atCharacterIndex:(unsigned long long)arg2 withDefaultAttributes:(id)arg3;
- (void)doubleClickedOnCell:(id)arg1 inRect:(struct CGRect)arg2 atIndexInToken:(unsigned long long)arg3;
- (void)clickedOnCell:(id)arg1 inRect:(struct CGRect)arg2 atIndexInToken:(unsigned long long)arg3;
- (BOOL)isThereOnlyATokenAttachmentAtUserTextChange;
- (void)replaceSelectedTokenWithTokenText;
- (void)useSelectionForFind:(id)arg1;
- (struct _NSRange)_characterRangeForRect:(struct CGRect)arg1;
- (struct _NSRange)clipViewBoundsCharacterRange;
- (struct _NSRange)visibleCharacterRange;
- (void)mouseDown:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawRect:(struct CGRect)arg1 clip:(BOOL)arg2;
- (void)_drawOverlayRect:(struct CGRect)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (void)_replaceFoldWithContents:(id)arg1;
- (void)textStorage:(id)arg1 didEndEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)textStorage:(id)arg1 willEndEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
@property(readonly) DVTTextStorage *textStorage;
@property(readonly) DVTLayoutManager *layoutManager;
- (void)didInsertCompletionTextAtRange:(struct _NSRange)arg1;
- (void)invalidateDisplayForRange:(struct _NSRange)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)paste:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)removeFromSuperview;
- (void)_mouseInside:(id)arg1;
- (void)debugDumpCompletionState:(id)arg1;
- (void)selectPreviousPlaceholder:(id)arg1;
- (void)selectNextPlaceholder:(id)arg1;
- (BOOL)handleInsertBackTab;
- (BOOL)handleInsertTab;
- (id)menuForEvent:(id)arg1;
- (BOOL)handleCancel;
- (void)previousCompletion:(id)arg1;
- (void)nextCompletion:(id)arg1;
- (void)complete:(id)arg1;
- (BOOL)shouldChangeTextInRanges:(id)arg1 replacementStrings:(id)arg2;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)doCommandBySelector:(SEL)arg1;
- (void)layoutManager:(id)arg1 didUnfoldRange:(struct _NSRange)arg2;
- (void)layoutManager:(id)arg1 didFoldRange:(struct _NSRange)arg2;
- (void)_foldingLayoutManagerFoldsChanged:(id)arg1;
- (id)layoutManager:(id)arg1 shouldUseTextBackgroundColor:(id)arg2 rectArray:(struct CGRect *)arg3 count:(unsigned long long)arg4 forCharacterRange:(struct _NSRange)arg5;
- (id)layoutManager:(id)arg1 shouldUseTemporaryAttributes:(id)arg2 forDrawingToScreen:(BOOL)arg3 atCharacterIndex:(unsigned long long)arg4 effectiveRange:(struct _NSRange *)arg5;
- (void)showMatchingBraceAtLocation:(id)arg1;
- (void)autoHighlightMatchingBracketAtLocationIfNecessary:(unsigned long long)arg1;
- (BOOL)shouldTryToCompleteOpeningBracketForStringOrAttributedStringToInsert:(id)arg1;
- (BOOL)shouldTryToCompleteOpeningBracketForStringToInsert:(id)arg1;
- (BOOL)shouldTryToCompleteOpeningBracketForStringToInsert:(id)arg1 usingLanguage:(id)arg2;
- (BOOL)_moveToNextPlaceholderFromCharacterIndex:(unsigned long long)arg1 forward:(BOOL)arg2 onlyIfNearby:(BOOL)arg3;
- (struct _NSRange)_findString:(id)arg1 inString:(id)arg2 fromRange:(struct _NSRange)arg3 limitRange:(struct _NSRange)arg4 forward:(BOOL)arg5 wrap:(BOOL)arg6;
- (struct _NSRange)rangeOfPlaceholderFromCharacterIndex:(unsigned long long)arg1 forward:(BOOL)arg2 wrap:(BOOL)arg3 limit:(unsigned long long)arg4;
- (BOOL)selectFirstPlaceholderInCharacterRange:(struct _NSRange)arg1;
- (BOOL)handleSelectPreviousPlaceholder;
- (BOOL)handleSelectNextPlaceholder;
- (id)ghostComplementTextColor;
- (BOOL)shouldAutoCompleteAtLocation:(unsigned long long)arg1;
- (BOOL)shouldSuppressTextCompletion;
@property(readonly, copy) NSCharacterSet *autoCompleteChars;
@property(readonly) double autoCompletionDelay;
- (id)contextForCompletionStrategiesAtWordStartLocation:(unsigned long long)arg1;
@property(readonly) DVTTextCompletionDataSource *completionsDataSource;
- (struct _NSRange)wordRangeAtLocation:(unsigned long long)arg1;
@property(readonly) DVTSourceCodeLanguage *language;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)_dvtCommonInit;
- (id)currentTheme;
@property(readonly) DVTFoldingManager *foldingManager;
@property(readonly) DVTFoldingLayoutManager *foldingLayoutManager;
- (BOOL)removeMenusNotInWhiteList:(id)arg1 fromMenu:(id)arg2 removeSeparators:(BOOL)arg3;
- (void)dvt_shouldDeallocate;
- (id)cell;
- (id)selectedCell;
- (id)accessibilityAttributeValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property id <DVTCompletingTextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

