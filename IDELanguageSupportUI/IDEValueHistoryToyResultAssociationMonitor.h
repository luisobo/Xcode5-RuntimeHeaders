/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTMapTable, DVTObservingToken, IDEToybox;

@interface IDEValueHistoryToyResultAssociationMonitor : NSObject
{
    IDEToybox *_toybox;
    DVTMapTable *_loggerResultsToToys;
    DVTMapTable *_previousGenerationLoggerResultsToToys;
    unsigned long long _currentExecutionGeneration;
    unsigned long long _previousExecutionGeneration;
    DVTObservingToken *_executionGenerationObservingToken;
    DVTObservingToken *_toyboxIsValidObservingToken;
}

+ (id)associationMonitorForToybox:(id)arg1;
- (void).cxx_destruct;
- (void)associateToy:(id)arg1 withLoggerResult:(id)arg2 inExecutionGeneration:(unsigned long long)arg3;
- (id)toyForLoggerResult:(id)arg1;
- (id)initWithToybox:(id)arg1;

@end

