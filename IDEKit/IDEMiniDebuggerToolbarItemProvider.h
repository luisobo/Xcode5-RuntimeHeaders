/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEToolbarItemProvider-Protocol.h"

@class NSString;

@interface IDEMiniDebuggerToolbarItemProvider : NSObject <IDEToolbarItemProvider>
{
}

+ (id)itemForItemIdentifier:(id)arg1 forToolbarInWindow:(id)arg2;
+ (id)_createAppFocusToolbarItemForWindow:(id)arg1;
+ (id)_createConsoleToolbarItemForWindow:(id)arg1;
+ (id)_createPauseToolbarItemForWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

