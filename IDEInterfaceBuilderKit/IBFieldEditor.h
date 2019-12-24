/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBCanvasOverlay.h>

#import "IBFieldEditorTextViewDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class DVTNotificationToken, IBFieldEditorConfiguration, IBFieldEditorTextView, IBStringEditorCell, NSAttributedString, NSFont, NSNumber, NSString;

@interface IBFieldEditor : IBCanvasOverlay <IBFieldEditorTextViewDelegate, NSTextViewDelegate>
{
    NSAttributedString *attributedStringValue;
    id titleRectCalculator;
    IBFieldEditorConfiguration *configuration;
    IBStringEditorCell *editedCell;
    IBFieldEditorTextView *textView;
    NSNumber *concludingTextMovement;
    id userInfo;
    BOOL madeExplicitTextChanges;
    BOOL madeExplicitAttributeChanges;
    long long conclusion;
    id completionHandler;
    BOOL alreadyFinished;
    NSFont *font;
    struct CGRect borderRect;
    BOOL beginEditingOnNextLayout;
    DVTNotificationToken *_textViewFrameChangeToken;
}

@property(readonly) NSNumber *concludingTextMovement; // @synthesize concludingTextMovement;
@property(copy) id titleRectCalculator; // @synthesize titleRectCalculator;
@property(copy) NSAttributedString *attributedStringValue; // @synthesize attributedStringValue;
@property(readonly) IBFieldEditorConfiguration *configuration; // @synthesize configuration;
@property(copy) NSFont *font; // @synthesize font;
@property(readonly) IBFieldEditorTextView *textView; // @synthesize textView;
@property(retain) id userInfo; // @synthesize userInfo;
- (void).cxx_destruct;
- (void)textViewDidChangeAttributes:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textFrameDidChange:(id)arg1;
- (void)layoutBottomUp;
- (struct CGRect)borderRectForClipFrame:(struct CGRect)arg1;
- (struct CGRect)calculateTitleRect;
- (void)titleRectDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (void)cancelOperation:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)finishEditingWithConclusion:(long long)arg1;
- (void)beginDelayedEditingDurringLayout;
- (void)beginEditingWithCompletionHandler:(id)arg1;
- (BOOL)isFlipped;
- (id)clipView;
- (void)setBorderRect:(struct CGRect)arg1;
@property(readonly) long long conclusion;
@property(readonly, copy) NSString *stringValue; // @dynamic stringValue;
- (BOOL)shouldApplySideEffectsToEditedString;
@property(readonly) BOOL madeExplicitAttributeChanges;
@property(readonly) BOOL madeExplicitTextChanges;
- (id)stringEditorCellForCurrentConfiguration;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

