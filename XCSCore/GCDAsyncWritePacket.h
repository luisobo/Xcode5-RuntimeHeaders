/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface GCDAsyncWritePacket : NSObject
{
    NSData *buffer;
    unsigned long long bytesDone;
    long long tag;
    double timeout;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3;

@end

