/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEProjectItemModel.h"

@class NSArray;

@interface Xcode3KeychainItemModel : IDEProjectItemModel
{
    NSArray *_keychainAccessGroups;
}

@property(copy, nonatomic) NSArray *keychainAccessGroups; // @synthesize keychainAccessGroups=_keychainAccessGroups;
- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (void)modelWasDisabled;
- (void)modelWasEnabledWithContext:(id)arg1;
- (id)defaultKeychainAccessGroups;
- (id)defaultKeychainAccessGroup;
- (void)_setKeychainAccessGroups:(id)arg1 postAssignmentBlock:(id)arg2;
- (void)targetCoordinatorChanged:(id)arg1;
- (void)readValuesFromEntitlements;
- (void)primitiveInvalidate;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

