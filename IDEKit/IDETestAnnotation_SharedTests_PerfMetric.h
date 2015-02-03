//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDESharedTests_PerfMetric.h"

@class NSArray, NSNumber, NSString;

@interface IDETestAnnotation_SharedTests_PerfMetric : NSObject <IDESharedTests_PerfMetric>
{
    NSString *_ide_sharedTests_name;
    NSString *_ide_sharedTests_unit;
    double _ide_sharedTests_avg;
    double _ide_sharedTests_min;
    double _ide_sharedTests_max;
    double _ide_sharedTests_rsd;
    NSNumber *_ide_sharedTests_baseline;
    NSString *_ide_sharedTests_perfMetricIdentifier;
    NSNumber *_ide_sharedTests_maxPercentRegression;
    double _ide_sharedTests_maxPercentImprovement;
    NSNumber *_ide_sharedTests_maxPercentRelativeStandardDeviation;
    NSString *_ide_sharedTests_baselineIdentifier;
    NSArray *_ide_sharedTests_iterations;
}

+ (id)sharedTestsPerfMetricForPerformanceMetricOutput:(id)arg1;
@property(retain, nonatomic) NSArray *ide_sharedTests_iterations; // @synthesize ide_sharedTests_iterations=_ide_sharedTests_iterations;
@property(copy, nonatomic) NSString *ide_sharedTests_baselineIdentifier; // @synthesize ide_sharedTests_baselineIdentifier=_ide_sharedTests_baselineIdentifier;
@property(retain, nonatomic) NSNumber *ide_sharedTests_maxPercentRelativeStandardDeviation; // @synthesize ide_sharedTests_maxPercentRelativeStandardDeviation=_ide_sharedTests_maxPercentRelativeStandardDeviation;
@property(nonatomic) double ide_sharedTests_maxPercentImprovement; // @synthesize ide_sharedTests_maxPercentImprovement=_ide_sharedTests_maxPercentImprovement;
@property(retain, nonatomic) NSNumber *ide_sharedTests_maxPercentRegression; // @synthesize ide_sharedTests_maxPercentRegression=_ide_sharedTests_maxPercentRegression;
@property(copy, nonatomic) NSString *ide_sharedTests_perfMetricIdentifier; // @synthesize ide_sharedTests_perfMetricIdentifier=_ide_sharedTests_perfMetricIdentifier;
@property(retain, nonatomic) NSNumber *ide_sharedTests_baseline; // @synthesize ide_sharedTests_baseline=_ide_sharedTests_baseline;
@property(nonatomic) double ide_sharedTests_rsd; // @synthesize ide_sharedTests_rsd=_ide_sharedTests_rsd;
@property(nonatomic) double ide_sharedTests_max; // @synthesize ide_sharedTests_max=_ide_sharedTests_max;
@property(nonatomic) double ide_sharedTests_min; // @synthesize ide_sharedTests_min=_ide_sharedTests_min;
@property(nonatomic) double ide_sharedTests_avg; // @synthesize ide_sharedTests_avg=_ide_sharedTests_avg;
@property(copy, nonatomic) NSString *ide_sharedTests_unit; // @synthesize ide_sharedTests_unit=_ide_sharedTests_unit;
@property(copy, nonatomic) NSString *ide_sharedTests_name; // @synthesize ide_sharedTests_name=_ide_sharedTests_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

