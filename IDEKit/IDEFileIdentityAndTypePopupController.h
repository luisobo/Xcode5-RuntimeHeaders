/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSMenuItem, NSPopUpButton;

@interface IDEFileIdentityAndTypePopupController : IDEInspectorProperty
{
    IDEInspectorKeyPath *_assignedFileTypeKeyPath;
    IDEInspectorKeyPath *_resolvedFilePathKeyPath;
    NSMenuItem *_defaulItem;
    NSPopUpButton *_popup;
}

@property(retain, nonatomic) NSPopUpButton *popup; // @synthesize popup=_popup;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)refreshPopUpContent;
- (void)refreshPopUpSelection;
- (id)menuItemWithForFileDataType:(id)arg1;
- (void)showValueItem:(id)arg1;
- (void)showMarkerItemWithTitle:(id)arg1;
- (id)defaultTypeDisplayValue;
- (id)displayedGroups;
- (BOOL)canSelectFileTypeFile;
- (BOOL)canSelectFileTypeDirectory;
- (id)nibName;
- (double)baseline;

@end

