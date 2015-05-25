//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "IDEEditorContextDelegate.h"
#import "IDESourceControlMergeControllerContainer.h"

@class DVTBorderedView, DVTObservingToken, DVTSplitView, IDEComparisonEditor, IDEEditorVersionsMode, IDEReviewFilesNavigator, IDESourceControlConflictResolutionController, IDESourceControlInteractiveCommitController, NSString;

@interface IDEReviewFilesViewController : IDEViewController <IDEEditorContextDelegate, IDESourceControlMergeControllerContainer>
{
    DVTSplitView *_splitView;
    DVTBorderedView *_structureBorderedView;
    DVTBorderedView *_comparisonBorderedView;
    IDEReviewFilesNavigator *_navigator;
    IDEEditorVersionsMode *_versionsMode;
    DVTObservingToken *_navigatorSelectedViewIndexesObservingToken;
    DVTObservingToken *_navigatorSelectedObjectsObservingToken;
    id <IDEReviewFilesViewControllerDelegate> _delegate;
    IDESourceControlConflictResolutionController *_conflictResolutionController;
    IDESourceControlInteractiveCommitController *_interactiveCommitController;
}

+ (id)keyPathsForValuesAffectingVersionsEditor;
+ (id)keyPathsForValuesAffectingComparisonEditor;
+ (struct CGRect)minimumSheetFrame;
+ (struct CGSize)sheetSizeForHostWindow:(id)arg1;
+ (id)reviewFilesLogAspect;
@property(retain) id <IDEReviewFilesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) IDEEditorVersionsMode *versionsMode; // @synthesize versionsMode=_versionsMode;
@property(readonly) IDEReviewFilesNavigator *navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (id)workspaceForEditorContext:(id)arg1;
- (id)editorContext:(id)arg1 shouldEditNavigableItem:(id)arg2;
@property(readonly) IDESourceControlInteractiveCommitController *interactiveCommitController; // @dynamic interactiveCommitController;
- (void)setupInteractiveCommitController;
@property(readonly) IDESourceControlConflictResolutionController *conflictResolutionController; // @dynamic conflictResolutionController;
- (void)setupConflictResolutionController;
- (void)primitiveInvalidate;
@property(readonly) IDEEditorVersionsMode *versionsEditor;
@property(readonly) IDEComparisonEditor *comparisonEditor;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

