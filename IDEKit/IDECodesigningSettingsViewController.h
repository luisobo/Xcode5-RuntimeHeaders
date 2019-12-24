/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "NSMenuDelegate-Protocol.h"

@class NSPopUpButton, NSProgressIndicator, NSString, NSTextField;

@interface IDECodesigningSettingsViewController : IDEViewController <NSMenuDelegate>
{
    NSPopUpButton *_developmentTeamPopup;
    NSTextField *_codesigningIdentityName;
    NSTextField *_codesigningProfileName;
    NSProgressIndicator *_developmentTeamRefreshIndicator;
    id <IDECodesigningSettings> _model;
}

@property(readonly, nonatomic) id <IDECodesigningSettings> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)developerPortalRefreshStateChanged:(id)arg1;
- (void)developmentTeamMenuSelectionChanged:(id)arg1;
- (void)updateDevelopmentTeamMenuSelection;
- (void)menuNeedsUpdate:(id)arg1;
- (void)refreshDevelopmentTeams:(id)arg1 forceSync:(BOOL)arg2;
- (void)refreshDevelopmentTeamsIfNeeded;
- (void)setTarget:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

