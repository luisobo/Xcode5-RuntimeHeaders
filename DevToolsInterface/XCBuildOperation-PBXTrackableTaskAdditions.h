/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XCBuildOperation.h"

#import "PBXTrackableTask-Protocol.h"

@class NSString;

@interface XCBuildOperation (PBXTrackableTaskAdditions) <PBXTrackableTask>
- (id)taskBadge;
- (id)taskDescriptionString;
- (id)taskDisplayString;
- (id)taskIdentifier;
- (BOOL)taskCanBeStoppedManually;
- (BOOL)taskRequiresIntervention;
- (BOOL)taskStopRunning;
- (int)taskProgressType;
- (float)taskPercentComplete;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

