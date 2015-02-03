//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTMessageBubbleAnnotation.h"

@class NSPopover;

@interface IDETestIssueErrorAnnotation : DVTMessageBubbleAnnotation
{
    NSPopover *_iterationPopover;
}

+ (unsigned long long)scrollbarMarkerType;
+ (id)editedTheme;
+ (id)focusedTheme;
+ (id)normalTheme;
+ (id)sidebarIcon;
+ (unsigned long long)severity;
+ (double)precedence;
- (void).cxx_destruct;
- (void)didClickInTextSidebarView:(id)arg1 event:(id)arg2;
- (void)didClickMessageBubbleOnIcon:(BOOL)arg1 inTextView:(id)arg2 event:(id)arg3;
- (void)_didClickInView:(id)arg1 event:(id)arg2;
- (id)annotationMenuForPerformanceMetricsFromPreviousRun:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)contextMenu_revealInReport:(id)arg1;
- (void)contextMenu_acceptPreviousAverageForPersistentAllocations:(id)arg1;
- (void)contextMenu_acceptPreviousAverageForTotalAllocations:(id)arg1;
- (void)contextMenu_acceptPreviousAverageForTime:(id)arg1;
- (void)contextMenu_acceptPreviousAverageForAllMetrics:(id)arg1;
- (void)contextMenu_performSelector:(SEL)arg1 sender:(id)arg2;
- (void)updateBaselineForPerformanceMetricWithIdentifier:(id)arg1 average:(id)arg2 maxStandardDeviation:(id)arg3;
- (id)baselineRecordAndFilePath:(id *)arg1 error:(id *)arg2;
- (void)setMessageBubbleText:(id)arg1;
- (id)performanceMetrics;
- (id)test;
- (id)annotationDisplayDescription;
- (id)annotationDisplayName;
- (id)init;

@end

