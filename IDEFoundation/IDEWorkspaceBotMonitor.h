/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, IDEBotSCMDefinition, IDEWorkspace, NSArray, NSMapTable, NSMutableArray, NSString;

@interface IDEWorkspaceBotMonitor : NSObject <DVTInvalidation>
{
    DVTObservingToken *_sourceControlWorkspaceMonitorScanningObservingToken;
    DVTObservingToken *_sourceControlWorkspaceMonitorWorkingTreesObservingToken;
    DVTObservingToken *_scmDefinitionObservingToken;
    DVTObservingToken *_serverManagerObservingToken;
    NSMapTable *_serverToObservingTokensMap;
    NSMutableArray *_bots;
    IDEWorkspace *_workspace;
    IDEBotSCMDefinition *_workspaceBotSCMDefinition;
}

+ (id)_workspaceBotMonitorLogAspect;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *bots; // @synthesize bots=_bots;
@property(readonly, nonatomic) IDEBotSCMDefinition *workspaceBotSCMDefinition; // @synthesize workspaceBotSCMDefinition=_workspaceBotSCMDefinition;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)_findBotAndExecuteBehavior:(id)arg1;
- (void)_updateBotsFromServers:(id)arg1;
- (void)_stopObservingServers;
- (void)_startObservingServers;
- (void)_setUpSCMDefinition;
- (void)_workingTreeDidChange:(id)arg1;
- (void)_startObservingWorkingTrees;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

