/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface NSData (DevToolsFoundationAdditions)
+ (id)dataWithFirstBytes:(unsigned long long)arg1 ofFile:(id)arg2;
- (void)writeToFile:(id)arg1 atomically:(BOOL)arg2 queue:(id)arg3 completionBlock:(id)arg4;
- (id)dataWithMD5Digest;
@end

