/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTWeakInterposer, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface _DVTFilePathAssoc : NSObject
{
    _DVTFilePathAssoc *next;
    NSString *role;
    DVTWeakInterposer *_object_dvtWeakInterposer;
    BOOL recursiveObserver;
    id block;
    NSObject<OS_dispatch_queue> *dispatchQueue;
    NSOperationQueue *operationQueue;
}

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithRole:(id)arg1 object:(id)arg2 observingDidChangeRecursively:(BOOL)arg3 onOperationQueue:(id)arg4 block:(id)arg5;
- (id)initWithRole:(id)arg1 object:(id)arg2 observingDidChangeRecursively:(BOOL)arg3 onDispatchQueue:(id)arg4 block:(id)arg5;
@property __weak id object;

@end

