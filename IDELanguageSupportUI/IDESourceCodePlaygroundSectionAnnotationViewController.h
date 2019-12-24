/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "NSPopoverDelegate-Protocol.h"

@class DVTNotificationToken, DVTObservingToken, DVTRolloverImageButton, IDELoggerDrivenValueHistoryToy, IDEPlaygroundQuickLookPopover, IDESourceCodePlaygroundSection, IDESourceCodePlaygroundSectionAccessoryViewAnnotation, NSButton, NSLayoutConstraint, NSString, NSView, _IDESourceCodePlaygroundSectionAnnotationView;

@interface IDESourceCodePlaygroundSectionAnnotationViewController : DVTViewController <NSPopoverDelegate>
{
    IDESourceCodePlaygroundSection *_playgroundSection;
    NSView *_quickLookView;
    BOOL _valueHistoryConnected;
    IDEPlaygroundQuickLookPopover *_quickLookPopover;
    NSButton *_quickLookButton;
    DVTRolloverImageButton *_valueHistoryButton;
    NSLayoutConstraint *_quickLookViewRightEdgeConstraint;
    BOOL _mouseIsOverView;
    BOOL _toyboxIsHighlightingToy;
    id <NSObject> _sourceTextSettingsChangedObserver;
    DVTObservingToken *_associatedValueHistoryToyIsValidObservingToken;
    DVTNotificationToken *_toyboxDidHighlightToyNotificationToken;
    DVTNotificationToken *_toyboxDidFinishHighlightingToyNotificationToken;
    BOOL _toyIsSelected;
    BOOL _associatedSourceCodeIsSelected;
    IDESourceCodePlaygroundSectionAccessoryViewAnnotation *_accessoryViewAnnotation;
    id _valueHistoryActionBlock;
    id <IDEPlaygroundQuickLook> _quickLook;
    IDELoggerDrivenValueHistoryToy *_associatedValueHistoryToy;
    long long _currentDisplayState;
    _IDESourceCodePlaygroundSectionAnnotationView *_containerView;
}

@property(retain) _IDESourceCodePlaygroundSectionAnnotationView *containerView; // @synthesize containerView=_containerView;
@property(readonly) long long currentDisplayState; // @synthesize currentDisplayState=_currentDisplayState;
@property(nonatomic) BOOL associatedSourceCodeIsSelected; // @synthesize associatedSourceCodeIsSelected=_associatedSourceCodeIsSelected;
@property(nonatomic) BOOL toyIsSelected; // @synthesize toyIsSelected=_toyIsSelected;
@property(retain, nonatomic) IDELoggerDrivenValueHistoryToy *associatedValueHistoryToy; // @synthesize associatedValueHistoryToy=_associatedValueHistoryToy;
@property(retain, nonatomic) id <IDEPlaygroundQuickLook> quickLook; // @synthesize quickLook=_quickLook;
@property(copy, nonatomic) id valueHistoryActionBlock; // @synthesize valueHistoryActionBlock=_valueHistoryActionBlock;
@property(retain) IDESourceCodePlaygroundSection *playgroundSection; // @synthesize playgroundSection=_playgroundSection;
@property(retain) IDESourceCodePlaygroundSectionAccessoryViewAnnotation *accessoryViewAnnotation; // @synthesize accessoryViewAnnotation=_accessoryViewAnnotation;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (id)_quickLookImage;
- (void)_updateButtonVisibility;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateCurrentDisplayState;
- (void)_updateDisconnectedValueHistoryButtonUpdateVisibility:(BOOL)arg1;
- (void)_updateConnectedValueHistoryButtonUpdateVisibility:(BOOL)arg1;
- (id)_disconnectedValueHistoryButtonImage;
- (void)_valueHistoryButtonAction:(id)arg1;
- (void)_quickLookButtonAction:(id)arg1;
- (BOOL)_supportsValueHistory;
- (BOOL)_supportsQuickLookButton;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_rebuildUI;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_uninstallQuickLookView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

