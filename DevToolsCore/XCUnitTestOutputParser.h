//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCBuildCommandOutputParser.h>

@class NSMutableArray;

@interface XCUnitTestOutputParser : XCBuildCommandOutputParser
{
    BOOL _isRunningUnitTests;
    NSMutableArray *_recorders;
}

+ (void)initialize;
- (void)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)testCaseFailed:(id)arg1;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCaseDidStart:(id)arg1;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuiteWillFinish:(id)arg1;
- (void)testSuiteDidStart:(id)arg1;
- (void)unitTestsWereSkipped:(id)arg1;
- (void)unitTestsDidNote:(id)arg1;
- (void)unitTestsDidFail:(id)arg1;
- (void)unitTestsDidComplete:(id)arg1;
- (void)unitTestsDidFinish:(id)arg1;
- (void)unitTestsDidStart:(id)arg1;
- (void)unitTestsWillStart:(id)arg1;
- (void)recorderWillFinish:(id)arg1;
- (void)setTestExecutedStringsFromString:(id)arg1;
- (void)finishUnfinishedRecorder:(id)arg1;
- (void)appendAndPropagateUpText:(id)arg1 startingWithRecorder:(id)arg2;
- (id)parentSection;
- (id)currentSection;
- (id)currentRecorder;
- (void)dealloc;
- (id)initWithNextOutputStream:(id)arg1;

@end

