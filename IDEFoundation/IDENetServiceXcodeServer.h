/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEXcodeServer.h>

#import "NSNetServiceDelegate-Protocol.h"

@class NSNetService, NSString;

@interface IDENetServiceXcodeServer : IDEXcodeServer <NSNetServiceDelegate>
{
    NSString *_connectionAddress;
    unsigned long long _portNumber;
    NSNetService *_netService;
}

@property(readonly, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (void).cxx_destruct;
- (id)keychainServiceName;
- (void)setPortNumber:(unsigned long long)arg1;
- (unsigned long long)portNumber;
- (BOOL)canEditConnectionAddress;
- (void)setConnectionAddress:(id)arg1;
- (id)connectionAddress;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)ide_addPropertyListRepresentationToDictionary:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithNetServiceDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (void)_netServiceCommonInit;
- (void)resolveService;

@end

