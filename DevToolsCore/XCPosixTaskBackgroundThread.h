/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock, NSMutableArray, XCPosixTask;

@interface XCPosixTaskBackgroundThread : NSObject
{
    int fd;
    BOOL threadRunning;
    NSMutableArray *dataQueue;
    NSConditionLock *lock;
    XCPosixTask *_task;
}

- (void)shutdownQueue;
- (BOOL)queueHasData;
- (id)dequeueData:(BOOL)arg1;
- (BOOL)enqueueData:(id)arg1;
- (void)waitForBackgroundThreadExit;
- (void)stopBackgroundThread;
- (void)startBackgroundThread;
- (void)notifyBackgroundThreadExited;
- (void)backgroundThread:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1 task:(id)arg2;

@end

