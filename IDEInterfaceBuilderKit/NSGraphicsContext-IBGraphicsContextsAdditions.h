//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSGraphicsContext.h"

@interface NSGraphicsContext (IBGraphicsContextsAdditions)
+ (void)temporarilyMakeCGContextCurrent:(struct CGContext *)arg1 andDoOperationPerservingState:(CDUnknownBlockType)arg2;
- (void)invokeCommandsWithContextFocusedOnFlippedRect:(struct CGRect)arg1 commands:(CDUnknownBlockType)arg2;
- (void)drawTransparencyLayerWithShadow:(id)arg1 clippedToRect:(struct CGRect)arg2 commands:(CDUnknownBlockType)arg3;
- (void)drawTransparencyLayerWithShadow:(id)arg1 opacity:(double)arg2 clippedToRect:(struct CGRect)arg3 commands:(CDUnknownBlockType)arg4;
@end

