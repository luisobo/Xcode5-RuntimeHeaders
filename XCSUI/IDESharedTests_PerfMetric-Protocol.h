/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IDESharedTests_PerfMetric <NSObject>
@property(readonly, nonatomic) NSArray *ide_sharedTests_iterations;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_baselineIdentifier;
@property(readonly, nonatomic) double ide_sharedTests_maxPercentRelativeStandardDeviation;
@property(readonly, nonatomic) double ide_sharedTests_maxPercentImprovement;
@property(readonly, nonatomic) double ide_sharedTests_maxPercentRegression;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_perfMetricIdentifier;
@property(readonly, nonatomic) double ide_sharedTests_baseline;
@property(readonly, nonatomic) double ide_sharedTests_rsd;
@property(readonly, nonatomic) double ide_sharedTests_max;
@property(readonly, nonatomic) double ide_sharedTests_min;
@property(readonly, nonatomic) double ide_sharedTests_avg;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_unit;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_name;
@end

