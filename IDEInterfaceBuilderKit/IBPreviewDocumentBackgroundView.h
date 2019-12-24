/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "DVTFirstResponderShowingView-Protocol.h"

@class DVTFirstResponderDrawingStrategy, DVTLozengeTextField, IBCanvasBandSelectionView, NSString;

@interface IBPreviewDocumentBackgroundView : NSView <DVTFirstResponderShowingView>
{
    IBCanvasBandSelectionView *_bandSelectionView;
    DVTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    DVTLozengeTextField *_placeholderTextField;
    BOOL _showsFirstResponder;
    id <IBPreviewDocumentBackgroundViewDelegate> _delegate;
    NSString *_placeholderText;
}

@property(nonatomic) BOOL showsFirstResponder; // @synthesize showsFirstResponder=_showsFirstResponder;
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(retain) id <IBPreviewDocumentBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)trackBandSelection:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

