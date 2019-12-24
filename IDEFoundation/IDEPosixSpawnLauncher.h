/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDERunOperationPathWorker.h>

@class DVTDispatchLock;

@interface IDEPosixSpawnLauncher : IDERunOperationPathWorker
{
    void *_file_actions;
    BOOL _startSuspended;
    BOOL _terminateCalled;
    BOOL _targetReallyDead;
    DVTDispatchLock *_atomizingLock;
}

@property BOOL startSuspended; // @synthesize startSuspended=_startSuspended;
- (void).cxx_destruct;
- (void)terminate;
- (void)start;
- (BOOL)_willUseExistingProcess:(id)arg1;
- (void)launchSessionDidRegisterForXPCDebugging:(id)arg1;
- (void)_setPIDOnMainThread:(int)arg1;
- (void)_forceQuit:(id)arg1;
- (BOOL)_convertCmdArgs:(id)arg1 intoPtrArray:(const char ***)arg2 andEnvVars:(id)arg3 intoPtrArray:(const char ***)arg4 andReturnStandardizedPath:(const char **)arg5 error:(id *)arg6;
- (void)_waitForChildExit;
- (void *)_setupPosixSpawnAttributesAndPTY:(id *)arg1;
- (void)dealloc;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;

@end

