//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditorDocument.h"

@class GPUDebuggerLog;

__attribute__((visibility("hidden")))
@interface GPUDebuggerLogDocument : IDEEditorDocument
{
    GPUDebuggerLog *_debuggerLog;
}

@property(readonly) GPUDebuggerLog *debuggerLog; // @synthesize debuggerLog=_debuggerLog;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

