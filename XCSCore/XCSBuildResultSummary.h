/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XCSCore/XCSObject.h>

@class NSNumber, NSString;

@interface XCSBuildResultSummary : XCSObject
{
    NSString *_integrationID;
    NSNumber *_integrationNumber;
    long long _analyzerWarningCount;
    long long _analyzerWarningChange;
    long long _warningCount;
    long long _warningChange;
    long long _errorCount;
    long long _errorChange;
    long long _testsCount;
    long long _testsChange;
    long long _testFailureCount;
    long long _testFailureChange;
    long long _improvedPerfTestCount;
    long long _regressedPerfTestCount;
}

+ (id)summaryWithAnalyzerWarningCount:(long long)arg1 warningCount:(long long)arg2 errorCount:(long long)arg3 testsCount:(long long)arg4 testFailureCount:(long long)arg5 previousResults:(id)arg6 validationErrors:(id *)arg7;
@property(nonatomic) long long regressedPerfTestCount; // @synthesize regressedPerfTestCount=_regressedPerfTestCount;
@property(nonatomic) long long improvedPerfTestCount; // @synthesize improvedPerfTestCount=_improvedPerfTestCount;
@property(readonly, nonatomic) long long testFailureChange; // @synthesize testFailureChange=_testFailureChange;
@property(readonly, nonatomic) long long testFailureCount; // @synthesize testFailureCount=_testFailureCount;
@property(readonly, nonatomic) long long testsChange; // @synthesize testsChange=_testsChange;
@property(readonly, nonatomic) long long testsCount; // @synthesize testsCount=_testsCount;
@property(readonly, nonatomic) long long errorChange; // @synthesize errorChange=_errorChange;
@property(readonly, nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, nonatomic) long long warningChange; // @synthesize warningChange=_warningChange;
@property(readonly, nonatomic) long long warningCount; // @synthesize warningCount=_warningCount;
@property(readonly, nonatomic) long long analyzerWarningChange; // @synthesize analyzerWarningChange=_analyzerWarningChange;
@property(readonly, nonatomic) long long analyzerWarningCount; // @synthesize analyzerWarningCount=_analyzerWarningCount;
@property(retain, nonatomic) NSNumber *integrationNumber; // @synthesize integrationNumber=_integrationNumber;
@property(retain, nonatomic) NSString *integrationID; // @synthesize integrationID=_integrationID;
- (void).cxx_destruct;
- (long long)integrationResult;
- (id)description;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithAnalyzerWarningCount:(long long)arg1 analyzerWarningChange:(long long)arg2 warningCount:(long long)arg3 warningChange:(long long)arg4 errorCount:(long long)arg5 errorChange:(long long)arg6 testsCount:(long long)arg7 testsChange:(long long)arg8 testFailureCount:(long long)arg9 testFailureChange:(long long)arg10 improvedPerfTestCount:(long long)arg11 regressedPerfTestCount:(long long)arg12 validationErrors:(id *)arg13;

@end

