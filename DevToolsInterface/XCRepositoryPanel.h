/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSBrowserDelegate-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class NSArray, NSArrayController, NSBrowser, NSButton, NSColor, NSPanel, NSProgressIndicator, NSSplitView, NSString, NSTableView, NSTextField, NSTextView, NSTreeController, NSView, PBXControlScrollView, PBXExtendedOutlineView;

@interface XCRepositoryPanel : NSObject <NSBrowserDelegate, NSOutlineViewDelegate, NSSplitViewDelegate, NSTextViewDelegate, NSOutlineViewDataSource>
{
    NSTreeController *_browserController;
    NSTreeController *_activityController;
    NSArrayController *_repositoryController;
    NSPanel *_panel;
    NSBrowser *_browser;
    NSSplitView *_splitView;
    NSSplitView *_activitySplitView;
    NSTableView *_repositoriesTable;
    PBXExtendedOutlineView *_activityOutlineView;
    NSProgressIndicator *_progress;
    NSTextField *_errorTextField;
    NSView *_repositoriesView;
    NSView *_activityView;
    NSTextView *_messageTextView;
    NSTextField *_titleTextField;
    NSView *_messageView;
    NSTextField *_folderNameField;
    NSTextView *_folderMessageTextView;
    NSPanel *_folderPanel;
    NSPanel *_deletePanel;
    NSTextView *_deleteMessageTextView;
    NSPanel *_movePanel;
    NSTextView *_moveMessageTextView;
    NSTextField *_moveNameTextField;
    NSTextField *_moveInfoTextField;
    NSButton *_moveButton;
    NSTreeController *_moveBrowserController;
    NSBrowser *_moveBrowser;
    PBXControlScrollView *_activityScrollView;
    NSButton *_clearSCMLogButton;
    NSArray *_sortDescriptors;
    NSColor *_toplevelItemTextColor;
    NSColor *_errorItemTextColor;
    NSColor *_warningItemTextColor;
    NSColor *_otherItemTextColor;
    NSArray *_draggedNodes;
}

+ (id)sharedRepositoryPanel;
@property(retain) NSArray *draggedNodes; // @synthesize draggedNodes=_draggedNodes;
- (BOOL)browser:(id)arg1 acceptDrop:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 dropOperation:(unsigned long long)arg5;
- (unsigned long long)browser:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long *)arg3 column:(long long *)arg4 dropOperation:(unsigned long long *)arg5;
- (BOOL)browser:(id)arg1 canDragRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 withEvent:(id)arg4;
- (id)browser:(id)arg1 draggingImageForRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 withEvent:(id)arg4 offset:(struct CGPoint *)arg5;
- (id)browser:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3 inColumn:(long long)arg4;
- (BOOL)browser:(id)arg1 writeRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 toPasteboard:(id)arg4;
- (void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)draggedNodes:(id)arg1 toURL:(id)arg2;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (id)repositorySortDescriptors;
- (void)setRepositorySortDescriptors:(id)arg1;
- (id)directorySortDescriptors;
- (void)repositoryClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateBusyStatus;
- (void)updateErrorString;
- (void)scmConfigure:(id)arg1;
- (void)scmReload:(id)arg1;
- (void)editRepository;
- (void)copySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)scmCopy:(id)arg1;
- (void)scmCopyNodes:(id)arg1;
- (void)moveSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)dismissMovePanel:(id)arg1;
- (void)scmMove:(id)arg1;
- (void)scmMoveNodes:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)scmDeleteInRepository:(id)arg1;
- (void)dismissDeletePanel:(id)arg1;
- (void)didEndNewDeleteSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)didEndSaveSheetForExport:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)scmExport:(id)arg1;
- (void)finishedExport:(id)arg1;
- (void)scmCheckout:(id)arg1;
- (void)startSavePanelWithTitle:(id)arg1 message:(id)arg2 prompt:(id)arg3 path:(id)arg4 returnToSelector:(SEL)arg5;
- (void)didEndSaveSheetForCheckout:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)finishedCheckout:(id)arg1;
- (void)openProject:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)scmImport:(id)arg1;
- (void)scmImportPath:(id)arg1;
- (void)startOpenPanelWithTitle:(id)arg1 message:(id)arg2 prompt:(id)arg3 path:(id)arg4 filename:(id)arg5 accessoryView:(id)arg6 returnToSelector:(SEL)arg7;
- (void)didEndOpenSheetForImport:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)importFiles:(id)arg1 toPath:(id)arg2 withMessage:(id)arg3;
- (void)finishedImport:(id)arg1;
- (void)scmNewFolder:(id)arg1;
- (void)dismissFolderPanel:(id)arg1;
- (void)didEndNewFolderSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateAction:(SEL)arg1;
- (void)clearSCMLog:(id)arg1;
- (void)doubleClickAction:(id)arg1;
- (void)singleClickAction:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)selectedPaths;
- (id)moveSelection;
- (id)selectedEntries;
- (id)selectedEntry;
- (id)selectedRepository;
- (void)reportSCMMessage:(id)arg1 title:(id)arg2 completionCode:(int)arg3;
- (void)showErrorMessage:(id)arg1 title:(id)arg2;
- (void)dismissPanel:(id)arg1;
- (void)show;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;
- (id)scmManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

