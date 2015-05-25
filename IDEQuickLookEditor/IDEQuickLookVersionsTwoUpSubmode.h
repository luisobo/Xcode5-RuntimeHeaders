//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEComparisonEditorSubmode.h"

#import "IDEComparisonEditorDelegate.h"
#import "IDEComparisonEditorSavableMergeState.h"
#import "NSSplitViewDelegate.h"

@class DVTBorderedView, DVTComparisonSplitView, DVTDiffSession, DVTObservingToken, IDEEditor, IDESourceControlMergeData, NSDictionary, NSString, QLPreviewView;

@interface IDEQuickLookVersionsTwoUpSubmode : IDEComparisonEditorSubmode <IDEComparisonEditorDelegate, NSSplitViewDelegate, IDEComparisonEditorSavableMergeState>
{
    DVTBorderedView *_primaryLayoutView;
    DVTBorderedView *_secondaryLayoutView;
    DVTComparisonSplitView *_comparisonSplitView;
    DVTDiffSession *_diffSession;
    IDEEditor *_primaryEditor;
    IDEEditor *_secondaryEditor;
    BOOL _showingPrimaryDocumentStructure;
    DVTObservingToken *_responderToken;
    NSDictionary *_previouslyRestoredStateDictionary;
    IDESourceControlMergeData *_previousMergeData;
    unsigned long long _documentLoadCount;
}

+ (id)logAspect;
+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingKeyEditor;
@property BOOL showingPrimaryDocumentStructure; // @synthesize showingPrimaryDocumentStructure=_showingPrimaryDocumentStructure;
@property(retain) DVTComparisonSplitView *comparisonSplitView; // @synthesize comparisonSplitView=_comparisonSplitView;
@property(retain) DVTBorderedView *secondaryLayoutView; // @synthesize secondaryLayoutView=_secondaryLayoutView;
@property(retain) DVTBorderedView *primaryLayoutView; // @synthesize primaryLayoutView=_primaryLayoutView;
- (void).cxx_destruct;
- (void)revertComparisonEditorStateWithDictionary:(id)arg1;
- (void)commitComparisonEditorStateToDictionary:(id)arg1;
- (void)comparisonEditor:(id)arg1 didReplaceAncestorDocument:(id)arg2;
- (void)comparisonEditor:(id)arg1 didReplaceSecondaryDocument:(id)arg2;
- (void)comparisonEditor:(id)arg1 didReplacePrimaryDocument:(id)arg2;
- (void)_setupEditorForPrimaryOrMergeDocument:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)hideSecondaryPlaceholder;
- (void)showSecondaryPlaceholder;
- (void)hidePrimaryPlaceholder;
- (void)showPrimaryPlaceholder;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (id)_fileTextSettings;
- (void)showEmptySecondaryEditor:(id)arg1;
- (void)showEmptyPrimaryEditor:(id)arg1;
- (void)_willOpenSpecifier:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_syncStructureDocument;
- (void)_initializeDiffSession;
- (void)_tearDownDiffSession;
- (void)_saveMergeState;
- (void)_resetMergeState;
- (id)_windowForError;
@property(readonly) IDESourceControlMergeData *previousMergeData;
- (void)saveMergeState;
@property(retain) DVTDiffSession *diffSession;
@property(retain) IDEEditor *secondaryEditor; // @synthesize secondaryEditor=_secondaryEditor;
@property(retain) IDEEditor *primaryEditor; // @synthesize primaryEditor=_primaryEditor;
@property(readonly) QLPreviewView *secondaryQuickLookView;
@property(readonly) QLPreviewView *primaryQuickLookView;
- (id)keyEditor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

