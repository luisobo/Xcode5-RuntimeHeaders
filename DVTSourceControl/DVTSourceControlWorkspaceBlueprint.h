/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTSourceControlIdentifiable-Protocol.h"
#import "DVTSourceControlSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class DVTSourceControlRemoteRepository, NSMapTable, NSOperationQueue, NSOrderedSet, NSString;

@interface DVTSourceControlWorkspaceBlueprint : NSObject <DVTSourceControlIdentifiable, DVTSourceControlSerializable, NSCopying>
{
    NSOperationQueue *_blueprintOperationQueue;
    BOOL _favorite;
    NSString *__id;
    DVTSourceControlRemoteRepository *_primaryRemoteRepository;
    NSString *_relativePathToProject;
    NSOrderedSet *_remoteRepositories;
    NSMapTable *_workingCopyStates;
    NSMapTable *_workingCopyPaths;
    NSMapTable *_workingCopyRepositoryLocations;
    NSMapTable *_locations;
    NSString *_name;
}

@property(getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSMapTable *locations; // @synthesize locations=_locations;
@property(retain) NSMapTable *workingCopyRepositoryLocations; // @synthesize workingCopyRepositoryLocations=_workingCopyRepositoryLocations;
@property(retain) NSMapTable *workingCopyPaths; // @synthesize workingCopyPaths=_workingCopyPaths;
@property(retain) NSMapTable *workingCopyStates; // @synthesize workingCopyStates=_workingCopyStates;
@property(retain) NSOrderedSet *remoteRepositories; // @synthesize remoteRepositories=_remoteRepositories;
@property(retain) NSString *relativePathToProject; // @synthesize relativePathToProject=_relativePathToProject;
@property(retain) DVTSourceControlRemoteRepository *primaryRemoteRepository; // @synthesize primaryRemoteRepository=_primaryRemoteRepository;
@property(copy) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentationWithOptions:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPrimaryRemoteRepository:(id)arg1 relativePathToProject:(id)arg2 remoteRepositories:(id)arg3 workingCopyStates:(id)arg4 workingCopyPaths:(id)arg5 workingCopyRepositoryLocations:(id)arg6 locations:(id)arg7 name:(id)arg8 favorite:(BOOL)arg9;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeWithBlueprint:(id)arg1;
- (id)_repositoryLikeRepository:(id)arg1 inBlueprint:(id)arg2;
- (id)repositoryLikeRepository:(id)arg1;
- (id)repositoryForOrigin:(id)arg1;
- (id)_sortedRepositoriesFromSet:(id)arg1;
- (id)init;
- (id)checkForUpdatesWithCompletionBlock:(id)arg1;
- (id)validateAuthenticationWithCompletionBlock:(id)arg1;
- (id)workspaceForWorkingCopiesCreatedAtURL:(id)arg1 completionBlock:(id)arg2;
- (id)createWorkingCopiesAtURL:(id)arg1 progressBlock:(id)arg2 completionBlock:(void)arg3;
@property(readonly) NSMapTable *revisions;
- (id)_sortedRemoteRepositoriesWithExpandedPaths:(id)arg1;
- (id)_expandedWorkingCopyPathsFromURL:(id)arg1;
@property(readonly) NSString *projectPath;
- (BOOL)_isValid;
- (id)__id;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

