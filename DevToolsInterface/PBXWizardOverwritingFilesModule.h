//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

@class NSArray, NSBox, NSButton, PBXItemsSelectionModule;

@interface PBXWizardOverwritingFilesModule : PBXModule
{
    NSBox *_itemsSelectionBox;
    NSButton *_cancelButton;
    NSButton *_overwriteSelectedButton;
    NSButton *_createFreshButton;
    PBXItemsSelectionModule *_itemsSelectionModule;
    PBXModule *_module;
    NSArray *_files;
    NSArray *_filesToOverwrite;
    long long _userChoice;
}

+ (id)sharedWizardOverwritingFilesModule;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)createFreshAction:(id)arg1;
- (void)overwriteSelectedAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)runModalForFiles:(id)arg1 relativeToWindow:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4;
- (id)filesToOverwrite;
- (void)_setFilesToOverwrite:(id)arg1;
- (long long)userChoice;
- (void)_setUserChoice:(long long)arg1;
- (void)viewDidLoad;
- (void)_updateIvarsFromUI;
- (void)_updateUIFromIvars;
- (void)_setFiles:(id)arg1;
- (struct CGSize)viewMinSize;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (Class)moduleWindowClass;
- (id)loadModuleWindow;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;

@end

