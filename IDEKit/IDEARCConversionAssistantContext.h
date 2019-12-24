/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEMigrationAssistantContext.h>

@class DVTMapTable, NSArray, NSMutableArray;

@interface IDEARCConversionAssistantContext : IDEMigrationAssistantContext
{
    NSMutableArray *_targets;
    NSMutableArray *_selectedTargets;
    unsigned long long _currentConversionStage;
    long long _numIncompatibilityErrors;
    BOOL _wasContinueBuildingAfterErrors;
    BOOL _shouldRemoveContinueBuildingAfterErrors;
    DVTMapTable *_convertedFilePathForOriginalFilePathMapTable;
}

+ (void)initialize;
@property unsigned long long currentConversionStage; // @synthesize currentConversionStage=_currentConversionStage;
@property long long numberOfIncompatibilityErrors; // @synthesize numberOfIncompatibilityErrors=_numIncompatibilityErrors;
@property(readonly, copy) NSArray *targets; // @synthesize targets=_targets;
- (void).cxx_destruct;
- (id)migrateFolderForBuildable:(id)arg1;
- (id)convertedFilePathForOriginalFilePath:(id)arg1;
- (unsigned long long)numberOfConvertedFilePaths;
- (id)_convertedFilePathForOriginalFilePathMapTable;
- (void)endPerformingContextTask;
- (void)beginPerformingContextTask;
- (void)setWorkspaceTabController:(id)arg1;
- (id)buildActionEntries;
- (id)runPhase;
- (id)runContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSMutableArray *mutableSelectedTargets; // @dynamic mutableSelectedTargets;
@property(copy) NSArray *selectedTargets; // @dynamic selectedTargets;

@end

