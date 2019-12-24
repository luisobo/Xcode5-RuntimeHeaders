/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "DVTScopeBarContentController-Protocol.h"

@class DVTScopeBarButton, DVTSearchField, NSString;

@interface IDELogEditorScopeBar : DVTViewController <DVTScopeBarContentController>
{
    DVTScopeBarButton *_scopeLatestResultsButton;
    DVTScopeBarButton *_scopeAllResultsButton;
    DVTScopeBarButton *_scopeAllMessagesButton;
    DVTScopeBarButton *_scopeAllIssuesButton;
    DVTScopeBarButton *_scopeErrorsOnlyButton;
    DVTSearchField *_scopeSearchField;
    id _delegate;
}

+ (id)defaultViewNibName;
@property(retain) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchFieldAction:(id)arg1;
- (void)showErrorsOnly:(id)arg1;
- (void)showAllIssues:(id)arg1;
- (void)showAllMessages:(id)arg1;
- (void)showLatestResults:(id)arg1;
- (void)showAllResults:(id)arg1;
- (void)setScopeBarState:(int)arg1 showAllResults:(BOOL)arg2;
@property(readonly) double preferredViewHeight;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

