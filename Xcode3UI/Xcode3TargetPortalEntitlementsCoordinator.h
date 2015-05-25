//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Xcode3UI/Xcode3TargetCoordinator.h>

#import "IDEAppIDFeatureDelegate.h"

@class DVTAppIDFeatures, DVTDelayedInvocation, DVTNotificationToken, DVTObservingToken, NSError, NSMapTable, NSObject<OS_dispatch_queue>, Xcode3TargetBuildSettingsCoordinator, Xcode3TargetInfoPlistCoordinator;

@interface Xcode3TargetPortalEntitlementsCoordinator : Xcode3TargetCoordinator <IDEAppIDFeatureDelegate>
{
    DVTAppIDFeatures *_appIDFeatures;
    DVTDelayedInvocation *_delayedReplaceValues;
    NSObject<OS_dispatch_queue> *_portalInteractionQueue;
    unsigned int _currentReplaceBlockGeneration;
    NSMapTable *_clientCallbackToEnqueueGenerationMap;
    DVTNotificationToken *_certificateNotificationToken;
    DVTNotificationToken *_profilesToken;
    DVTObservingToken *_teamObserver;
    DVTObservingToken *_runDestinationObserver;
    id <IDEPortalEntitlementsCoordinatorPlatform> _coordinatorPlatform;
    Xcode3TargetBuildSettingsCoordinator *_buildSettingsCoordinator;
    id <IDEPortalInfoDelegate> _portalInfoDelegate;
    NSError *_currentCodesigningError;
    Xcode3TargetInfoPlistCoordinator *_infoPlistCoordinator;
}

@property(retain) Xcode3TargetInfoPlistCoordinator *infoPlistCoordinator; // @synthesize infoPlistCoordinator=_infoPlistCoordinator;
@property(retain) NSError *currentCodesigningError; // @synthesize currentCodesigningError=_currentCodesigningError;
@property(readonly) id <IDEPortalInfoDelegate> portalInfoDelegate; // @synthesize portalInfoDelegate=_portalInfoDelegate;
@property(retain) Xcode3TargetBuildSettingsCoordinator *buildSettingsCoordinator; // @synthesize buildSettingsCoordinator=_buildSettingsCoordinator;
- (void).cxx_destruct;
- (id)instantiatePortalFlightCheckWithCapabilitiesContext:(id)arg1 key:(id)arg2 value:(id)arg3 valueForReset:(id)arg4 validValues:(id)arg5 humanReadableKey:(id)arg6;
- (void)_writeFeatures:(id)arg1 snapshot:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)capabilitiesContext;
- (void)_readValues;
- (id)codesignParameterSnapshot:(id *)arg1;
- (void)_enqueueReplacementOfEntitlementsWithSnapshot:(id)arg1;
- (id)combinedAppIDFeatures;
- (id)coordinatorPlatform;
- (id)certificateUtilities;
@property(readonly, nonatomic) id <DVTProvisioningProfile> profile;
- (id)setAppIDFeatures:(id)arg1;
@property(readonly) DVTAppIDFeatures *appIDFeatures;
- (void)primitiveInvalidate;
- (id)initWithTarget:(id)arg1 portalInfoDelegate:(id)arg2;
- (id)initWithTarget:(id)arg1;

@end

