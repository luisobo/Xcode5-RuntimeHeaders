//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class DVTCrashChartBarChartView, DVTCrashChartCircleCountView, DVTCrashChartDistributionTable, DVTCrashChartOccurrenceCircleView, DVTCrashChartScaffoldView, DVTCrashChartSwitcherView, DVTCrashChartTimestampView, DVTCrashPoint, NSArray, NSString;

@interface DVTCrashChartView : NSView
{
    BOOL _alreadySetUp;
    DVTCrashPoint *_crashPoint;
    NSArray *_osDataSet;
    NSArray *_deviceDataSet;
    DVTCrashChartOccurrenceCircleView *_occurrenceCircle;
    DVTCrashChartBarChartView *_barChart;
    DVTCrashChartDistributionTable *_distributionTable;
    DVTCrashChartTimestampView *_timeStamp;
    DVTCrashChartSwitcherView *_deviceTypePicker;
    DVTCrashChartCircleCountView *_circleCount;
    DVTCrashChartScaffoldView *_totalLabelAndDividerLine;
    NSString *_totalCount;
    NSArray *_distributionData;
    unsigned long long _totalDeviceCrashCount;
    unsigned long long _totalOSCrashCount;
}

+ (id)purpleColor;
+ (id)magentaColor;
+ (id)greenBlueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)yellowColor;
+ (id)_barDateInputFormatter;
+ (id)_barDateFormatter;
+ (void)initialize;
@property(nonatomic) unsigned long long totalOSCrashCount; // @synthesize totalOSCrashCount=_totalOSCrashCount;
@property(nonatomic) unsigned long long totalDeviceCrashCount; // @synthesize totalDeviceCrashCount=_totalDeviceCrashCount;
@property(copy, nonatomic) NSArray *distributionData; // @synthesize distributionData=_distributionData;
@property(copy, nonatomic) NSString *totalCount; // @synthesize totalCount=_totalCount;
@property(retain) DVTCrashChartScaffoldView *totalLabelAndDividerLine; // @synthesize totalLabelAndDividerLine=_totalLabelAndDividerLine;
@property(retain) DVTCrashChartCircleCountView *circleCount; // @synthesize circleCount=_circleCount;
@property(retain) DVTCrashChartSwitcherView *deviceTypePicker; // @synthesize deviceTypePicker=_deviceTypePicker;
@property(retain) DVTCrashChartTimestampView *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain) DVTCrashChartDistributionTable *distributionTable; // @synthesize distributionTable=_distributionTable;
@property(retain) DVTCrashChartBarChartView *barChart; // @synthesize barChart=_barChart;
@property(retain) DVTCrashChartOccurrenceCircleView *occurrenceCircle; // @synthesize occurrenceCircle=_occurrenceCircle;
@property(copy, nonatomic) NSArray *deviceDataSet; // @synthesize deviceDataSet=_deviceDataSet;
@property(copy, nonatomic) NSArray *osDataSet; // @synthesize osDataSet=_osDataSet;
@property(retain, nonatomic) DVTCrashPoint *crashPoint; // @synthesize crashPoint=_crashPoint;
- (void).cxx_destruct;
- (id)timeSeriesColors;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

