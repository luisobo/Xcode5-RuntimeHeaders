//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DSATokenIndex, NSConditionLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface DSABackgroundThreadQueue : NSObject
{
    DSATokenIndex *_tokenIndex;
    NSMutableArray *_queue;
    NSConditionLock *_queueState;
    BOOL _stopProcessing;
}

@property(retain) DSATokenIndex *tokenIndex; // @synthesize tokenIndex=_tokenIndex;
- (void)invalidate;
- (void)addQueuedSelector:(SEL)arg1 toTarget:(id)arg2;
- (void)_wakeUpBackgroundThread;
- (void)dealloc;
- (id)initWithTokenIndex:(id)arg1;
- (void)processQueue;

@end

