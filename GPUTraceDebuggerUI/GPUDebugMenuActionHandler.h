//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDECommandHandler.h"
#import "NSMenuDelegate.h"

@class DVTObservingToken, GPUDebuggingAddition, NSString;

__attribute__((visibility("hidden")))
@interface GPUDebugMenuActionHandler : NSObject <IDECommandHandler, NSMenuDelegate>
{
    GPUDebuggingAddition *_debuggingAddition;
    DVTObservingToken *_debuggingAdditionsObservation;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (id)currentWorkspaceTabController;
- (void).cxx_destruct;
- (void)displayGPUPerformance:(id)arg1;
- (void)_openLocation:(id)arg1 withEventType:(unsigned long long)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

