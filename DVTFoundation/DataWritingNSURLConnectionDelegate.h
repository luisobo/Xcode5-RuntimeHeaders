/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileHandle, NSURLResponse;

@interface DataWritingNSURLConnectionDelegate : NSObject
{
    NSURLResponse *_lastResponse;
    unsigned long long _maxLength;
    NSFileHandle *_fileHandle;
    id _errorHandler;
    id _progressHandler;
    id _successHandler;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)initWithMaxLength:(unsigned long long)arg1 fileHandle:(id)arg2 errorHandler:(id)arg3 progressHandler:(void)arg4 successHandler:(id)arg5;

@end

