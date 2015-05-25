//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

#import "DVTTextFindable.h"

@class IDEActivityLogSection, IDESchemeActionRunDestinationRecord, NSArray, NSString;

@interface IDELogDocument : IDEEditorDocument <DVTTextFindable>
{
    IDEActivityLogSection *_activityLog;
    NSArray *_testableSummaries;
    IDESchemeActionRunDestinationRecord *_runDestinationRecord;
}

+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
@property(readonly) IDESchemeActionRunDestinationRecord *runDestinationRecord; // @synthesize runDestinationRecord=_runDestinationRecord;
@property(readonly) NSArray *testableSummaries; // @synthesize testableSummaries=_testableSummaries;
@property(readonly) IDEActivityLogSection *buildLog; // @synthesize buildLog=_activityLog;
- (void).cxx_destruct;
- (void)printDocument:(id)arg1;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (struct _NSRange)searchRangeforStartRange:(struct _NSRange)arg1 backwards:(BOOL)arg2 withinString:(id)arg3;
- (id)searchStringForLocation:(id)arg1;
- (id)findLocationFollowing:(id)arg1 backwards:(BOOL)arg2 passingTestForSection:(CDUnknownBlockType)arg3;
- (id)lastLocationInLog;
- (id)lastIndexPathInSection:(id)arg1 inIndexPath:(id)arg2;
- (id)_iterateStartingWith:(id)arg1 section:(id)arg2 index:(unsigned long long)arg3 backwards:(BOOL)arg4 level:(long long)arg5 messageCount:(unsigned long long)arg6 onRefPath:(BOOL)arg7 passingTest:(CDUnknownBlockType)arg8;
- (id)messageOrSectionForDocumentLocation:(id)arg1;
- (void)refreshTestableSummaries;
- (int)readOnlyStatus;
- (id)displayName;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

