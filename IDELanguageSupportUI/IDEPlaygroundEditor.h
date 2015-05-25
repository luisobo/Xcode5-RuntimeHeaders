//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDESourceCodeEditor.h"

@class DVTBorderedView, DVTMapTable, DVTObservingToken, DVTPerformanceMetric, DVTStepperTextField, IDEPlaygroundDocument, IDEPlaygroundEditorStackView_ML, IDEPlaygroundSourceTextScrollView, NSArray, NSCountedSet, NSDate, NSMutableArray, NSMutableSet, NSProgressIndicator, NSSet, NSSlider;

@interface IDEPlaygroundEditor : IDESourceCodeEditor
{
    NSMutableArray *_sectionViewControllers;
    IDEPlaygroundEditorStackView_ML *_editorStackView;
    IDEPlaygroundSourceTextScrollView *_topLevelPlaygroundScrollView;
    DVTBorderedView *_scrollAndTimelineContainer;
    id <DVTCancellable> _clipViewFillToken;
    NSProgressIndicator *_progressIndicator;
    NSCountedSet *_countedToysSelectedInRegisteredToyboxes;
    NSMutableSet *_toysSelectedInRegisteredToyboxes;
    struct _NSRange _lastEditedCharRangeForExecution;
    struct _NSRange _lastSelectedRange;
    struct _NSRange _lastSelectedLineRange;
    DVTObservingToken *_sessionInProgressObserverToken;
    DVTObservingToken *_autoterminationDelayObservingToken;
    DVTMapTable *_finishedLoadingObservingTokenForSectionViewController;
    id <NSObject> _sourceTextSettingsChangedObserver;
    double _minSidebarWidth;
    BOOL _playgroundExecutionEnabled;
    BOOL _playgroundExecutionWasEverScheduled;
    DVTMapTable *_toyboxEditorToSelectedToyObserverTokensMap;
    BOOL _alreadySetUp;
    DVTPerformanceMetric *_loadPerformanceMetric;
    DVTPerformanceMetric *_closePerformanceMetric;
    NSSlider *_globalTimeSlider;
    DVTStepperTextField *_timeTextField;
    DVTBorderedView *_sliderContainerView;
    DVTObservingToken *_toyboxExecutionInProgressObservingToken;
    NSDate *_selectedResultDisplayDate;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (double)defaultPlaygroundSidebarWidth;
+ (void)setDefaultPlaygroundSidebarWidth:(double)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSDate *selectedResultDisplayDate; // @synthesize selectedResultDisplayDate=_selectedResultDisplayDate;
- (void).cxx_destruct;
@property(readonly) BOOL documentSectionDrawsOverAccessory;
- (void)presentError:(id)arg1 delegate:(id)arg2 didPresentSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)executePlaygroundFromSerializedData;
- (void)toggleQuickLookInline:(id)arg1;
- (void)execute:(id)arg1;
- (void)cancelExecution;
- (void)executePlayground;
- (void)schedulePlaygroundExecution;
- (void)schedulePlaygroundExecutionWithDelay:(double)arg1;
@property(getter=isPlaygroundExecutionEnabled) BOOL playgroundExecutionEnabled;
- (double)textView:(id)arg1 constrainAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(id)arg1 constrainMaxAccessoryAnnotationWidth:(double)arg2;
- (double)textView:(id)arg1 constrainMinAccessoryAnnotationWidth:(double)arg2;
- (double)_minimumSidebarWidth;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (id)annotationContextForTextView:(id)arg1;
- (id)sdk;
- (id)languageService;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (id)currentSelectedDocumentLocations;
@property(readonly, copy) NSArray *playgroundSectionViewControllers;
- (void)unregisterToyboxEditor:(id)arg1;
- (void)registerToyboxEditor:(id)arg1;
- (BOOL)toyboxStackView:(id)arg1 shouldChangeResultDisplayDate:(id)arg2;
- (void)_updateSelectedResultDisplayDate:(id)arg1;
- (void)globalTimeSliderAction:(id)arg1;
- (void)_disableGlobalTimeSlider;
- (void)_updateGlobalTimeSlider;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)didSetupEditor;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_createProgressIndicator;
- (id)_buildTimelineScrubber;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly) IDEPlaygroundDocument *document; // @dynamic document;
@property(retain) NSMutableSet *mutableToysSelectedInRegisteredToyboxes; // @dynamic mutableToysSelectedInRegisteredToyboxes;
@property(readonly, copy) NSSet *toysSelectedInRegisteredToyboxes; // @dynamic toysSelectedInRegisteredToyboxes;

@end

