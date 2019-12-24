/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorProperty.h"

#import "IBWindowLayoutViewDelegate-Protocol.h"

@class IBWindowLayoutView, IDEInspectorKeyPath, NSString;

@interface IBNSWindowLayoutProperty : IDEInspectorProperty <IBWindowLayoutViewDelegate>
{
    IBWindowLayoutView *layoutView;
    IDEInspectorKeyPath *_strutsKeyPath;
    IDEInspectorKeyPath *_screenFrameKeyPath;
    IDEInspectorKeyPath *_contentRectKeyPath;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)windowLayoutViewDidChangeWindowContentRect:(id)arg1;
- (void)windowLayoutViewDidChangeWindowStruts:(id)arg1;
- (double)baseline;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

