/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTSplitView.h>

#import "NSMenuDelegate-Protocol.h"

@class DVTNotificationToken, DVTObservingToken, DVTPointerArray, DVTSourceTextView, NSArray, NSIndexSet, NSMenu, NSString, NSTrackingArea;

@interface DVTComparisonSplitView : DVTSplitView <NSMenuDelegate>
{
    NSIndexSet *_depressedDiffDescriptorIndexes;
    NSTrackingArea *_trackingArea;
    struct CGRect *_switchRectArray;
    struct CGRect *_menuRectArray;
    DVTPointerArray *_swoops;
    NSArray *_diffDescriptors;
    NSIndexSet *_modifiedDiffDescriptorIndexes;
    NSIndexSet *_hiddenDiffDescriptorIndexes;
    DVTSourceTextView *_primaryTextView;
    DVTSourceTextView *_secondaryTextView;
    NSIndexSet *_selectedDiffDescriptorIndexes;
    NSIndexSet *_toggledDiffDescriptorIndexes;
    int _style;
    NSMenu *_diffMenu;
    BOOL _depressed;
    BOOL _selected;
    BOOL _selecting;
    BOOL _shouldInterceptMouseUp;
    BOOL _isThreeWayDiff;
    BOOL _isBinaryComparison;
    BOOL _isSettingSelectedIndexBinding;
    BOOL _isSplitterMovable;
    BOOL _hasFocus;
    BOOL _isDragging;
    DVTObservingToken *_firstResponderToken;
    DVTNotificationToken *_primaryLayoutCompleteToken;
    DVTNotificationToken *_primaryFrameChangeToken;
    DVTNotificationToken *_secondaryLayoutCompleteToken;
    DVTNotificationToken *_secondaryFrameChangeToken;
    BOOL _enableDiffToggles;
    id <DVTComparisonSplitViewDelegate> _comparisonDelegate;
}

+ (id)diffButtonMenuImage;
+ (id)diffButtonCheckImage;
+ (id)diffButtonUncheckImage;
+ (id)unsetImage;
+ (id)neitherArrowImage;
+ (id)rightLeftArrowImage;
+ (id)rightArrowImage;
+ (id)leftRightArrowImage;
+ (id)leftArrowImage;
+ (id)splitterDeselectedImage_depressed;
+ (id)splitterDeselectedImage;
+ (id)splitterSelectedImage_depressed;
+ (id)splitterSelectedImage;
+ (double)defaultSplitterWidthForStyle:(int)arg1;
+ (void)initialize;
@property __weak id <DVTComparisonSplitViewDelegate> comparisonDelegate; // @synthesize comparisonDelegate=_comparisonDelegate;
@property(retain) NSMenu *diffMenu; // @synthesize diffMenu=_diffMenu;
@property BOOL hasFocus; // @synthesize hasFocus=_hasFocus;
@property BOOL enableDiffToggles; // @synthesize enableDiffToggles=_enableDiffToggles;
@property BOOL isSplitterMovable; // @synthesize isSplitterMovable=_isSplitterMovable;
@property(retain) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
@property BOOL depressed; // @synthesize depressed=_depressed;
- (void).cxx_destruct;
- (void)viewFrameDidChange:(id)arg1;
- (void)layoutManagerDidCompleteLayoutForTextContainer:(id)arg1;
- (void)_validateCurrentSelectedIndex;
- (void)offsetCurrentSelectedIndexBy:(long long)arg1;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (void)_drawMultipleDiffDescriptors:(struct CGRect)arg1;
- (unsigned long long)_nearestDiffDescriptorFromMiddleInDirection:(long long)arg1;
- (void)_drawSingleDiffDescriptor:(struct CGRect)arg1;
- (double)dividerThickness;
- (void)setHiddenDiffDescriptorIndexes:(id)arg1;
@property BOOL isBinaryComparison;
@property BOOL isThreeWayDiff;
@property int style;
@property(retain) NSIndexSet *toggledDiffDescriptorIndexes; // @synthesize toggledDiffDescriptorIndexes=_toggledDiffDescriptorIndexes;
@property(retain) DVTSourceTextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(retain) DVTSourceTextView *primaryTextView; // @synthesize primaryTextView=_primaryTextView;
@property(readonly) BOOL showsPrettySwitch;
@property(retain) NSIndexSet *selectedDiffDescriptorIndexes; // @synthesize selectedDiffDescriptorIndexes=_selectedDiffDescriptorIndexes;
@property BOOL selected; // @synthesize selected=_selected;
- (void)updateBoundTimestamp;
- (void)updateBoundToggledIndexes;
- (void)updateBoundSelectedIndex;
- (void)updateBoundModifiedDescriptorIndexes;
- (void)updateBoundContentArray;
- (id)dvtExtraBindings;
- (void)resetCursorRects;
- (BOOL)acceptsFirstResponder;
- (void)scrollWheel:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_toggleDiffDescriptorAtIndex:(unsigned long long)arg1;
- (id)_getNextResizeEventInvalidatingLiveResizeCacheIfNecessary:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_centerSplitter;
- (void)_setSelectedDescriptorMergeDirection:(int)arg1;
- (unsigned long long)_hitTestSwoopLocation:(struct CGPoint)arg1;
- (unsigned long long)_hitTestMenuLocation:(struct CGPoint)arg1;
- (unsigned long long)_hitTestLocation:(struct CGPoint)arg1;
- (void)primitiveInvalidate;
- (void)viewDidMoveToWindow;
- (struct CGRect)_firstDividerFrame;
- (void)dealloc;
- (void)_dvtcomparisonsplitview_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

