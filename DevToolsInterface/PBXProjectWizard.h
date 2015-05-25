//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXFileCopyingWizard.h>

#import "NSComboBoxDelegate.h"
#import "NSTextViewDelegate.h"

@class NSButton, NSString, NSTextField, PBXCompletionManager, PBXExtendedComboBox;

@interface PBXProjectWizard : PBXFileCopyingWizard <NSTextViewDelegate, NSComboBoxDelegate>
{
    NSTextField *_nameField;
    PBXExtendedComboBox *_directoryField;
    NSButton *_setDirectoryButton;
    NSTextField *_explanationField;
    NSString *_localizedDescription;
    PBXCompletionManager *_completionManager;
}

+ (id)categorizedWizardName;
+ (void)unregisterAsChoosableWizard;
+ (void)registerAsChoosableWizard;
+ (id)registeredWizardClasses;
- (void)_finishTemplateInstantiationAfterFileCopying:(id)arg1 instantiationResult:(id)arg2;
- (BOOL)_prepareToCreateFreshProduct:(id)arg1;
- (id)_instantiationDirectory;
- (id)createProjectAtPath:(id)arg1;
- (void)finish;
- (BOOL)canFinish;
- (void)createDirectorySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_projectExtensionNotRequiredSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)_validateAndFixProjectName;
- (BOOL)validateSettings;
- (void)sheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)chooseProjectDirectory:(id)arg1;
- (void)takeProjectDirectoryFrom:(id)arg1;
- (void)_setNewProjectDirectoryPath:(id)arg1;
- (id)_newProjectDirectoryPath;
- (void)_setNewProjectName:(id)arg1;
- (id)_newProjectName;
- (id)_setDirectoryButton;
- (id)_directoryField;
- (id)_nameField;
- (void)_setCompletionManager:(id)arg1;
- (id)_completionManager;
- (void)setLocalizedDescription:(id)arg1;
- (id)localizedDescription;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (BOOL)comboBoxShouldBecomeFirstResponder:(id)arg1;
- (id)firstKeyView;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)setupDefaultSettings;
- (void)viewDidLoad;
- (void)_updateDirectoryPathForProposedProjectName:(id)arg1;
- (void)_populateSavedPathsComboBox;
- (id)label;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 parentPage:(id)arg2 nextPage:(id)arg3 parentNextPageSelector:(SEL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

