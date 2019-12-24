/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDETestableIssueProvider, NSMutableDictionary, NSMutableSet, NSString;

@interface _IDETestableState : NSObject <DVTInvalidation>
{
    NSMutableSet *_testableObservers;
    NSMutableDictionary *_testResults;
    id <IDETestable> _testable;
    IDETestableIssueProvider *_issueProvider;
}

+ (void)initialize;
@property(readonly) IDETestableIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(readonly) __weak id <IDETestable> testable; // @synthesize testable=_testable;
- (void).cxx_destruct;
- (unsigned long long)_stateOfTest:(id)arg1;
- (unsigned long long)_testableStateForTestable:(id)arg1;
- (unsigned long long)_compositeStateOfSubTests:(id)arg1;
- (void)_clearAllResults;
- (void)_addAllTestsForTestable:(id)arg1 intoSet:(id)arg2;
- (void)_processNewTestResults:(id)arg1;
- (void)_clearCachedResultsForTest:(id)arg1 andNoteParentIn:(id)arg2;
- (void)_notifyWorkspaceReferencedTestableChanged;
- (void)_notifyTestableChanged:(id)arg1;
- (BOOL)_hasObservers;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)primitiveInvalidate;
- (id)_initWithTestable:(id)arg1 andWorkspace:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

