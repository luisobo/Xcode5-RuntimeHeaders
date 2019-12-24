/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DYAnalyzerEngine, DYAnalyzerFindingPool, DYAnalyzerHeuristicPool;

@interface DYAnalyzerHeuristic : NSObject
{
    int _functionIndex;
    int _captureBlockMode;
    unsigned int _stateMirrorRetCode;
    BOOL _isPostMirrorHeuristic;
    DYAnalyzerFindingPool *_weakFindingPool;
    DYAnalyzerHeuristicPool *_weakHeuristicPool;
    DYAnalyzerEngine *_weakEngine;
}

+ (id)heuristicBundlesForAPI:(unsigned int)arg1;
+ (Class)heuristicForIdentifier:(id)arg1 forAPI:(unsigned int)arg2;
+ (id)availableHeuristicNamesForAPI:(unsigned int)arg1;
+ (void)_registerHeuristicsForAPI:(unsigned int)arg1;
+ (void)_registerHeuristic:(Class)arg1 forAPI:(unsigned int)arg2;
+ (BOOL)supportsAPI:(unsigned int)arg1;
+ (id)identifier;
@property(nonatomic) __weak DYAnalyzerEngine *weakEngine; // @synthesize weakEngine=_weakEngine;
@property(nonatomic) __weak DYAnalyzerHeuristicPool *weakHeuristicPool; // @synthesize weakHeuristicPool=_weakHeuristicPool;
@property(nonatomic) __weak DYAnalyzerFindingPool *weakFindingPool; // @synthesize weakFindingPool=_weakFindingPool;
@property(readonly, nonatomic) BOOL isPostMirrorHeuristic; // @synthesize isPostMirrorHeuristic=_isPostMirrorHeuristic;
- (void).cxx_destruct;
@property(readonly, nonatomic) DYAnalyzerHeuristicPool *heuristicPool;
@property(readonly, nonatomic) DYAnalyzerEngine *engine;
@property(readonly, nonatomic) DYAnalyzerFindingPool *findingPool;
- (id)loadURLData:(const char *)arg1;
- (void)notifyCompletion;
- (void)setFunctionIndex:(int)arg1;
- (void)addLinks:(id)arg1 fromKey:(id)arg2;
- (void)addFunctionDerivedDetails:(id)arg1;
- (id)findingWithKind:(id)arg1 warningLevel:(int)arg2 classification:(unsigned int)arg3 detailsKey:(id)arg4 linksKey:(id)arg5 triggerIndex:(int)arg6;
- (id)errorFindingFromFunction:(const struct Function *)arg1;
- (id)finding;
- (void)_setGenerationEnvironmentForFinding:(id)arg1;
- (void)endBlock:(int)arg1;
- (void)startBlock:(int)arg1;
- (void)processFunction:(const struct Function *)arg1 stateMirrorRetCode:(unsigned int)arg2;
- (id)description;
- (id)initWithIsPostMirrorHeuristic:(BOOL)arg1;
- (id)init;

@end

