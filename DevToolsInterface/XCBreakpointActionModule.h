//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCActionSkinningModule.h>

@interface XCBreakpointActionModule : XCActionSkinningModule
{
}

- (void)prepareFocus;
- (void)breakpointDidChange:(id)arg1;
- (void)_debuggingSessionStarted:(id)arg1;
- (void)_windowDidResignKey:(id)arg1;
- (void)_textEditingEnded:(id)arg1;
- (void)_changeAction:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)_viewDidLoad;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)viewDidLoad;
- (void)updateBreakpointAction:(id)arg1;
- (void)setupBreakpointAction:(id)arg1;
- (id)breakpoint;
- (id)breakpointAction;

@end

