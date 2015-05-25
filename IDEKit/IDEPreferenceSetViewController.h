//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "NSMenuDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class DVTBorderedView, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTImageAndTextColumn, DVTMapTable, DVTObservingToken, DVTPreferenceSetManager, DVTScrollView, IDEControlGroup, NSArray, NSArrayController, NSMenuItem, NSString, NSTableView;

@interface IDEPreferenceSetViewController : IDEViewController <NSTableViewDelegate, NSTableViewDataSource, NSMenuDelegate>
{
    NSMenuItem *_duplicateSelectedThemeMenuItem;
    NSMenuItem *_newThemeFromTemplateMenuItem;
    DVTImageAndTextColumn *_tableColumn;
    DVTBorderedView *_viewControllerBorderedView;
    NSTableView *_tableView;
    DVTGradientImagePopUpButton *_addPopUpButton;
    DVTGradientImageButton *_removeButton;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlGroupBorderedView;
    NSArrayController *_prefSetsArrayController;
    DVTScrollView *_scrollView;
    DVTPreferenceSetManager *_preferenceSetManager;
    DVTMapTable *_observerTokensForPreferenceSetsMapTable;
    DVTObservingToken *_availablePreferenceSetsObserver;
    DVTObservingToken *_currentPreferenceSetObserver;
    BOOL _hasBeenSetup;
}

+ (id)keyPathsForValuesAffectingCanDeleteActivePreferenceSet;
@property(retain) DVTPreferenceSetManager *preferenceSetManager; // @synthesize preferenceSetManager=_preferenceSetManager;
@property(readonly) NSTableView *preferenceSetTableView; // @synthesize preferenceSetTableView=_tableView;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (void)deleteActivePreferenceSet:(id)arg1;
- (void)duplicateSelectedDefaultThemeFromMenu:(id)arg1;
- (void)duplicateActivePreferenceSet:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)_duplicatePreferenceSet:(id)arg1;
- (void)_removeObserversForPreferenceSet:(id)arg1;
- (void)_addObserversForPreferenceSet:(id)arg1;
- (id)_selectedPreferenceSet;
@property(readonly) NSArray *preferenceSetsSortDescriptors;
- (BOOL)canDeleteActivePreferenceSet;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)setupWithPreferenceSetManager:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

