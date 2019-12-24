/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface XCSFakeObjects : NSObject
{
}

+ (id)generateFakeHTTPRequest;
+ (id)generateFakePortalTeam;
+ (id)generateFakeArchive;
+ (id)generateFakeProduct;
+ (id)generateFakeTriggerLog;
+ (id)generateFakeXcodebuildLog;
+ (id)generateFakeBuildServiceLog;
+ (id)generateFakeSCMLog;
+ (id)generateFakeIntegrationWithBot:(id)arg1 integrationNumber:(unsigned long long)arg2;
+ (id)generateFakeIntegrationWithBot:(id)arg1;
+ (id)generateFakeIntegration;
+ (id)generateFakeCommit;
+ (id)generateFakeCommitWithContributor:(id)arg1;
+ (id)generateFakeContributorWithName:(id)arg1 displayName:(id)arg2 emails:(id)arg3;
+ (id)generateFakeContributor;
+ (id)generateFakeCommitChangeFilePath;
+ (id)generateFakeIntegrationIssueDiff;
+ (id)generateFakeIntegrationIssue;
+ (id)generateFakeBuildResultSummary;
+ (id)generateFakeTestPerfMetric;
+ (id)generateFakeTest;
+ (id)generateFakeTestPlaceholder;
+ (id)generateFakeTestDeviceWithID:(id)arg1;
+ (id)generateFakeTestDevice;
+ (id)generateFakeDevice;
+ (id)generateFakeDeviceWithID:(id)arg1;
+ (id)fakeDeviceUDIDWithLength:(long long)arg1;
+ (id)fakeMacDeviceUDID;
+ (id)fakeiOSDeviceUDID;
+ (id)generateFakeBot;
+ (id)generateFakeBotConfiguration;
+ (id)generateFakeUnauthenticatedSourceControlBlueprint;
+ (id)generateFakeSourceControlBlueprint;
+ (id)generateFakeUnauthenticatedSourceControlBlueprintContents;
+ (id)generateFakeSourceControlBlueprintContents;
+ (id)generateFakeTrigger;
+ (id)generateFakeTriggerEmailConfiguration;
+ (id)generateFakeTriggerConditions;
+ (id)generateFakeBotGroup;
+ (id)stringWithGenerationCount;
+ (void)setGenerationCountForDevice:(unsigned long long)arg1 target:(unsigned long long)arg2 class:(unsigned long long)arg3 test:(unsigned long long)arg4 perfMetric:(unsigned long long)arg5;

@end

