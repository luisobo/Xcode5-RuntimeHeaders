/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXInspectorPaneModule.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "XCEDataRootAdapterP-Protocol.h"

@class NSArray, NSArrayController, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSSearchField, NSSet, NSSplitView, NSString, NSTextView, PBXExtendedOutlineView, XCPropertyConditionSet, XCPropertyDefinition, XCPropertyInfoContext;

@interface XCBuildPropertiesInspectorPane : PBXInspectorPaneModule <NSTableViewDataSource, NSTableViewDelegate, XCEDataRootAdapterP>
{
    PBXExtendedOutlineView *_buildPropertiesOutlineView;
    NSSearchField *_buildPropertiesSearchField;
    NSPopUpButton *_categoryPopUpButton;
    NSPopUpButton *_configurationPopUpButton;
    NSPopUpButton *_actionPopUpButton;
    NSSplitView *_buildPropertiesSplitView;
    NSTextView *_buildPropertiesTextView;
    NSString *_selectedConfigurationName;
    NSArray *_selectedConfigurationNames;
    NSMutableArray *_selectedConfigurations;
    NSArrayController *_selectedConfigurationsArrayController;
    XCPropertyInfoContext *_propertyInfoContext;
    NSMutableArray *_buildPropertiesArray;
    NSArrayController *_buildConfigurationsController;
    NSArrayController *_configurationFilesController;
    NSMutableArray *_buildPropertySpecifications;
    NSArray *_filterDictionaries;
    unsigned long long _selectedCategoryIndex;
    unsigned long long _lastSelectedCategoryIndex;
    NSMutableArray *_configurationFileList;
    BOOL _showPropertyAssignments;
    BOOL _showRawPropertyNames;
    struct CGRect _savedDocumentVisibleRect;
    BOOL _savedDocumentVisibleRectLocked;
    BOOL _showInternalNames;
    BOOL _showDefinitions;
    NSSearchField *_searchField;
    NSString *_searchString;
    NSString *_buildSettingDescription;
    NSMutableDictionary *_adapterForUIType;
    BOOL _needsCompleteUpdate;
    BOOL _processingCompleteUpdate;
    NSString *_selectedConfiguration;
    NSString *_preselectedName;
    XCPropertyDefinition *_preselectedDefinition;
    XCPropertyConditionSet *_preselectedConditionSet;
    NSString *_preselectedEditColumnId;
    NSMutableArray *_retainingObjects;
    long long _disableUserTrigger;
    NSArray *_currentBuildPropertySpecifications;
    NSSet *_currentPropertyDefinitionNames;
    NSArray *_currentUserDefinedNames;
    BOOL _firstRebuild;
    long long _searchCategory;
}

+ (unsigned long long)panelPosition;
+ (id)alternateLabel;
+ (id)label;
+ (id)inspectableClasses;
+ (BOOL)canInspectItems:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCurrentInspectedConfigurationListContainer;
+ (id)keyPathsForValuesAffectingSelectedConfigurationList;
+ (id)keyPathsForValuesAffectingActiveBuildConfigurationMenuTitle;
+ (id)keyPathsForValuesAffectingTargets;
+ (id)keyPathsForValuesAffectingProject;
+ (id)keyPathsForValuesAffectingPropertyNameColumnTitle;
+ (id)keyPathsForValuesAffectingShowRawPropertyNamesMenuItemTitle;
+ (id)keyPathsForValuesAffectingPropertyValueColumnTitle;
+ (id)keyPathsForValuesAffectingShowPropertyAssignmentsMenuItemTitle;
@property(copy) NSString *buildSettingDescription; // @synthesize buildSettingDescription=_buildSettingDescription;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property BOOL showDefinitions; // @synthesize showDefinitions=_showDefinitions;
@property BOOL showInternalNames; // @synthesize showInternalNames=_showInternalNames;
@property(copy) NSString *selectedConfiguration; // @synthesize selectedConfiguration=_selectedConfiguration;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)projectCanClose:(id)arg1;
- (BOOL)viewCanBeRemoved;
- (void)_updateActionPopUp;
- (void)editAssignmentOfSelectedBuildProperty:(id)arg1;
- (void)searchAction;
- (void)userTriggeredRebuild;
- (void)addCondition:(id)arg1;
- (void)addUserDefinedSetting:(id)arg1;
- (void)selectAnyPreselection;
- (void)preselectBuildSettingNamed:(id)arg1 withDefinition:(id)arg2 conditionSet:(id)arg3 editColumnId:(id)arg4;
- (void)removeLocalAssignment:(id)arg1;
- (void)processCompleteUpdate;
- (void)rebuildOutlineUsingCache:(BOOL)arg1;
- (id)rootsFromBuildableUsingCache:(BOOL)arg1;
- (void)sortRoots:(id)arg1;
- (id)userDefinedNames;
- (id)allPropertyNamesMutable;
- (id)targets;
- (id)project;
- (struct NSObject *)adapterForUIType:(id)arg1;
- (BOOL)dataSource:(id)arg1 control:(id)arg2 didFailToFormatString:(id)arg3 errorDescription:(id)arg4;
- (BOOL)propertyNameIsValidForNewSetting:(id)arg1;
- (void)setPropertyInfoContext:(id)arg1;
- (id)propertyInfoContext;
- (void)applicationDidUpdate:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)invokeCompleteUpdate:(id)arg1;
- (void)callSetNeedsCompleteUpdate:(id)arg1;
- (void)callSetNeedsCompleteUpdate;
- (void)callSetNeedsDisplay:(id)arg1;
- (void)callSetNeedsDisplay;
- (id)inspectedBuildable;
- (void)_moduleSpecificDebugInfoForDebugMenu:(id)arg1;
- (void)_configurationNamesChangedInProject:(id)arg1;
- (void)_logSortDescriptors:(id)arg1 title:(id)arg2;
- (void)dataSource:(id)arg1 outlineView:(id)arg2 sortDescriptorsDidChange:(id)arg3;
- (id)additionalPasteboardTypesToDeclare;
- (id)additionalPasteboardTypes;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 createItemsFromPasteboard:(id)arg2;
- (BOOL)_modifyBuildPropertiesUsingPasteboard:(id)arg1;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)_alertWithErrorString:(id)arg1;
- (void)_delayedAlertWithErrorString:(id)arg1;
- (void)_alertWithErrorStringDidEndOrDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showRawPropertyNamesMenuItemSelected:(id)arg1;
- (void)showPropertyAssignmentsMenuItemSelected:(id)arg1;
- (void)showRawPropertyNamesMenuItemSelected;
- (void)showPropertyAssignmentsMenuItemSelected;
- (void)removeLocalAssignmentForSelectedBuildProperty:(id)arg1;
- (void)addUserDefinedBuildProperty:(id)arg1;
- (void)addBuildPropertyToSelectionForNewCondition:(id)arg1;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_disableFlushInspectorWindowLocal;
- (void)_enableFlushInspectorWindowLocal;
- (void)_disableFlushInspectorWindow;
- (void)_enableFlushInspectorWindow;
- (id)buildPropertiesOutlineView;
- (void)editConfigurations:(id)arg1;
- (void)takeInspectedConfigurationNameFrom:(id)arg1;
- (void)cancelPendingEdits;
- (BOOL)confirmPendingEdits;
- (void)savePendingEdits:(id)arg1;
- (void)referenceWillBeRemovedFromProject:(id)arg1;
- (void)referenceWasAddedToProject:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)activeBuildConfigurationChanged:(id)arg1;
- (void)scrollToStoredPosition;
- (void)storeScrollPosition;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (long long)searchCategory;
- (void)setSearchCategoryFrom:(id)arg1;
- (void)configureSearchMenu;
- (BOOL)validateSelectedCategoryIndex:(id *)arg1 error:(id *)arg2;
- (void)setSelectedCategoryIndex:(unsigned long long)arg1;
- (unsigned long long)selectedCategoryIndex;
- (id)filterDictionaries;
- (id)descriptionForDataNode:(id)arg1;
- (id)dataSource:(id)arg1 contextMenuForSelectedNodes:(id)arg2;
- (id)showRawPropertyNamesMenuItemTitle;
- (id)showPropertyAssignmentsMenuItemTitle;
- (void)setShowPropertyAssignments:(BOOL)arg1;
- (BOOL)showPropertyAssignments;
- (void)setShowRawPropertyNames:(BOOL)arg1;
- (BOOL)showRawPropertyNames;
- (id)propertyValueColumnTitle;
- (id)propertyNameColumnTitle;
- (id)selectedConfigurationFile;
- (void)setSelectedConfigurationFile:(id)arg1;
- (id)configurationFileList;
- (void)_rebuildConfigurationFileList;
- (void)_rebuildConfigurationPopupButton;
- (void)_selectConfigurationInPopUpButton;
- (void)setSelectedConfigurationName:(id)arg1;
- (id)selectedConfigurationName;
- (void)_storeSelectedConfigurationName;
- (void)_restoreSelectedConfigurationName;
- (void)_rebuildSelectedConfigurationNames;
- (void)setSelectedConfigurationNames:(id)arg1;
- (id)selectedConfigurationNames;
- (void)_rebuildSelectedConfigurations;
- (id)selectedConfigurations;
- (id)buildConfigurationNames;
- (id)selectedConfigurationList;
- (id)currentInspectedConfigurationListContainer;
- (id)currentInspectedConfigurationListContainers;
- (void)dealloc;
- (void)closeModule;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

