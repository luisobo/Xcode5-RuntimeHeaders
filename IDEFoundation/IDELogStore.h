//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSArray, NSMutableArray, NSString;

@interface IDELogStore : NSObject <DVTInvalidation>
{
    NSMutableArray *_logRecords;
}

+ (id)onDiskOrInMemoryLogStoreInWorkspaceArena:(id)arg1 prefix:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (id)testableSummariesPlistFilePathForActivityLogSection:(id)arg1;
- (id)logRecordWithURL:(id)arg1;
- (id)addLog:(id)arg1 entityIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *logRecords; // @dynamic logRecords;
@property(readonly) NSMutableArray *mutableLogRecords; // @dynamic mutableLogRecords;
@property BOOL preserveOldLogs; // @dynamic preserveOldLogs;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

