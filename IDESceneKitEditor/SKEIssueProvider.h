/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEIssueProvider.h"

@class DVTDelayedInvocation, DVTNotificationToken, DVTObservingToken, NSMutableSet, NSSet;

@interface SKEIssueProvider : IDEIssueProvider
{
    DVTDelayedInvocation *_batchedUpdateInvocation;
    DVTObservingToken *_openDocumentsChangedToken;
    DVTNotificationToken *_documentChangedToken;
    BOOL _openDocumentsChanged;
    NSSet *_observedDocumentFilePaths;
    NSMutableSet *_changedDocumentFilePaths;
}

- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)performConsistencyCheckForChangedFilePaths:(id)arg1;
- (void)processBatchedChanges:(id)arg1;
- (void)noticeOpenDocumentChanges;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (void)primitiveInvalidate;

@end

