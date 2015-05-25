//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLConnectionDelegate.h"

@class NSCachedURLResponse, NSData, NSInputStream, NSURLConnection, NSURLRequest, NSURLResponse;

@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>

@optional
- (void)connectionDidFinishLoading:(NSURLConnection *)arg1;
- (NSCachedURLResponse *)connection:(NSURLConnection *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2;
- (void)connection:(NSURLConnection *)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (NSInputStream *)connection:(NSURLConnection *)arg1 needNewBodyStream:(NSURLRequest *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (NSURLRequest *)connection:(NSURLConnection *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

