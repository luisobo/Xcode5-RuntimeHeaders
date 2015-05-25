//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAnimationDelegate.h"

@class DVTMorphingDragImageView, NSAnimation, NSImage, NSPasteboard, NSString, NSTimer, NSView, NSWindow;

@interface DVTMorphingDragImageController : NSObject <NSAnimationDelegate>
{
    NSImage *_originalImage;
    struct CGSize _maxImageSize;
    struct CGSize _originalViewOffset;
    NSPasteboard *_dragPasteboard;
    id _dragSource;
    NSView *_sourceView;
    DVTMorphingDragImageView *_dragImageView;
    NSAnimation *_morphAnimation;
    NSAnimation *_slideBackAnimation;
    struct CGPoint _slideBackStartTranslation;
    struct CGPoint _slideBackEndTranslation;
    BOOL _dragDone;
    NSWindow *_windowUnderMouse;
    id <DVTMorphingDragImageDropTarget> _targetUnderMouse;
    NSTimer *_periodicEventTimer;
    BOOL _targetAcceptsDrag;
    BOOL _mouseOverSystemWindow;
    BOOL _scheduledRedisplay;
    NSWindow *_dragWindow;
    NSString *_runLoopMode;
}

+ (void)dragImage:(id)arg1 maximumSize:(struct CGSize)arg2 fromView:(id)arg3 at:(struct CGPoint)arg4 pasteboard:(id)arg5 source:(id)arg6 inMode:(id)arg7;
@property(copy, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(readonly, nonatomic) NSWindow *dragWindow; // @synthesize dragWindow=_dragWindow;
- (void).cxx_destruct;
- (void)_morphToDragImage:(id)arg1 force:(BOOL)arg2;
- (void)_sendMovedToPointOnScreenToDragSource;
- (void)_setTargetUnderMouse:(id)arg1;
- (void)_setWindowUnderMouse:(id)arg1;
- (void)_findWindowUnderMouse:(id *)arg1 level:(int *)arg2 viewUnderMouse:(id *)arg3;
- (id)_dragInfoForNoTargetUnderMouse;
- (id)_dragInfoForTargetUnderMouse;
- (void)_animateSlideBack;
- (void)_animateMorphWindow;
- (void)_dragComplete;
- (void)_applicationDidResignActive;
- (void)_firePeriodicEvent:(id)arg1;
- (void)_stopPeriodicEventTimer;
- (void)_startPeriodicEventTimerIfNeeded;
- (void)_handleMouseUp;
- (void)_handleFlagsChanged;
- (void)_handleMouseDragged;
- (void)_handleEvent:(id)arg1;
- (void)_runDrag;
- (void)_prepareForDragWithImage:(id)arg1;
- (void)_dragImage:(id)arg1 maximumSize:(struct CGSize)arg2 fromView:(id)arg3 at:(struct CGPoint)arg4 pasteboard:(id)arg5 source:(id)arg6 inMode:(id)arg7;
- (void)_redisplayWindows;
- (void)_scheduleRedisplay;
- (void)animationDidEnd:(id)arg1;
- (void)morphToDragImage:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

