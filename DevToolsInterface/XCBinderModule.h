//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import "NSWindowDelegate.h"
#import "XCEDataRootAdapterP.h"
#import "XCSelectionSource.h"

@class NSButton, NSSplitView, NSString, NSView, PBXNavigatorGroup, PBXProject, PBXProjectDocument, PBXProjectFindModule, XCBinder, XCBinderOutlineView, XCEConfigurableDataNode, XCEConfigurableDataSource, XCElementActionButton, XCOrganizerFileNodeAdapter;

@interface XCBinderModule : PBXModule <NSWindowDelegate, XCEDataRootAdapterP, XCSelectionSource>
{
    XCBinder *_binder;
    NSSplitView *_splitViewMain;
    NSView *_bottomGradientBackground;
    NSView *_splitterHandle;
    XCElementActionButton *_addMenuButton;
    XCElementActionButton *_actionMenuButton;
    NSButton *_toggleEditorButton;
    NSView *_viewLeft;
    NSView *_viewRight;
    XCBinderOutlineView *_outlineView;
    PBXNavigatorGroup *_navigatorGroup;
    int _editingActionType;
    PBXProjectFindModule *_findModule;
    PBXProject *_findProject;
    PBXProjectDocument *_findProjectDocument;
    XCEConfigurableDataSource *dataSource;
    XCEConfigurableDataNode *filesNode;
    XCEConfigurableDataNode *developerProfileNode;
    XCEConfigurableDataNode *archivedAppsNode;
    XCEConfigurableDataNode *devicesNode;
    XCEConfigurableDataNode *developmentNode;
    XCOrganizerFileNodeAdapter *fileNodeAdapter;
}

+ (void)showBinderWindow;
+ (BOOL)sharedModuleExists;
+ (id)sharedModule;
+ (id)keyPathsForValuesAffectingToggleEditorButtonAltImage;
+ (id)keyPathsForValuesAffectingToggleEditorButtonImage;
+ (id)_pathToBinderStore;
+ (id)_nameOfBinderStore;
+ (id)_pathToXcodeDirectory;
+ (id)_pathToObsoleteBinderStore;
+ (id)_pathToObsoleteXcodeDirectory;
@property(retain) XCOrganizerFileNodeAdapter *fileNodeAdapter; // @synthesize fileNodeAdapter;
@property(retain) XCEConfigurableDataNode *developmentNode; // @synthesize developmentNode;
@property(retain) XCEConfigurableDataNode *devicesNode; // @synthesize devicesNode;
@property(retain) XCEConfigurableDataNode *archivedAppsNode; // @synthesize archivedAppsNode;
@property(retain) XCEConfigurableDataNode *developerProfileNode; // @synthesize developerProfileNode;
@property(retain) XCEConfigurableDataNode *filesNode; // @synthesize filesNode;
@property(retain) XCEConfigurableDataSource *dataSource; // @synthesize dataSource;
- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (BOOL)performKeyEquivalent:(id)arg1 forWindow:(id)arg2;
- (BOOL)_outlineViewIsEditing;
- (void)_exportActionsPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_exportActions:(id)arg1;
- (void)_createNewFile:(id)arg1;
- (void)_createNewFolder:(id)arg1;
- (void)savePanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (id)_createFileAtPath:(id)arg1;
- (id)_createDirectoryAtPath:(id)arg1;
- (id)_uniqueNameAtPath:(id)arg1 withBaseName:(id)arg2;
- (void)_assignNewLocation:(id)arg1;
- (void)_assignNewLocationPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_revealInFinder:(id)arg1;
- (void)_openWithFinder:(id)arg1;
- (id)dataSource:(id)arg1 contextMenuForSelectedNodes:(id)arg2;
- (id)dataSource:(id)arg1 pasteboardFilenamesForNodes:(id)arg2;
- (void)dataSource:(id)arg1 askToDeleteRootNodes:(id)arg2 nonRootNodes:(id)arg3;
- (void)dataSource:(id)arg1 askToDeleteNodes:(id)arg2;
- (void)_askToDeleteDataNodesConfirmationSheetDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)dataSource:(id)arg1 acceptDroppedItems:(id)arg2 atChildIndex:(long long)arg3;
- (BOOL)dataSource:(id)arg1 canAcceptDroppedItem:(id)arg2 atChildIndex:(long long)arg3;
- (id)_createActionMenu;
- (id)_createAddItemMenu;
- (id)_createContextMenuWithItems:(CDStruct_3310b9fc *)arg1 count:(unsigned long long)arg2;
- (id)_createOrganizerTemplatesMenuFromTemplates:(id)arg1;
- (void)_instantiateOrganizerTemplateAction:(id)arg1;
- (void)_askToInstantiateOrganizerTemplate:(id)arg1 inDirectoryAtPath:(id)arg2;
- (void)_askToInstantiateOrganizerTemplateSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_revealPath:(id)arg1;
- (BOOL)_selectedDirectoryContainsPath:(id)arg1;
- (void)deleteSelectedItems:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (BOOL)moduleWindowShouldClose:(id)arg1;
- (void)moduleWindowWillClose:(id)arg1;
- (void)showModule:(id)arg1;
- (id)loadModuleWindow;
- (id)windowController;
- (void)resignTopKeyModuleInWindow:(id)arg1;
- (void)becomeTopKeyModuleInWindow:(id)arg1;
- (void)clearModuleSelectionInWindow:(id)arg1;
- (void)postModuleSelectionInWindow:(id)arg1;
- (id)moduleToolbarAllowedItemIdentifiers;
- (id)moduleToolbarDefaultItemIdentifiers;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)_createActionButtonWithItemIdent:(id)arg1 label:(id)arg2 imageName:(id)arg3 actionType:(int)arg4 defaultAction:(SEL)arg5;
- (id)moduleToolbarIdentifier;
- (void)revealPath:(id)arg1 inSearchedItem:(id)arg2;
- (id)_revealNodeForPath:(id)arg1 startingWith:(id)arg2;
- (void)_findInDirectory:(id)arg1;
- (void)_projectFindWindowWillClose:(id)arg1;
- (void)_closeFindModuleAndProjectInfrastructure;
- (void)_replaceContentsOfGroup:(id)arg1 withItemsAtPaths:(id)arg2;
- (id)_selectedOrAllPaths;
- (void)_restoreSnapshot:(id)arg1;
- (void)_takeSnapshot:(id)arg1;
- (BOOL)validForFind;
- (id)menuTitleForFind;
- (id)titleForFind;
- (void)_addItemToOrganizerAction:(id)arg1;
- (void)_addItemsToOrganizerSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_toolbarActionButtonForActionType:(int)arg1;
- (id)_toolbarItemIdentifierForActionType:(int)arg1;
- (id)_lastActionForActionType:(int)arg1;
- (void)buildOperationDidStop:(id)arg1;
- (void)buildOperationDidReportStatus:(id)arg1;
- (void)buildOperationWillStart:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
@property(readonly) double minimumViewHeight;
@property(readonly) double minimumViewWidth;
@property(readonly) double minimumRightViewWidth;
@property(readonly) double minimumLeftViewWidth;
@property BOOL editorShown;
- (void)toggleEditorVisibility:(id)arg1;
- (BOOL)loadView;
- (id)toggleEditorButtonAltImage;
- (id)toggleEditorButtonImage;
- (BOOL)useOrganizerStyleDragAndDrop;
- (void)_selectNewArchivedBuild:(id)arg1;
- (void)selectDataNodeForRemoteComputer:(id)arg1;
- (BOOL)addFileNodeByName:(id)arg1;
- (void)addRootNode:(id)arg1;
- (void)_setUpTableDataSource;
- (Class)moduleWindowClass;
- (void)viewWasInstalled;
- (void)viewDidLoad;
- (void)becomeActive;
- (BOOL)doubleClickDataNode:(id)arg1 inColumn:(id)arg2;
- (BOOL)openFile:(id)arg1;
- (void)textDidEndEditing;
- (void)_activateEditorIfNewFileSelected;
- (BOOL)selectDataNode:(id)arg1;
- (void)_selectBuildDirectory:(id)arg1;
- (void)_updateViewConfigurationIsInitial:(BOOL)arg1;
- (id)mainEditor;
- (void)_updateToolbar;
- (void)_updateStatusBar;
- (id)_createEditor;
- (void)_switchEmbeddedEditorToNode:(id)arg1;
- (BOOL)_isExcludedPathExtension:(id)arg1;
- (void)updateAndSaveRoots;
- (id)_errorIndicatingFileAlreadyExistsAtPath:(id)arg1;
- (void)_notifyObserversThatFileAtPath:(id)arg1 movedToPath:(id)arg2;
- (void)_saveBinder;
- (void)_loadBinder;
- (void)_editActionsForActionType:(int)arg1;
- (void)_didEndEditingScripts:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_projectDocumentForSelectedDirectory;
- (id)_projectForSelectedDirectory;
- (id)_selectedTopLevelDirectory;
- (id)_selectedDirectory;
- (id)_selectedFile;
- (id)_selectedTopLevelFSNode;
- (id)_selectedFSNode;
- (id)_selectedNodeInfo;
- (id)_selectedDataNode;
- (id)_outlineView;
@property(retain) XCBinder *binder;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

