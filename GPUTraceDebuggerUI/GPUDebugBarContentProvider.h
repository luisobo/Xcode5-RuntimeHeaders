//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEDebugBarContentProvider.h"

@class DVTObservingToken, GPUDebuggingAddition;

__attribute__((visibility("hidden")))
@interface GPUDebugBarContentProvider : IDEDebugBarContentProvider
{
    GPUDebuggingAddition *_currentDebuggingAddition;
    DVTObservingToken *_debuggingAdditionsObservation;
}

@property(retain) GPUDebuggingAddition *currentDebuggingAddition; // @synthesize currentDebuggingAddition=_currentDebuggingAddition;
- (void).cxx_destruct;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;

@end

