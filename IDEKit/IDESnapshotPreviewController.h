/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "IDEReviewFilesViewControllerDelegate-Protocol.h"

@class DVTBorderedView, DVTFilePath, DVTObservingToken, IDENavigableItemCoordinator, IDEReviewFilesViewController, IDESnapshotItem, IDESnapshotPreviewNavigatorDataSource, IDESnapshotRestorePreviewNavigatorDataSource, NSArray, NSButton, NSString, NSWindow;

@interface IDESnapshotPreviewController : IDEViewController <IDEReviewFilesViewControllerDelegate>
{
    IDESnapshotItem *_selectedSnapshot;
    IDESnapshotItem *_previousSnapshot;
    DVTFilePath *_repositoryLocation;
    NSWindow *_previewSheet;
    DVTBorderedView *_borderedView;
    NSButton *_actionButton;
    NSButton *_cancelButton;
    IDEReviewFilesViewController *_reviewFilesViewController;
    IDENavigableItemCoordinator *_coordinator;
    IDESnapshotPreviewNavigatorDataSource *_navigatorDataSource;
    IDESnapshotRestorePreviewNavigatorDataSource *_restoreNavigatorDataSource;
    NSArray *_modifiedFiles;
    DVTObservingToken *_comparisonEditorObservingToken;
    id _previewRestoreCompletionBlock;
    BOOL _showProgress;
    id exportConfirmationDelegate;
}

+ (id)defaultViewNibName;
+ (void)runPreviewSheetForWindow:(id)arg1 comparingSnapshot:(id)arg2 againstSnapshot:(id)arg3 snapshotsLocation:(id)arg4;
@property BOOL showProgress; // @synthesize showProgress=_showProgress;
@property(copy) NSArray *modifiedFiles; // @synthesize modifiedFiles=_modifiedFiles;
@property(retain) DVTFilePath *repositoryLocation; // @synthesize repositoryLocation=_repositoryLocation;
@property(retain) IDESnapshotItem *previousSnapshot; // @synthesize previousSnapshot=_previousSnapshot;
@property(retain) IDESnapshotItem *selectedSnapshot; // @synthesize selectedSnapshot=_selectedSnapshot;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)previewSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancelAction:(id)arg1;
- (void)exportConfirmationAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_runOpenSavePanelForWindow:(id)arg1;
- (void)exportAction:(id)arg1;
- (void)previewSheetForRestoreDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancelRestoreAction:(id)arg1;
- (void)restoreAction:(id)arg1;
- (id)uncheckedFilePaths;
- (id)checkedFilePaths;
- (void)willOpenDocumentLocation:(id)arg1 completionBlock:(id)arg2;
- (id)_configureDataSources;
- (void)_runPreviewSheetForWindow:(id)arg1;
- (void)setPreviewToRestoreFiles:(id)arg1 comparePath:(id)arg2 restoreRootPath:(id)arg3;
- (void)runPreviewSheetToRestoreFiles:(id)arg1 comparePath:(id)arg2 restoreRootPath:(id)arg3 forWindow:(id)arg4 sheetDelegate:(id)arg5 completionBlock:(id)arg6;
- (void)setInitialSelectionForNavigatorOutlineView:(id)arg1;
- (id)reviewFilesViewController;
- (void)_changeActionAndCancelButtonEnabledStateTo:(BOOL)arg1;
- (void)setWindowSizeWithHostWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

