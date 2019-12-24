/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEDebuggingAddition-Protocol.h"

@class DVTStackBacktrace, IDELaunchSession, NSString;

@interface iCloudDebuggingAddition : NSObject <IDEDebuggingAddition>
{
    IDELaunchSession *_launchSession;
    NSString *_identifier;
}

+ (void)initialize;
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

