/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSGradient;

@interface SKEColorRampView : NSView
{
    NSGradient *_gradient;
    long long _selectedMarkerIndex;
    id _target;
    SEL _action;
}

@property SEL action; // @synthesize action=_action;
@property(retain) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (double)locationWithPoint:(struct CGPoint)arg1;
- (struct CGRect)borderRect;
- (struct CGRect)interiorRect;
- (BOOL)hitTestColorWellPathWithMarkerTipAtPoint:(struct CGPoint)arg1 hitPoint:(struct CGPoint)arg2;
- (BOOL)hitTestMarkerPathWithTipAtPoint:(struct CGPoint)arg1 hitPoint:(struct CGPoint)arg2;
- (id)colorWellPathWithMarkerTipAtPoint:(struct CGPoint)arg1;
- (id)markerPathWithTipAtPoint:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)changeColor:(id)arg1;
- (id)gradientByReplacingLocation:(double)arg1 atIndex:(unsigned long long)arg2;
- (id)gradientByReplacingColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)gradientByRemovingColorAtIndex:(unsigned long long)arg1;
- (id)gradientByAddingColor:(id)arg1 atLocation:(double)arg2 index:(unsigned long long *)arg3;
@property(retain) NSGradient *gradient;

@end

