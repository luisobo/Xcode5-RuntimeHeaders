//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSModel.h>

@class NSString, PBXLSDynamicLinkerImageController, PBXLSThread;

@interface PBXLSProcess : PBXLSModel
{
    PBXLSThread *_currentThread;
    BOOL _isRunning;
    BOOL _hasExited;
    int _exitStatus;
    PBXLSDynamicLinkerImageController *_imageController;
    int _evaluationSafetyStatus;
    NSString *_evaluationSafetyErrorMsg;
}

- (void)setEvaluationSafetyErrorMsg:(id)arg1;
- (void)resetEvaluationSafetyStatus;
- (id)evaluationSafetyErrorMsg;
- (int)evaluationSafetyStatus;
- (void)unconfigureDynamicLinkerImageController;
- (id)dynamicLinkerImageController;
- (id)threadWithHandle:(unsigned long long)arg1;
- (id)threads;
- (id)nonRunningThreads;
- (id)_threadsOfType:(int)arg1;
- (id)threadGroupWithName:(id)arg1;
- (void)threadsDidChange;
- (void)threadsWillChange;
- (id)threadGroups;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)isRunning;
- (BOOL)threadPopUpIsEnabled;
- (void)debuggerDidUpdateThreads:(id)arg1;
- (int)exitStatus;
- (BOOL)hasExited;
- (void)debugger:(id)arg1 setHasExitedWithStatus:(int)arg2;
- (void)debuggerSetIsRunning:(id)arg1;
- (id)currentThread;
- (void)debugger:(id)arg1 setCurrentThread:(id)arg2;
- (void)debugger:(id)arg1 removeThreadGroup:(id)arg2;
- (void)debugger:(id)arg1 addThreadGroup:(id)arg2;
- (void)debuggerWillUpdateThreads:(id)arg1;
- (void)dealloc;
- (id)initWithDebugger:(id)arg1;

@end

