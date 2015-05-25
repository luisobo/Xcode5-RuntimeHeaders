//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "IDEFilterControlBarTarget.h"
#import "IDENavigableItemCoordinatorDelegate.h"

@class IDENavigableItem, IDENavigableItemCoordinator, NSMenu, NSMutableDictionary, NSPredicate, NSString, NSView;

@interface IDENavigator : IDEViewController <IDENavigableItemCoordinatorDelegate, IDEFilterControlBarTarget>
{
    IDENavigableItem *_rootNavigableItem;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    NSMutableDictionary *_cachedStateForParentViewController;
    NSView *_primaryFilterControl;
    NSPredicate *_filterPredicate;
    BOOL _filteringEnabled;
}

+ (BOOL)automaticallyNotifiesObserversOfRootNavigableItem;
+ (void)initialize;
@property __weak NSMutableDictionary *cachedStateForParentViewController; // @synthesize cachedStateForParentViewController=_cachedStateForParentViewController;
@property(retain, nonatomic) IDENavigableItem *rootNavigableItem; // @synthesize rootNavigableItem=_rootNavigableItem;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain) NSView *_primaryFilterControl; // @synthesize _primaryFilterControl;
@property(nonatomic, getter=isFilteringEnabled) BOOL filteringEnabled; // @synthesize filteringEnabled=_filteringEnabled;
- (void).cxx_destruct;
- (void)focusedEditorDidSelectItem:(id)arg1;
- (id)navigableItemsForArchivedNavigableItems:(id)arg1;
- (void)revealArchivedNavigableItems:(id)arg1;
- (void)revealNavigableItems:(id)arg1;
- (void)_revealNavigableItems:(id)arg1;
@property(readonly) NSString *filterDefinitionIdentifier;
- (BOOL)canBecomeMainViewController;
- (void)primitiveInvalidate;
- (BOOL)makePrimaryFilterControlKey;
@property(readonly) NSString *filterButtonAccessibilityDescription;
@property(readonly) NSString *filterButtonToolTip;
@property(readonly) NSMenu *filterButtonMenu;
@property(readonly) NSString *domainIdentifier;
@property(retain) IDENavigableItemCoordinator *navigableItemCoordinator;
- (void)setOutputSelection:(id)arg1;
- (void)updateBoundSelection;
- (void)viewDidInstall;
- (void)updateBoundContent;
- (id)dvtExtraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

