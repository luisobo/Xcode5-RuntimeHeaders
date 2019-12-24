/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDENavigationHUDAbstractWorkspaceWindowLayer.h>

#import "IDENavigationHUDSelectionDrivenLayer-Protocol.h"

@class CAScrollLayer, IDENavigationHUDSelection, IDENavigationHUDTabBarLayer, IDEWorkspaceWindowController, NSArray, NSDictionary, NSMapTable, NSString;

@interface IDENavigationHUDWorkspaceWindowLayer : IDENavigationHUDAbstractWorkspaceWindowLayer <IDENavigationHUDSelectionDrivenLayer>
{
    NSMapTable *_strongWorkspaceTabControllerToStrongTabLayerMap;
    IDEWorkspaceWindowController *_workspaceWindowController;
    NSMapTable *_strongDividerLayerToLastKnownBoundsMap;
    NSMapTable *_strongTabLayerToStrongDividerLayerMap;
    IDENavigationHUDTabBarLayer *_tabBarLayer;
    IDENavigationHUDSelection *_selection;
    CAScrollLayer *_mainTabScrollLayer;
    NSArray *_orderedTabLayers;
    NSDictionary *_options;
}

@property(copy) IDENavigationHUDSelection *selection; // @synthesize selection=_selection;
@property(readonly) IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;
- (void).cxx_destruct;
- (id)selectionForNavigatingRightOneTab;
- (id)selectionForNavigatingLeftOneTab;
- (id)selectionForNavigatingRight;
- (id)selectionForNavigatingLeft;
- (id)selectionForNavigatingDown;
- (id)selectionForNavigatingUp;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setLastKnownBounds:(struct CGRect)arg1 forDividerLayer:(id)arg2;
- (struct CGRect)lastKnownBoundsForDividerLayer:(id)arg1;
- (id)dividerLayerForTabLayer:(id)arg1;
- (id)tabLayerForWorkspaceTabController:(id)arg1;
- (void)scrollSelectedTabVisible;
- (id)selectedTabLayer;
- (id)representativeSelection;
@property(readonly) BOOL shouldShowTabBar;
@property(readonly) BOOL shouldOnlySelectInitialTab;
@property(readonly) BOOL canCreateNewTab;
- (void)dispose;
- (id)initWithNavigationHUDController:(id)arg1 workspaceWindowController:(id)arg2 initialSelection:(id)arg3 options:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

