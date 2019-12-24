/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEViewController.h"

#import "IDEToyViewController-Protocol.h"

@class DVTGraph, DVTLineGraphLayer, DVTObservingToken, DVTStackBacktrace, DVTStackView_ML, IDEToy, IDEValueHistoryToy, IDEValueHistoryToyResult, IDEVerticalMarkerGraphLayer, NSArray, NSDate, NSNumber, NSString;

@interface IDEValueHistoryToyViewController : IDEViewController <IDEToyViewController>
{
    DVTObservingToken *_currentResultsObservingToken;
    BOOL _executionIsInProgress;
    BOOL _hasHandledDeserializedResults;
    DVTObservingToken *_executionIsInProgressObservingToken;
    NSArray *_previousResults;
    IDEValueHistoryToyResult *_lastPlayheadResult;
    unsigned long long _lastPlayheadResultIndex;
    id <NSObject> _graphLayerSelectionNotificationToken;
    BOOL _ignoreSelectedPointChange;
    BOOL _dataUpdateScheduled;
    BOOL _wasLastInGraphMode;
    DVTLineGraphLayer *_currentLineGraphLayer;
    DVTLineGraphLayer *_previousLineGraphLayer;
    NSNumber *_soFarAllEntriesWereNumbers;
    NSString *_nameSoFarForGraph;
    BOOL _minGraphBoundsIsSet;
    BOOL _onlyDrawOldData;
    struct _DVTGraphBounds _minGraphBounds;
    BOOL _currentLayerGraphBoundsIsSet;
    struct _DVTGraphBounds _currentLayerGraphBounds;
    IDEVerticalMarkerGraphLayer *_verticalMarkerGraphLayer;
    unsigned long long _registerTapeInsertionIndex;
    CDStruct_b590ebd7 _delegateRespondsTo;
    NSString *_titleForDisplay;
    NSDate *_resultDisplayDate;
    id <IDEToyViewControllerDelegate> _delegate;
    IDEValueHistoryToy *_valueHistoryToy;
    DVTStackView_ML *_stackView;
    DVTGraph *_graph;
    NSArray *_results;
}

+ (id)keyPathsForValuesAffectingToy;
@property(retain) NSArray *results; // @synthesize results=_results;
@property __weak DVTGraph *graph; // @synthesize graph=_graph;
@property __weak DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(readonly) IDEValueHistoryToy *valueHistoryToy; // @synthesize valueHistoryToy=_valueHistoryToy;
@property(retain, nonatomic) id <IDEToyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSDate *resultDisplayDate; // @synthesize resultDisplayDate=_resultDisplayDate;
@property(copy) NSString *titleForDisplay; // @synthesize titleForDisplay=_titleForDisplay;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_handleSelectedGraphPointChanged:(id)arg1 graphLayer:(id)arg2;
- (void)_updatePlayheadForResults:(id)arg1;
- (void)_updatePlayheadIfNeededForResults:(id)arg1;
- (unsigned long long)_playheadIndexForResults:(id)arg1;
- (BOOL)_useCraigDemoMagic;
- (void)_updateGraphUsingPoints:(id)arg1 minY:(double)arg2 maxY:(double)arg3 minX:(double)arg4 maxX:(double)arg5;
- (void)_graphResults:(id)arg1;
- (void)_useQuickLookViewsForResults:(id)arg1 additive:(BOOL)arg2;
- (void)_renderResultsForceRedraw:(BOOL)arg1;
- (void)_updateDataForceRedraw:(BOOL)arg1;
- (BOOL)_keepPreviousData;
- (BOOL)_xAxisIsTime;
- (void)_executionEndedAndCompleted:(BOOL)arg1;
- (void)_executionStarted;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)preflightDelegateRespondsToSelectorChecks;
@property(readonly) IDEToy *toy;
- (id)initWithValueHistoryToy:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

