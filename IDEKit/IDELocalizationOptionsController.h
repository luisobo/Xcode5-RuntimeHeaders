//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSMenu, NSPopUpButton;

@interface IDELocalizationOptionsController : IDELaunchActionOptionViewController
{
    NSPopUpButton *_localePopup;
    NSMenu *_localeMenu;
    NSPopUpButton *_regionPopup;
    NSMenu *_regionMenu;
}

+ (id)qualifiedDisplayNameForComponents:(id)arg1;
+ (BOOL)isInviolableLocaleIdentifier:(id)arg1;
+ (id)regionDisplayNameForInviolableLocaleIdentifier:(id)arg1 custom:(BOOL)arg2;
+ (id)countryNameForLocaleIdentifier:(id)arg1;
+ (BOOL)availableForScheme:(id)arg1;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_updateMenu:(id)arg1;
- (void)_updateRecentsInRegionMenu;
- (void)_addRecentRegion:(id)arg1;
- (id)_recentRegions;
- (void)_buildRegionMenu;
- (void)_addBuiltInRegionsToRegionMenu;
- (void)_buildLocaleMenu;
- (id)_localesInWorkspace:(id)arg1;
- (void)selectRegionItem:(id)arg1;
- (void)selectLocaleItem:(id)arg1;
- (void)viewDidInstall;

@end

