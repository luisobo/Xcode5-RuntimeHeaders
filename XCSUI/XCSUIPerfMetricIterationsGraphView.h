/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSPopover, NSTrackingArea, XCSTestPerfMetric;

@interface XCSUIPerfMetricIterationsGraphView : NSView
{
    NSPopover *_iterationPopover;
    NSTrackingArea *_mouseEnteredTrackingArea;
    double _firstBarOrigin;
    double _baselineYOrigin;
    XCSTestPerfMetric *_testPerfMetric;
}

@property(retain, nonatomic) XCSTestPerfMetric *testPerfMetric; // @synthesize testPerfMetric=_testPerfMetric;
- (void).cxx_destruct;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)showPopoverForBarView:(id)arg1;
- (void)layoutViews;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

