//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYCaptureArchiveModifier.h"

@interface DYGLCaptureArchiveModifier : DYCaptureArchiveModifier
{
    StateMirrorManager_5097919b _stateMirrorManager;
    StateMirrorManager_5097919b _origStateMirrorManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_processFunction:(const struct Function *)arg1 functionIndex:(int)arg2;
- (void)_restoreAPIState;
- (void)_saveAPIState;
- (StateMirrorManager_5097919b *)stateMirrorManager;

@end

