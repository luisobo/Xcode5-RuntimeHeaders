/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

@class NSView, SCNView;

// Not exported
@interface SCNMonitor : NSWindowController
{
    BOOL _nibLoaded;
    NSView *_modelViewContainer;
    NSView *_modelInspectors[10];
    SCNView *_scnView;
}

- (void)launchMonitor:(id)arg1;
- (void)setSCNView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sceneDidChange;
- (void)_updateResourceManager;
- (struct __C3DScene *)scene;
- (void)modelTypeChanged:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)awakeFromNib;
- (void)showModelInspector:(int)arg1;

@end

