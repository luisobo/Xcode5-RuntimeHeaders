//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTModelTreeNode.h"

@class IDESourceControlRevision, IDESourceControlTree, IDESourceControlTreeGroup, NSArray, NSMutableDictionary, NSString;

@interface IDESourceControlTreeItem : DVTModelTreeNode
{
    int _sourceControlLocalStatus;
    int _sourceControlServerStatus;
    unsigned long long _conflictStateForUpdateOrMerge;
    IDESourceControlRevision *_headRevision;
    IDESourceControlRevision *_baseRevision;
    IDESourceControlRevision *_currentRevision;
    NSMutableDictionary *_revisions;
    NSString *_name;
    NSString *_pathString;
    unsigned long long _state;
}

+ (BOOL)automaticallyNotifiesObserversOfCurrentRevision;
+ (id)_revisionLock;
+ (void)initialize;
@property unsigned long long conflictStateForUpdateOrMerge; // @synthesize conflictStateForUpdateOrMerge=_conflictStateForUpdateOrMerge;
@property int sourceControlServerStatus; // @synthesize sourceControlServerStatus=_sourceControlServerStatus;
@property int sourceControlLocalStatus; // @synthesize sourceControlLocalStatus=_sourceControlLocalStatus;
@property unsigned long long state; // @synthesize state=_state;
@property(readonly) NSString *pathString; // @synthesize pathString=_pathString;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)exportToFileURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)clearAllRevisions;
- (id)revisionsWithStartingRevision:(id)arg1 endingRevision:(id)arg2 limit:(unsigned long long)arg3 branch:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(readonly) NSArray *revisions;
- (id)revisionsDictionary;
- (void)addRevision:(id)arg1;
- (void)clearCurrentRevision;
- (id)currentRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setCurrentRevision:(id)arg1;
@property(readonly) IDESourceControlRevision *currentRevision;
- (int)aggregateSourceControlServerStatus;
- (int)aggregateSourceControlLocalStatus;
- (id)baseRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)headRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setBASERevision:(id)arg1;
- (void)setHEADRevision:(id)arg1;
- (id)description;
- (id)ideModelObjectTypeIdentifier;
- (void)repositoryURLStringAtBranch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSString *repositoryURLString;
- (void)_setPathString:(id)arg1;
- (void)updateFileReferences:(id)arg1 withFilePaths:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithPathString:(id)arg1;

// Remaining properties
@property(readonly) IDESourceControlTreeGroup *parentGroup; // @dynamic parentGroup;
@property(readonly) IDESourceControlTree *sourceTree; // @dynamic sourceTree;

@end

