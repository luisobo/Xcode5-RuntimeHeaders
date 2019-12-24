/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSColor, NSImage, NSString, NSViewController<XCSUIStatusBadgeClickHandler>, XCSUIStatusBadgeView;

@interface XCSUIStatusBadge : NSObject
{
    BOOL _supportsTrackingAndSelection;
    BOOL _showNewIssuesResolvedIssuesDifferencesCount;
    NSString *_badgeLabel;
    NSImage *_badgeIcon;
    double _preferredFontSize;
    unsigned long long _badgeCount;
    unsigned long long _secondaryBadgeCount;
    NSColor *_secondaryBadgeColor;
    NSColor *_badgeColor;
    NSColor *_lightBadgeColor;
    NSViewController<XCSUIStatusBadgeClickHandler> *_hostViewController;
    long long _countOfNewIssues;
    long long _countOfResolvedIssues;
    XCSUIStatusBadgeView *_badgeView;
}

@property __weak XCSUIStatusBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property long long countOfResolvedIssues; // @synthesize countOfResolvedIssues=_countOfResolvedIssues;
@property long long countOfNewIssues; // @synthesize countOfNewIssues=_countOfNewIssues;
@property BOOL showNewIssuesResolvedIssuesDifferencesCount; // @synthesize showNewIssuesResolvedIssuesDifferencesCount=_showNewIssuesResolvedIssuesDifferencesCount;
@property BOOL supportsTrackingAndSelection; // @synthesize supportsTrackingAndSelection=_supportsTrackingAndSelection;
@property(retain) NSViewController<XCSUIStatusBadgeClickHandler> *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(copy) NSColor *lightBadgeColor; // @synthesize lightBadgeColor=_lightBadgeColor;
@property(copy) NSColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(copy) NSColor *secondaryBadgeColor; // @synthesize secondaryBadgeColor=_secondaryBadgeColor;
@property unsigned long long secondaryBadgeCount; // @synthesize secondaryBadgeCount=_secondaryBadgeCount;
@property unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property double preferredFontSize; // @synthesize preferredFontSize=_preferredFontSize;
@property(copy) NSImage *badgeIcon; // @synthesize badgeIcon=_badgeIcon;
@property(copy) NSString *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
- (void).cxx_destruct;

@end

