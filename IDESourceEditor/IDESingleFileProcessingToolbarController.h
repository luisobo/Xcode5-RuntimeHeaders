//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

@class DVTBorderedView, DVTObservingToken, IDEProcessedFileAttributes, IDESourceCodeEditor, NSButton, NSPopUpButton, NSString, NSTextField;

@interface IDESingleFileProcessingToolbarController : IDEViewController
{
    DVTBorderedView *_borderedView;
    NSPopUpButton *_actionPopUpButton;
    NSTextField *_actionLabel;
    NSButton *_refreshButton;
    IDESourceCodeEditor *_editor;
    BOOL _canRefresh;
    DVTObservingToken *_currentBuildOperationObservingToken;
    IDEProcessedFileAttributes *_attributes;
}

+ (id)keyPathsForValuesAffectingActionLabel;
+ (id)defaultViewNibName;
@property(retain, nonatomic) IDEProcessedFileAttributes *attributes; // @synthesize attributes=_attributes;
@property BOOL canRefresh; // @synthesize canRefresh=_canRefresh;
@property(retain) IDESourceCodeEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (void)_updateActionPopUp;
- (BOOL)_showingAssembly;
@property(readonly) NSString *actionLabel;
- (void)selectedSchemeAction:(id)arg1;
- (void)refresh:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithEditor:(id)arg1 processedFileAttributes:(id)arg2;

@end

