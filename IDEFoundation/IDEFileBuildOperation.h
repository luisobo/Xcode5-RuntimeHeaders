/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEBuildOperation.h>

@class DVTFilePath;

@interface IDEFileBuildOperation : IDEBuildOperation
{
    DVTFilePath *_filePath;
}

@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)addOperationsForBuildables;
- (id)_buildableWhichIncludesFilePath:(id)arg1 startingWithBuildable:(id)arg2 recursionDetectionSet:(id)arg3;
- (id)initWithBuildOperationDescription:(id)arg1 purpose:(int)arg2 buildCommand:(int)arg3 schemeCommand:(id)arg4 configurationName:(id)arg5 buildables:(id)arg6 buildLog:(id)arg7 executionEnvironment:(id)arg8 overridingProperties:(id)arg9 activeRunDestination:(id)arg10 activeArchitecture:(id)arg11 parallelizeBuildables:(BOOL)arg12 dontActuallyRunCommands:(BOOL)arg13 buildImplicitDependencies:(BOOL)arg14 restorePersistedBuildResults:(BOOL)arg15;
- (id)initWithBuildOperationDescription:(id)arg1 purpose:(int)arg2 buildCommand:(int)arg3 schemeCommand:(id)arg4 configurationName:(id)arg5 buildables:(id)arg6 filePath:(id)arg7 buildLog:(id)arg8 executionEnvironment:(id)arg9 overridingProperties:(id)arg10 activeRunDestination:(id)arg11 activeArchitecture:(id)arg12 considerImplicitDependencies:(BOOL)arg13 restorePersistedBuildResults:(BOOL)arg14 schemeIdentifier:(id)arg15 schemeActionRecord:(id)arg16;

@end

