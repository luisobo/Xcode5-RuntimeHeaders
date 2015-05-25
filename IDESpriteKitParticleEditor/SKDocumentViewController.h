//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditor.h"

#import "DVTFindBarFindable.h"
#import "DVTReplacementViewDelegate.h"
#import "SKFileSystemEventStreamDelegate.h"

@class EditOverlayView, NSArray, NSButton, NSPopUpButton, NSString, NSTextField, SKDocument, SKEditView, SKFileSystemEventStream, SKToolbarBackgroundView;

@interface SKDocumentViewController : IDEEditor <DVTReplacementViewDelegate, DVTFindBarFindable, SKFileSystemEventStreamDelegate>
{
    NSButton *_pausePlayButton;
    NSTextField *_pausePlayTextField;
    NSButton *_zoomInButton;
    NSButton *_zoomRestoreButton;
    NSButton *_zoomOutButton;
    NSPopUpButton *_addPopupButton;
    SKToolbarBackgroundView *_toolbarBackgroundView;
    SKFileSystemEventStream *_eventStream;
    BOOL _lastScenePaused;
    SKEditView *_mainView;
    EditOverlayView *_overlayView;
    NSArray *_currentSelectedItems;
}

+ (BOOL)canProvideCurrentSelectedItems;
@property(copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(nonatomic) __weak EditOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak SKEditView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)windowChangedOcclusionState:(id)arg1;
- (void)setToolbarBackgroundViewActive:(BOOL)arg1;
- (void)didEvaluateActionsOverride;
- (void)replaceDidEvaluateActions:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (void)takeFocus;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly) SKDocument *document;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)receivedShaderSourceEditorStartedNotification:(id)arg1;
- (void)editorMenuSendToBack:(id)arg1;
- (void)editorMenuBringToFront:(id)arg1;
- (void)editorMenuTogglePlayPause:(id)arg1;
- (void)rebuildShaderForPath:(id)arg1 skipIfNoChange:(BOOL)arg2;
- (void)fileSystemEventStream:(id)arg1 notedChangeAtPath:(id)arg2 scanRecursively:(BOOL)arg3;
- (void)registerFSEvents;
- (id)currentSelectedDocumentLocations;
- (void)invalidateFSEvents;
- (id)_activeWorkspace;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

