//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTRequestHandler, NSArray, NSMutableArray, NSMutableDictionary, NSRunLoop;

@interface DVTService : NSObject
{
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource *_terminationRunLoopSource;
    NSMutableArray *_adaptors;
    NSMutableDictionary *_requestHandlers;
    BOOL _running;
    int _exitStatus;
    DVTRequestHandler *_defaultRequestHandler;
}

+ (id)service;
@property(getter=isRunning) BOOL running; // @synthesize running=_running;
@property int exitStatus; // @synthesize exitStatus=_exitStatus;
@property(retain) DVTRequestHandler *defaultRequestHandler; // @synthesize defaultRequestHandler=_defaultRequestHandler;
- (void).cxx_destruct;
- (void)_tearDownTermination;
- (void)_setUpTermination;
- (void)exitWithStatus:(int)arg1;
- (void)_mainRunLoop;
- (id)dispatchRequest:(id)arg1;
- (void)run;
- (id)handlerForRequest:(id)arg1;
- (void)removeRequestHandlerForKey:(id)arg1;
- (id)requestHandlerForKey:(id)arg1;
- (void)registerRequestHandler:(id)arg1 forKey:(id)arg2;
- (void)registerAdaptor:(id)arg1;
@property(readonly, copy) NSArray *adaptors;
- (id)init;

@end

