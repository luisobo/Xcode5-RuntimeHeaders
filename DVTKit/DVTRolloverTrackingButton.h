//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTMainStatusAwareButton.h>

@interface DVTRolloverTrackingButton : DVTMainStatusAwareButton
{
    long long _trackingRectTag;
    BOOL _mouseOver;
    BOOL _trackingMouseDown;
    BOOL _trackingRectUpdatePending;
    BOOL _redrawOnMouseEnteredAndExited;
    BOOL _shouldUseRolloverAppearance;
}

@property(nonatomic) BOOL shouldUseRolloverAppearance; // @synthesize shouldUseRolloverAppearance=_shouldUseRolloverAppearance;
@property(nonatomic) BOOL redrawOnMouseEnteredAndExited; // @synthesize redrawOnMouseEnteredAndExited=_redrawOnMouseEnteredAndExited;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_updateTrackingRectSoon;
- (void)updateTrackingRect;
- (void)_removeTrackingRect;
- (void)updateMouseIsOver:(int)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (BOOL)mouseIsOver;
- (void)awakeFromNib;
- (void)setBoundsRotation:(double)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (void)setFrameRotation:(double)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initTrackingRect;

@end

