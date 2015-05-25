//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeAction.h>

@class DVTMapTable, DVTObservingToken, IDEBuildActionEntry, NSArray, NSMutableArray, NSString;

@interface IDEBuildSchemeAction : IDESchemeAction
{
    NSMutableArray *_legacyBuildableReferences;
    BOOL _parallelizeBuildables;
    BOOL _buildImplicitDependencies;
    NSString *_legacyBuildConfiguration;
    NSMutableArray *_buildActionEntries;
    IDEBuildActionEntry *_launchRunnableEntry;
    IDEBuildActionEntry *_profileRunnableEntry;
    NSMutableArray *_testBuildableEntries;
    BOOL _buildablesDidChangeNotificationEnabled;
    BOOL _isBuildablesDidChangeNotificationPending;
    DVTMapTable *_overridingBuildPropertiesForBuildable;
    DVTObservingToken *_launchActionRunnableObservingToken;
    DVTObservingToken *_profileActionRunnableObservingToken;
    DVTObservingToken *_testBuildableReferencesObservingToken;
    DVTObservingToken *_testHostBuildableReferencesObservingToken;
}

+ (id)_uniquedBuildablesForBuildables:(id)arg1 includingDependencies:(BOOL)arg2;
+ (id)buildablesForTestingSpecifiers:(id)arg1 includingDependencies:(BOOL)arg2;
+ (id)keyPathsForValuesAffectingAvailableBuildConfigurations;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)initialize;
@property(nonatomic, getter=isBuildablesDidChangeNotificationEnabled) BOOL buildablesDidChangeNotificationEnabled; // @synthesize buildablesDidChangeNotificationEnabled=_buildablesDidChangeNotificationEnabled;
@property BOOL buildImplicitDependencies; // @synthesize buildImplicitDependencies=_buildImplicitDependencies;
@property BOOL parallelizeBuildables; // @synthesize parallelizeBuildables=_parallelizeBuildables;
- (void).cxx_destruct;
- (void)setBuildConfigurationFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildRoles:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildActionEntries:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildableProductReferences:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildImplicitDependenciesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setParallelizeBuildablesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)overridingBuildPropertiesForBuildable:(id)arg1;
- (void)setOverridingBuildProperties:(id)arg1 forBuildable:(id)arg2;
- (void)postBuildablesDidChangeNotification;
- (CDUnknownBlockType)_matcherBlockForCommand:(id)arg1;
- (id)buildablesByConfiguration;
- (id)buildableReferencesForSchemeCommand:(id)arg1;
- (id)buildableReferences;
- (id)extensionTypesOfBuildablesForSchemeCommand:(id)arg1 includingDependencies:(BOOL)arg2;
- (id)buildablesForSchemeCommand:(id)arg1 includingDependencies:(BOOL)arg2;
- (id)buildablesForSchemeCommand:(id)arg1 testingSpecifiers:(id)arg2 includingDependencies:(BOOL)arg3;
- (id)buildablesForAllSchemeCommandsIncludingDependencies:(BOOL)arg1;
- (id)_buildablesIncludingDependencies:(BOOL)arg1 restrictToSchemeCommand:(id)arg2;
- (id)buildableReferenceForBuildable:(id)arg1;
@property(readonly) NSArray *availableBuildConfigurations;
- (id)buildDirectoryPathsForBuildParameters:(id)arg1 schemeCommand:(id)arg2;
- (void)moveBuildActionEntriesAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)addBuildActionEntryForBuildableReference:(id)arg1;
- (void)removeBuildActionEntryAtIndex:(unsigned long long)arg1;
- (void)_setupImplicitBuildActionEntries;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (id)cleanOperationForExecutionEnvironment:(id)arg1 orderedBuildables:(id)arg2 buildConfiguration:(id)arg3 buildLog:(id)arg4 overridingProperties:(id)arg5 activeRunDestination:(id)arg6 activeArchitecture:(id)arg7 schemeActionRecord:(id)arg8 error:(id *)arg9;
- (id)buildOperationForExecutionEnvironment:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 schemeCommand:(id)arg4 filePath:(id)arg5 buildConfiguration:(id)arg6 buildLog:(id)arg7 overridingProperties:(id)arg8 activeRunDestination:(id)arg9 activeArchitecture:(id)arg10 dontActuallyRunCommands:(BOOL)arg11 restorePersistedBuildResults:(BOOL)arg12 schemeActionRecord:(id)arg13 overridingBuildables:(id)arg14 error:(id *)arg15;
- (id)overridingBuildSettingsForSchemeCommand:(id)arg1;
- (id)buildFolderPathForPGO;
- (void)setRunContext:(id)arg1;
- (void)primitiveInvalidate;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly) NSArray *buildActionEntries; // @dynamic buildActionEntries;
@property(readonly) NSMutableArray *mutableBuildActionEntries; // @dynamic mutableBuildActionEntries;

@end

