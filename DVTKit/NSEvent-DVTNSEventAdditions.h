/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEvent.h"

@interface NSEvent (DVTNSEventAdditions)
- (struct CGPoint)dvt_locationInWindowRelativeToView:(id)arg1;
- (BOOL)dvt_isLeftMouseButtonUp;
- (BOOL)dvt_isLeftMouseButtonDown;
- (struct CGPoint)dvt_flooredLocationInWindow;
- (struct CGPoint)dvt_flooredLocationInView:(id)arg1;
- (BOOL)dvt_isDragEventAnIntentialLeftDragWithRespectToMouseDown:(id)arg1;
- (BOOL)dvt_isControlKeyDown;
- (BOOL)dvt_isCommandKeyDown;
- (BOOL)dvt_isShiftKeyDown;
- (BOOL)dvt_isOptionKeyDown;
- (BOOL)dvt_isEscapeKeyDown;
- (struct CGPoint)dvt_locationOnScreen;
- (struct CGPoint)dvt_locationInWindow:(id)arg1;
- (struct CGPoint)dvt_locationInView:(id)arg1;
@end

