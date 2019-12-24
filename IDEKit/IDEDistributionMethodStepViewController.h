/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEDistributionStepViewController.h>

#import "DVTTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"

@class DVTTableView, NSArray, NSString;

@interface IDEDistributionMethodStepViewController : IDEDistributionStepViewController <DVTTableViewDelegate, NSTableViewDataSource>
{
    DVTTableView *_distributionTableView;
    id _selectedDistributionMethodWrapper;
    NSArray *_distributionMethodWrappers;
}

@property(retain) NSArray *distributionMethodWrappers; // @synthesize distributionMethodWrappers=_distributionMethodWrappers;
@property(retain, nonatomic) id selectedDistributionMethodWrapper; // @synthesize selectedDistributionMethodWrapper=_selectedDistributionMethodWrapper;
@property(retain) DVTTableView *distributionTableView; // @synthesize distributionTableView=_distributionTableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)selectGroupedDistributionMethod:(id)arg1;
- (void)selectDistributionMethod:(id)arg1;
- (void)selectDistributionMethodWrapper:(id)arg1;
- (void)loadView;
- (id)providedOutputContextPropetyNames;
- (id)requiredInputContextPropertyNames;
- (id)distributionSelectionDescription;
- (BOOL)canGoNext;
- (BOOL)canGoPrevious;
- (id)title;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

