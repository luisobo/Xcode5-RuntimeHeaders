//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@interface XCResourcesBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
}

+ (id)defaultName;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2;
- (void)computeDependenciesInTargetBuildContext:(id)arg1;
- (void)copyResourcesFromResourcesDirAtPath:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)computeDependenciesForBuildFileReference:(id)arg1 inTargetBuildContext:(id)arg2;
- (void)copyResourceFile:(id)arg1 ofType:(id)arg2 toDirectory:(id)arg3 inTargetBuildContext:(id)arg4;

@end

