//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDENavigationHUDBorderedGradientLayer.h>

#import "IDENavigationHUDDisposableLayer.h"
#import "IDENavigationHUDSelectableLayer.h"

@class CALayer, IDENavigationHUDSelection, IDENavigationHUDTabBarLayer, IDEWorkspaceTabController, NSString;

@interface IDENavigationHUDTabBarTabLayer : IDENavigationHUDBorderedGradientLayer <IDENavigationHUDSelectableLayer, IDENavigationHUDDisposableLayer>
{
    IDEWorkspaceTabController *_workspaceTabController;
    IDENavigationHUDTabBarLayer *_tabBarLayer;
    unsigned long long _tabState;
    struct CGSize _lastKnownOverlaySize;
    CALayer *_overlayLayer;
}

@property(readonly) IDENavigationHUDTabBarLayer *tabBarLayer; // @synthesize tabBarLayer=_tabBarLayer;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(nonatomic) unsigned long long tabState; // @synthesize tabState=_tabState;
- (void).cxx_destruct;
@property(readonly) BOOL representativeSelectionIsFinalForSingleMouseUp;
@property(readonly) IDENavigationHUDSelection *representativeSelection;
- (id)navigationHUDController;
- (void)layoutSublayers;
- (void)dispose;
- (id)initWithWorkspaceTabController:(id)arg1 tabBarLayer:(id)arg2;
- (id)initWithTabBarLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

