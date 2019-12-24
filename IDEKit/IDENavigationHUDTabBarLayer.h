/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

#import "IDENavigationHUDDisposableLayer-Protocol.h"
#import "IDENavigationHUDSelectionDrivenLayer-Protocol.h"
#import "IDENavigationHUDWindowLevelNavigableLayer-Protocol.h"

@class CAGradientLayer, CAScrollLayer, IDENavigationHUDSelection, IDENavigationHUDTabBarNewTabLayer, IDENavigationHUDTabBarTabLayer, IDENavigationHUDWorkspaceWindowLayer, IDEWorkspaceWindowController, NSDictionary, NSMapTable, NSString;

@interface IDENavigationHUDTabBarLayer : CALayer <IDENavigationHUDSelectionDrivenLayer, IDENavigationHUDWindowLevelNavigableLayer, IDENavigationHUDDisposableLayer>
{
    IDENavigationHUDWorkspaceWindowLayer *_workspaceWindowLayer;
    NSMapTable *_strongTabControllerToStrongTabLayerMap;
    IDENavigationHUDTabBarNewTabLayer *_newTabButton;
    BOOL _shouldScrollSelectedTabVisibleInLayout;
    IDENavigationHUDSelection *_initialSelection;
    IDENavigationHUDSelection *_selection;
    CAGradientLayer *_rightOverflowLayer;
    CAGradientLayer *_leftOverflowLayer;
    CAScrollLayer *_tabsScrollLayer;
    NSDictionary *_options;
}

@property(copy) IDENavigationHUDSelection *selection; // @synthesize selection=_selection;
@property(readonly) IDENavigationHUDWorkspaceWindowLayer *workspaceWindowLayer; // @synthesize workspaceWindowLayer=_workspaceWindowLayer;
- (void).cxx_destruct;
- (id)selectionForNavigatingRightOneTab;
- (id)selectionForNavigatingLeftOneTab;
- (id)selectionForNavigatingRight;
- (id)selectionForNavigatingLeft;
- (id)selectionForNavigatingDown;
- (id)selectionForNavigatingUp;
@property(readonly) IDENavigationHUDTabBarTabLayer *selectedTabLayer;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)orderedTabLayers;
- (id)tabLayerForTabController:(id)arg1;
- (id)navigationHUDController;
@property(readonly) IDEWorkspaceWindowController *workspaceWindowController;
@property(readonly) BOOL shouldOnlySelectInitialTab;
@property(readonly) BOOL canCreateNewTab;
- (void)dispose;
- (id)initWithWorkspaceWindowLayer:(id)arg1 initialSelection:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

