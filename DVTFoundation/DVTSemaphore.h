//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

@interface DVTSemaphore : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)semaphoreWithCount:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)waitWithTimeout:(double)arg1;
- (void)wait;
- (BOOL)signal;
- (void)dealloc;
- (id)initWithCount:(long long)arg1;
- (id)init;

@end

