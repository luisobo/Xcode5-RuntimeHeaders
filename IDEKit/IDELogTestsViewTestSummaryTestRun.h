/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDESharedTests_TestRun-Protocol.h"

@class IDESchemeActionRunDestinationRecord, IDESchemeActionsInvocationRecord, NSArray, NSImage, NSString;

@interface IDELogTestsViewTestSummaryTestRun : NSObject <IDESharedTests_TestRun>
{
    NSString *_ide_sharedTests_testName;
    NSString *_ide_sharedTests_testClassName;
    id <IDESharedTests_Device> _ide_sharedTests_testedDevice;
    unsigned long long _ide_sharedTests_testSummaryStatus;
    NSString *_ide_sharedTests_UUID;
    NSArray *_ide_sharedTests_failureSummaries;
    NSArray *_ide_sharedTests_performanceMetrics;
    IDESchemeActionRunDestinationRecord *_ide_sharedTests_runDestinationRecord;
}

@property(retain, nonatomic) IDESchemeActionRunDestinationRecord *ide_sharedTests_runDestinationRecord; // @synthesize ide_sharedTests_runDestinationRecord=_ide_sharedTests_runDestinationRecord;
@property(copy, nonatomic) NSArray *ide_sharedTests_performanceMetrics; // @synthesize ide_sharedTests_performanceMetrics=_ide_sharedTests_performanceMetrics;
@property(copy, nonatomic) NSArray *ide_sharedTests_failureSummaries; // @synthesize ide_sharedTests_failureSummaries=_ide_sharedTests_failureSummaries;
@property(copy, nonatomic) NSString *ide_sharedTests_UUID; // @synthesize ide_sharedTests_UUID=_ide_sharedTests_UUID;
@property(nonatomic) unsigned long long ide_sharedTests_testSummaryStatus; // @synthesize ide_sharedTests_testSummaryStatus=_ide_sharedTests_testSummaryStatus;
@property(retain, nonatomic) id <IDESharedTests_Device> ide_sharedTests_testedDevice; // @synthesize ide_sharedTests_testedDevice=_ide_sharedTests_testedDevice;
@property(copy, nonatomic) NSString *ide_sharedTests_testClassName; // @synthesize ide_sharedTests_testClassName=_ide_sharedTests_testClassName;
@property(copy, nonatomic) NSString *ide_sharedTests_testName; // @synthesize ide_sharedTests_testName=_ide_sharedTests_testName;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *ide_sharedTests_schemeActionRunDestinationRecord;
@property(readonly, nonatomic) BOOL ide_sharedTests_fetchesSchemeActionsInvocationRecordAsync;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_perfMetrics;
@property(readonly, nonatomic) NSImage *ide_sharedTests_statusImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_sharedTests_schemeActionsInvocationRecord;
@property(readonly) Class superclass;

@end

