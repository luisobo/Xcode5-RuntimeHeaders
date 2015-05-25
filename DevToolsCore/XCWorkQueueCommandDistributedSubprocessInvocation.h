//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCWorkQueueCommandSubprocessInvocation.h>

@class NSData, NSString;

@interface XCWorkQueueCommandDistributedSubprocessInvocation : XCWorkQueueCommandSubprocessInvocation
{
    NSString *_volunteerDisplayName;
    int _recruiterFD;
    BOOL _sentCommand;
    NSData *_writeBuffer;
    int _writeBufferLength;
    int _writeBufferOffset;
    char _readBuffer[8192];
    int _messageLengthRemaining;
    BOOL _connected;
    struct sockaddr_un _un_addr;
}

- (void)killSubprocess;
- (void)handleInputFileDescriptorActivity;
- (void)handleOutputFileDescriptorActivity;
- (void)reapExitedSubprocess;
- (BOOL)launchSubprocessWithArguments:(const char **)arg1 environment:(const char **)arg2 workingDirectory:(const char *)arg3;
- (id)volunteerDisplayName;
- (void)startWriting;
- (BOOL)hasBeenSentToVolunteer;
- (BOOL)isRunning;
- (int)outputFileDescriptor;
- (int)inputFileDescriptor;
- (void)finalize;
- (void)dealloc;
- (id)initWithSlotNumber:(unsigned long long)arg1 workQueueOperation:(id)arg2 workQueueCommand:(id)arg3 arguments:(id)arg4 environmentAssignments:(id)arg5 workingDirectoryPath:(id)arg6;

@end

