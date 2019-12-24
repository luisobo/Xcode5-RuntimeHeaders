/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XCSUI/XCSBotSupportingEditor.h>

@class DVTChoice, DVTObservingToken;

@interface XCSBotIntegrationEditor : XCSBotSupportingEditor
{
    DVTObservingToken *_botIntegrationObserver;
    DVTChoice *_logsChoice;
}

@property(retain) DVTChoice *logsChoice; // @synthesize logsChoice=_logsChoice;
- (void).cxx_destruct;
- (void)showLogsTab:(id)arg1;
- (id)integrationInProgressChoices;
- (id)choices;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)loadView;

@end

