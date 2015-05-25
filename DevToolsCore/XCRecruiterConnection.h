//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSMutableData, NSMutableDictionary, NSString;

@interface XCRecruiterConnection : NSObject
{
    NSFileHandle *_fileHandle;
    NSString *_socketPath;
    NSMutableData *_buf;
    NSMutableDictionary *_requests;
    BOOL _ephemeral;
    BOOL _connecting;
    int _sockFD;
    struct sockaddr_un _un_addr;
}

- (void)createAndSendMessage:(id)arg1 withContentDictionary:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)handleRecruiterMessage:(id)arg1;
- (void)dataAvailable:(id)arg1;
- (void)closeConnection;
- (void)checkIn;
- (BOOL)connected;
- (int)connect;
- (int)fileDescriptor;
- (void)setEphemeral:(BOOL)arg1;
- (BOOL)ephemeral;
- (void)dealloc;
- (id)init;

@end

