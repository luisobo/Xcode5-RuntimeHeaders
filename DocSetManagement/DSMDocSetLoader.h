/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DTFileSystemEventStreamDelegate-Protocol.h"

@class DTFileSystemEventStream, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface DSMDocSetLoader : NSObject <DTFileSystemEventStreamDelegate>
{
    NSMutableArray *m_loadedDocSets;
    NSMutableDictionary *m_docSetGroups;
    NSMutableArray *m_docSetRecords;
    NSMutableDictionary *m_sdkAndPlatformAdvertisedDocSets;
    BOOL m_testingMode;
    id <DSMSubscriptionUpdateProtocol> m_subscriptionUpdateDelegate;
    DTFileSystemEventStream *m_standardDocSetLocationsFSEventStream;
}

+ (BOOL)runningStandalone;
+ (id)sharedDocSetLoader;
@property(retain, nonatomic) DTFileSystemEventStream *standardDocSetLocationsFSEventStream; // @synthesize standardDocSetLocationsFSEventStream=m_standardDocSetLocationsFSEventStream;
@property(nonatomic) id subscriptionUpdateDelegate; // @synthesize subscriptionUpdateDelegate=m_subscriptionUpdateDelegate;
@property(retain, nonatomic) NSMutableDictionary *sdkAndPlatformAdvertisedDocSets; // @synthesize sdkAndPlatformAdvertisedDocSets=m_sdkAndPlatformAdvertisedDocSets;
@property(retain, nonatomic) NSMutableArray *docSetRecords; // @synthesize docSetRecords=m_docSetRecords;
@property(retain, nonatomic) NSMutableDictionary *docSetGroups; // @synthesize docSetGroups=m_docSetGroups;
@property(retain, nonatomic) NSMutableArray *loadedDocSets; // @synthesize loadedDocSets=m_loadedDocSets;
@property(nonatomic) BOOL testingMode; // @synthesize testingMode=m_testingMode;
- (id)xcodeHomePageURL;
- (id)xcodeReleaseNotesNode;
- (id)xcodeUserGuideNode;
- (id)xcodeGuidesLandingPageNode;
- (BOOL)fileExistsAtPath:(id)arg1;
- (id)quickLoadDocSetWithXcodeReference;
- (id)devToolsDir;
- (id)docSetWithXcodeReference;
- (id)docSetWithAppleCoreReference;
- (id)docSetWithPackageID:(id)arg1;
- (id)_appleDocSetWithPackageID:(id)arg1;
- (id)loadedDocSetMatchingBundleIdentifier:(id)arg1;
- (id)allLanguagesFromLoadedDocSets;
- (BOOL)isSearchingEnabledForDocSetRecord:(id)arg1;
- (BOOL)isSearchingEnabledForDocSetID:(id)arg1;
- (id)persistedDocSetRecordsForSearching;
- (id)docSetsEnabledForSearching;
- (void)persistEnabledStateOfDocSetRecord:(id)arg1;
- (id)createDocSetRecordForDocSet:(id)arg1;
- (id)fileModificationDateForPath:(id)arg1;
- (id)cachedDocSetRecordForDocSet:(id)arg1;
- (id)cachedDocSetRecordForDocSetIdentifier:(id)arg1;
- (void)addDocSetRecord:(id)arg1;
- (void)removeDocSetRecordForDocSet:(id)arg1;
- (void)scanForDocSetsInDirectories:(id)arg1;
- (BOOL)docSetIsValidForThisVersionOfXcode:(id)arg1;
- (CDStruct_aac1954a)runningXcodeVersion;
- (void)unloadAllGroups;
- (void)unloadGroup:(id)arg1;
- (void)unloadAllDocSets;
- (void)removeDocSet:(id)arg1;
- (void)_registerAndConfigureFSEventStreamForDocSet:(id)arg1;
- (void)docSetUpdateFinishedInstalling:(id)arg1;
- (void)refreshSearchResultsForUpdate:(id)arg1;
- (void)removeStaleDocSetsForUpdate:(id)arg1;
- (id)docSetsMatchingIdentifier:(id)arg1;
- (void)removeDocSets:(id)arg1;
- (void)postRemovedDocSetNotification:(id)arg1;
- (void)postWillRemoveDocSetNotification:(id)arg1;
- (void)postAddedDocSetNotification:(id)arg1 inGroup:(id)arg2;
- (void)findAndLoadDocSetsInStandardPaths;
- (void)fileSystemEventStream:(id)arg1 notedChangeAtPath:(id)arg2 scanRecursively:(BOOL)arg3;
- (void)fileSystemEventStream:(id)arg1 notedChangeOfRootPath:(id)arg2;
- (void)createFileSystemEventStreamForPaths:(id)arg1;
- (void)_configureFSEventStreamForDocSet:(id)arg1;
- (void)processFileSystemEventStreamChangeAtPath:(id)arg1;
- (void)_loadNewDocSetsInChangedPaths:(id)arg1;
- (void)_reloadModifiedDocSetsInPaths:(id)arg1;
- (BOOL)_docSetModificationDateChanged:(id)arg1;
- (id)_docSetsRemovedFromPath:(id)arg1;
- (id)_docSetPathsInPath:(id)arg1;
- (BOOL)_pathIsADocSetBundle:(id)arg1;
- (void)_loadSubscribedGroups;
- (void)loadGroupsFromSDKsAndPlatforms;
- (void)_preloadSDKs;
- (id)loadDocSetAtPath:(id)arg1;
- (void)_registerDocSet:(id)arg1;
- (id)_registerGroupForDocSet:(id)arg1;
- (id)_registeredGroupForFeedURLString:(id)arg1;
- (id)registeredGroupForDocSet:(id)arg1;
- (id)_docSetGroupFromSDKForName:(id)arg1 subscribe:(BOOL)arg2 feedURLString:(id)arg3;
- (id)docSetGroupForFeedURLString:(id)arg1 subscribe:(BOOL)arg2 groupName:(id)arg3 error:(id *)arg4;
- (id)docSetGroupForFeedURLString:(id)arg1 subscribe:(BOOL)arg2 error:(id *)arg3;
- (void)_registerGroup:(id)arg1 withFeedURL:(id)arg2;
- (void)_registerGroup:(id)arg1 forDocSet:(id)arg2;
- (void)_stopObservingChangesToGroup:(id)arg1;
- (void)_configureObservationOfChangesToGroup:(id)arg1;
- (void)_docSetGroupChanged:(id)arg1;
- (void)_subscriptionDelegateNotifyChangesToGroup:(id)arg1 updateItemsModified:(id)arg2;
- (void)_subscriptionDelegateNotifyChangesToGroup:(id)arg1 updateItemsAdded:(id)arg2;
- (void)_subscriptionDelegateNotifyChangesToGroup:(id)arg1 updateItemsRemoved:(id)arg2;
@property(readonly, nonatomic) NSArray *loadedDocSetsSortedByName;
- (id)feedIdentifierForDocSet:(id)arg1;
- (void)_processCheckAndInstallDefault;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_observeCheckAndInstallDefault;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

