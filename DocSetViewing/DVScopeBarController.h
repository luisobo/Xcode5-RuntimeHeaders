/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSMenuDelegate-Protocol.h"

@class DVMainController, DVQueryOptionsController, DVScopeBarMultiSelectionViewFactory, DVScopeMultiSelectionWindow, NSBox, NSButton, NSPopUpButton, NSString;

@interface DVScopeBarController : NSObject <NSMenuDelegate>
{
    DVMainController *mainController;
    DVQueryOptionsController *queryController;
    NSButton *containsButton;
    NSButton *prefixButton;
    NSButton *exactButton;
    NSButton *allDocSetsButton;
    NSPopUpButton *myDocSetsButton;
    NSButton *allLanguagesButton;
    NSPopUpButton *myLanguagesButton;
    NSBox *box1;
    NSBox *box2;
    DVScopeMultiSelectionWindow *multiSelectionWindow;
    DVScopeBarMultiSelectionViewFactory *multiSelectionFactory;
}

- (void)dismissOptionsWindow:(id)arg1;
- (void)showMultiSelectionWindowWithView:(id)arg1 relativeToScopeButton:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toggleSearchingForLanguage:(id)arg1;
- (void)toggleSearchingForDocSet:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)popUpSearchOptionsMenu:(id)arg1 relativeToScopeButton:(id)arg2;
- (void)updateButtonTitles;
- (void)setMenu:(id)arg1 forPopUpButton:(id)arg2 title:(id)arg3;
- (void)positionScopeButtons;
- (void)docSetWasUnloaded:(id)arg1;
- (void)docSetWasLoaded:(id)arg1;
- (void)myLanguages:(id)arg1;
- (void)myDocSets:(id)arg1;
- (void)exactSearch:(id)arg1;
- (void)prefixSearch:(id)arg1;
- (void)containsSearch:(id)arg1;
- (void)refreshSearchResults;
- (void)setMatchTypeAndStartSearching:(unsigned long long)arg1;
- (void)update;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

