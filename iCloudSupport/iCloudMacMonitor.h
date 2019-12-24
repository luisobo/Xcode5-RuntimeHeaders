/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCloudSupport/iCloudMonitor.h>

#import "iCloudClientConnectionDelegate-Protocol.h"

@class NSNetService, NSString, iCloudClientConnection;

@interface iCloudMacMonitor : iCloudMonitor <iCloudClientConnectionDelegate>
{
    NSNetService *_service;
    iCloudClientConnection *_connection;
}

+ (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
+ (void)netServiceBrowserDidStopSearch:(id)arg1;
+ (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
+ (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
+ (BOOL)startMonitorServiceOnHost:(id)arg1 error:(id *)arg2;
+ (void)attemptMonitorServiceRestart;
+ (void)stopMonitorForNetService:(id)arg1;
+ (void)startMonitorForNetService:(id)arg1;
+ (void)initiateMonitorServerForServiceCenter:(id)arg1;
- (void).cxx_destruct;
- (id)sendCommand:(id)arg1 usingProcessor:(id)arg2;
- (void)connection:(id)arg1 processInput:(const char *)arg2 length:(unsigned long long)arg3;
- (void)connection:(id)arg1 willCloseWithError:(id)arg2;
- (void)stopConnection;
- (void)startConnection;
- (id)initWithNetService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

