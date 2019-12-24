/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class IBImageButton, NSArray, NSImageView, NSLayoutConstraint, NSTextField, NSTrackingArea;

@interface IBPreviewResultView : NSView
{
    NSTrackingArea *_trackingArea;
    BOOL _mouseInside;
    NSArray *_visibleActionButtonConstraints;
    NSLayoutConstraint *_actionButtonToTitleFieldHorizontalSpacingConstraint;
    BOOL _selected;
    BOOL _showsFirstResponder;
    IBImageButton *_actionButton;
    NSImageView *_contentView;
    NSTextField *_titleField;
    id _representedObject;
    id <IBPreviewResultViewDelegate> _delegate;
    double _defaultActionButtonToTitleFieldHorizontalSpacing;
}

+ (id)titleTextField;
@property(readonly) double defaultActionButtonToTitleFieldHorizontalSpacing; // @synthesize defaultActionButtonToTitleFieldHorizontalSpacing=_defaultActionButtonToTitleFieldHorizontalSpacing;
@property(retain) id <IBPreviewResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showsFirstResponder; // @synthesize showsFirstResponder=_showsFirstResponder;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain) NSImageView *contentView; // @synthesize contentView=_contentView;
@property(retain) IBImageButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveBorderColor;
- (void)updateTrackingAreas;
- (void)installTrackingArea;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)setMouseInside:(BOOL)arg1;
@property double spacingBetweenActionButtonAndTitleField;
- (id)initWithContentView:(id)arg1;

@end

